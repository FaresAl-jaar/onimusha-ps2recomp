#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00326170
// Address: 0x326170 - 0x3262fc
void sub_00326170_0x326170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00326170_0x326170");
#endif

    switch (ctx->pc) {
        case 0x326194u: goto label_326194;
        case 0x32619cu: goto label_32619c;
        case 0x3261a8u: goto label_3261a8;
        case 0x3261b0u: goto label_3261b0;
        case 0x3261d0u: goto label_3261d0;
        default: break;
    }

    ctx->pc = 0x326170u;

    // 0x326170: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x326170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x326174: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x326174u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326178: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x326178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x32617c: 0x3406c260  ori         $a2, $zero, 0xC260
    ctx->pc = 0x32617cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49760);
    // 0x326180: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x326180u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x326184: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x326184u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x326188: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x326188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x32618c: 0xc049590  jal         func_125640
    ctx->pc = 0x32618Cu;
    SET_GPR_U32(ctx, 31, 0x326194u);
    ctx->pc = 0x326190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32618Cu;
    // 0x326190: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x32618Cu, 0x326194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326194u;
label_326194:
    // 0x326194: 0xc0c8fd0  jal         func_323F40
    ctx->pc = 0x326194u;
    SET_GPR_U32(ctx, 31, 0x32619Cu);
    ctx->pc = 0x326198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326194u;
    // 0x326198: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323F40u, 0x326194u, 0x32619Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32619Cu;
label_32619c:
    // 0x32619c: 0x3401ae60  ori         $at, $zero, 0xAE60
    ctx->pc = 0x32619cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)44640);
    // 0x3261a0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3261a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3261a4: 0x2019021  addu        $s2, $s0, $at
    ctx->pc = 0x3261a4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
label_3261a8:
    // 0x3261a8: 0xc0c9068  jal         func_3241A0
    ctx->pc = 0x3261A8u;
    SET_GPR_U32(ctx, 31, 0x3261B0u);
    ctx->pc = 0x3261ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3261A8u;
    // 0x3261ac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3241A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3241A0u, 0x3261A8u, 0x3261B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3261B0u;
label_3261b0:
    // 0x3261b0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3261b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3261b4: 0x26520020  addiu       $s2, $s2, 0x20
    ctx->pc = 0x3261b4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x3261b8: 0x2a230020  slti        $v1, $s1, 0x20
    ctx->pc = 0x3261b8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x3261bc: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3261BCu;
    {
        const bool branch_taken_0x3261bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3261bc) {
            ctx->pc = 0x3261A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3261a8;
        }
    }
    ctx->pc = 0x3261C4u;
    // 0x3261c4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3261c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3261c8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3261c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3261cc: 0x0  nop
    ctx->pc = 0x3261ccu;
    // NOP
label_3261d0:
    // 0x3261d0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x3261d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x3261d4: 0xa10821  addu        $at, $a1, $at
    ctx->pc = 0x3261d4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 1)));
    // 0x3261d8: 0x24c30001  addiu       $v1, $a2, 0x1
    ctx->pc = 0x3261d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x3261dc: 0xa426a900  sh          $a2, -0x5700($at)
    ctx->pc = 0x3261dcu;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294945024), (uint16_t)GPR_U32(ctx, 6));
    // 0x3261e0: 0x24c40002  addiu       $a0, $a2, 0x2
    ctx->pc = 0x3261e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x3261e4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x3261e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x3261e8: 0xa10821  addu        $at, $a1, $at
    ctx->pc = 0x3261e8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 1)));
    // 0x3261ec: 0xa423a902  sh          $v1, -0x56FE($at)
    ctx->pc = 0x3261ecu;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294945026), (uint16_t)GPR_U32(ctx, 3));
    // 0x3261f0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x3261f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x3261f4: 0x24c30003  addiu       $v1, $a2, 0x3
    ctx->pc = 0x3261f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 3));
    // 0x3261f8: 0xa10821  addu        $at, $a1, $at
    ctx->pc = 0x3261f8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 1)));
    // 0x3261fc: 0xa424a904  sh          $a0, -0x56FC($at)
    ctx->pc = 0x3261fcu;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294945028), (uint16_t)GPR_U32(ctx, 4));
    // 0x326200: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x326200u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x326204: 0x24c40004  addiu       $a0, $a2, 0x4
    ctx->pc = 0x326204u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x326208: 0xa10821  addu        $at, $a1, $at
    ctx->pc = 0x326208u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 1)));
    // 0x32620c: 0xa423a906  sh          $v1, -0x56FA($at)
    ctx->pc = 0x32620cu;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294945030), (uint16_t)GPR_U32(ctx, 3));
    // 0x326210: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x326210u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x326214: 0x24c30005  addiu       $v1, $a2, 0x5
    ctx->pc = 0x326214u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 5));
    // 0x326218: 0xa10821  addu        $at, $a1, $at
    ctx->pc = 0x326218u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 1)));
    // 0x32621c: 0xa424a908  sh          $a0, -0x56F8($at)
    ctx->pc = 0x32621cu;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294945032), (uint16_t)GPR_U32(ctx, 4));
    // 0x326220: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x326220u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x326224: 0x24c40006  addiu       $a0, $a2, 0x6
    ctx->pc = 0x326224u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 6));
    // 0x326228: 0xa10821  addu        $at, $a1, $at
    ctx->pc = 0x326228u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 1)));
    // 0x32622c: 0xa423a90a  sh          $v1, -0x56F6($at)
    ctx->pc = 0x32622cu;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294945034), (uint16_t)GPR_U32(ctx, 3));
    // 0x326230: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x326230u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x326234: 0x24c30007  addiu       $v1, $a2, 0x7
    ctx->pc = 0x326234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 7));
    // 0x326238: 0xa10821  addu        $at, $a1, $at
    ctx->pc = 0x326238u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 1)));
    // 0x32623c: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x32623cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x326240: 0xa424a90c  sh          $a0, -0x56F4($at)
    ctx->pc = 0x326240u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294945036), (uint16_t)GPR_U32(ctx, 4));
    // 0x326244: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x326244u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x326248: 0xa10821  addu        $at, $a1, $at
    ctx->pc = 0x326248u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 1)));
    // 0x32624c: 0xa423a90e  sh          $v1, -0x56F2($at)
    ctx->pc = 0x32624cu;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294945038), (uint16_t)GPR_U32(ctx, 3));
    // 0x326250: 0x28c30200  slti        $v1, $a2, 0x200
    ctx->pc = 0x326250u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)512) ? 1 : 0);
    // 0x326254: 0x1460ffde  bnez        $v1, . + 4 + (-0x22 << 2)
    ctx->pc = 0x326254u;
    {
        const bool branch_taken_0x326254 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x326258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326254u;
        // 0x326258: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326254) {
            ctx->pc = 0x3261D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3261d0;
        }
    }
    ctx->pc = 0x32625Cu;
    // 0x32625c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x32625cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x326260: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x326260u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x326264: 0x24040200  addiu       $a0, $zero, 0x200
    ctx->pc = 0x326264u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x326268: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x326268u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x32626c: 0xa424ad90  sh          $a0, -0x5270($at)
    ctx->pc = 0x32626cu;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294946192), (uint16_t)GPR_U32(ctx, 4));
    // 0x326270: 0x70031b89  pcpyld      $v1, $zero, $v1
    ctx->pc = 0x326270u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x326274: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x326274u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x326278: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x326278u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x32627c: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x32627cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x326280: 0x240400f0  addiu       $a0, $zero, 0xF0
    ctx->pc = 0x326280u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    // 0x326284: 0xfc23ade8  sd          $v1, -0x5218($at)
    ctx->pc = 0x326284u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 4294946280), GPR_U64(ctx, 3));
    // 0x326288: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x326288u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x32628c: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x32628cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x326290: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x326290u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x326294: 0xa023ad8b  sb          $v1, -0x5275($at)
    ctx->pc = 0x326294u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294946187), (uint8_t)GPR_U32(ctx, 3));
    // 0x326298: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x326298u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x32629c: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x32629cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x3262a0: 0xa023ad8c  sb          $v1, -0x5274($at)
    ctx->pc = 0x3262a0u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294946188), (uint8_t)GPR_U32(ctx, 3));
    // 0x3262a4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x3262a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x3262a8: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x3262a8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x3262ac: 0xa023ada6  sb          $v1, -0x525A($at)
    ctx->pc = 0x3262acu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294946214), (uint8_t)GPR_U32(ctx, 3));
    // 0x3262b0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x3262b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x3262b4: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x3262b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x3262b8: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x3262b8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x3262bc: 0xa025ad8a  sb          $a1, -0x5276($at)
    ctx->pc = 0x3262bcu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294946186), (uint8_t)GPR_U32(ctx, 5));
    // 0x3262c0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x3262c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x3262c4: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x3262c4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x3262c8: 0xa424ada4  sh          $a0, -0x525C($at)
    ctx->pc = 0x3262c8u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294946212), (uint16_t)GPR_U32(ctx, 4));
    // 0x3262cc: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x3262ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x3262d0: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x3262d0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x3262d4: 0xa023ad88  sb          $v1, -0x5278($at)
    ctx->pc = 0x3262d4u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294946184), (uint8_t)GPR_U32(ctx, 3));
    // 0x3262d8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x3262d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x3262dc: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x3262dcu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x3262e0: 0xa023ad89  sb          $v1, -0x5277($at)
    ctx->pc = 0x3262e0u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294946185), (uint8_t)GPR_U32(ctx, 3));
    // 0x3262e4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3262e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3262e8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3262e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3262ec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3262ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3262f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3262f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3262f4: 0x3e00008  jr          $ra
    ctx->pc = 0x3262F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3262F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3262F4u;
        // 0x3262f8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3262F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3262FCu;
}
