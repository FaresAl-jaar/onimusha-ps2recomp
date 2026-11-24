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

// Function: sub_00324000
// Address: 0x324000 - 0x3240f8
void sub_00324000_0x324000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00324000_0x324000");
#endif

    switch (ctx->pc) {
        case 0x324000u: goto label_324000;
        case 0x324004u: goto label_324004;
        case 0x324008u: goto label_324008;
        case 0x32400cu: goto label_32400c;
        case 0x324010u: goto label_324010;
        case 0x324014u: goto label_324014;
        case 0x324018u: goto label_324018;
        case 0x32401cu: goto label_32401c;
        case 0x324020u: goto label_324020;
        case 0x324024u: goto label_324024;
        case 0x324028u: goto label_324028;
        case 0x32402cu: goto label_32402c;
        case 0x324030u: goto label_324030;
        case 0x324034u: goto label_324034;
        case 0x324038u: goto label_324038;
        case 0x32403cu: goto label_32403c;
        case 0x324040u: goto label_324040;
        case 0x324044u: goto label_324044;
        case 0x324048u: goto label_324048;
        case 0x32404cu: goto label_32404c;
        case 0x324050u: goto label_324050;
        case 0x324054u: goto label_324054;
        case 0x324058u: goto label_324058;
        case 0x32405cu: goto label_32405c;
        case 0x324060u: goto label_324060;
        case 0x324064u: goto label_324064;
        case 0x324068u: goto label_324068;
        case 0x32406cu: goto label_32406c;
        case 0x324070u: goto label_324070;
        case 0x324074u: goto label_324074;
        case 0x324078u: goto label_324078;
        case 0x32407cu: goto label_32407c;
        case 0x324080u: goto label_324080;
        case 0x324084u: goto label_324084;
        case 0x324088u: goto label_324088;
        case 0x32408cu: goto label_32408c;
        case 0x324090u: goto label_324090;
        case 0x324094u: goto label_324094;
        case 0x324098u: goto label_324098;
        case 0x32409cu: goto label_32409c;
        case 0x3240a0u: goto label_3240a0;
        case 0x3240a4u: goto label_3240a4;
        case 0x3240a8u: goto label_3240a8;
        case 0x3240acu: goto label_3240ac;
        case 0x3240b0u: goto label_3240b0;
        case 0x3240b4u: goto label_3240b4;
        case 0x3240b8u: goto label_3240b8;
        case 0x3240bcu: goto label_3240bc;
        case 0x3240c0u: goto label_3240c0;
        case 0x3240c4u: goto label_3240c4;
        case 0x3240c8u: goto label_3240c8;
        case 0x3240ccu: goto label_3240cc;
        case 0x3240d0u: goto label_3240d0;
        case 0x3240d4u: goto label_3240d4;
        case 0x3240d8u: goto label_3240d8;
        case 0x3240dcu: goto label_3240dc;
        case 0x3240e0u: goto label_3240e0;
        case 0x3240e4u: goto label_3240e4;
        case 0x3240e8u: goto label_3240e8;
        case 0x3240ecu: goto label_3240ec;
        case 0x3240f0u: goto label_3240f0;
        case 0x3240f4u: goto label_3240f4;
        default: break;
    }

    ctx->pc = 0x324000u;

label_324000:
    // 0x324000: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x324000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_324004:
    // 0x324004: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x324004u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_324008:
    // 0x324008: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x324008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_32400c:
    // 0x32400c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x32400cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_324010:
    // 0x324010: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x324010u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_324014:
    // 0x324014: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x324014u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_324018:
    // 0x324018: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x324018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_32401c:
    // 0x32401c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x32401cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_324020:
    // 0x324020: 0x90a30032  lbu         $v1, 0x32($a1)
    ctx->pc = 0x324020u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 50)));
label_324024:
    // 0x324024: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x324024u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_324028:
    // 0x324028: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x324028u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_32402c:
    // 0x32402c: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x32402cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
label_324030:
    // 0x324030: 0x8c23ada8  lw          $v1, -0x5258($at)
    ctx->pc = 0x324030u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294946216)));
label_324034:
    // 0x324034: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_324038:
    if (ctx->pc == 0x324038u) {
        ctx->pc = 0x324038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324034u;
        // 0x324038: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32403Cu;
        goto label_32403c;
    }
    ctx->pc = 0x324034u;
    {
        const bool branch_taken_0x324034 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x324038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324034u;
        // 0x324038: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324034) {
            ctx->pc = 0x324048u;
            goto label_324048;
        }
    }
    ctx->pc = 0x32403Cu;
label_32403c:
    // 0x32403c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x32403cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_324040:
    // 0x324040: 0x60f809  jalr        $v1
label_324044:
    if (ctx->pc == 0x324044u) {
        ctx->pc = 0x324044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324040u;
        // 0x324044: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x324048u;
        goto label_324048;
    }
    ctx->pc = 0x324040u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x324048u);
        ctx->pc = 0x324044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324040u;
        // 0x324044: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x324040u, 0x324048u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x324048u;
label_324048:
    // 0x324048: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x324048u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_32404c:
    // 0x32404c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_324050:
    if (ctx->pc == 0x324050u) {
        ctx->pc = 0x324054u;
        goto label_324054;
    }
    ctx->pc = 0x32404Cu;
    {
        const bool branch_taken_0x32404c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x32404c) {
            ctx->pc = 0x324060u;
            goto label_324060;
        }
    }
    ctx->pc = 0x324054u;
label_324054:
    // 0x324054: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x324054u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_324058:
    // 0x324058: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x324058u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_32405c:
    // 0x32405c: 0x0  nop
    ctx->pc = 0x32405cu;
    // NOP
label_324060:
    // 0x324060: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x324060u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_324064:
    // 0x324064: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_324068:
    if (ctx->pc == 0x324068u) {
        ctx->pc = 0x32406Cu;
        goto label_32406c;
    }
    ctx->pc = 0x324064u;
    {
        const bool branch_taken_0x324064 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x324064) {
            ctx->pc = 0x324078u;
            goto label_324078;
        }
    }
    ctx->pc = 0x32406Cu;
label_32406c:
    // 0x32406c: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x32406cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_324070:
    // 0x324070: 0x10000003  b           . + 4 + (0x3 << 2)
label_324074:
    if (ctx->pc == 0x324074u) {
        ctx->pc = 0x324074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324070u;
        // 0x324074: 0xac830004  sw          $v1, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x324078u;
        goto label_324078;
    }
    ctx->pc = 0x324070u;
    {
        const bool branch_taken_0x324070 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x324074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324070u;
        // 0x324074: 0xac830004  sw          $v1, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324070) {
            ctx->pc = 0x324080u;
            goto label_324080;
        }
    }
    ctx->pc = 0x324078u;
label_324078:
    // 0x324078: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x324078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_32407c:
    // 0x32407c: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x32407cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
label_324080:
    // 0x324080: 0x26440900  addiu       $a0, $s2, 0x900
    ctx->pc = 0x324080u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 2304));
label_324084:
    // 0x324084: 0x3c036666  lui         $v1, 0x6666
    ctx->pc = 0x324084u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)26214 << 16));
label_324088:
    // 0x324088: 0x2242023  subu        $a0, $s1, $a0
    ctx->pc = 0x324088u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
label_32408c:
    // 0x32408c: 0x34636667  ori         $v1, $v1, 0x6667
    ctx->pc = 0x32408cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26215);
label_324090:
    // 0x324090: 0x92060010  lbu         $a2, 0x10($s0)
    ctx->pc = 0x324090u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
label_324094:
    // 0x324094: 0x640018  mult        $zero, $v1, $a0
    ctx->pc = 0x324094u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_324098:
    // 0x324098: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x324098u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_32409c:
    // 0x32409c: 0x42fc2  srl         $a1, $a0, 31
    ctx->pc = 0x32409cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
label_3240a0:
    // 0x3240a0: 0x2410821  addu        $at, $s2, $at
    ctx->pc = 0x3240a0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 1)));
label_3240a4:
    // 0x3240a4: 0x2010  mfhi        $a0
    ctx->pc = 0x3240a4u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_3240a8:
    // 0x3240a8: 0x24c30001  addiu       $v1, $a2, 0x1
    ctx->pc = 0x3240a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_3240ac:
    // 0x3240ac: 0xa2030010  sb          $v1, 0x10($s0)
    ctx->pc = 0x3240acu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 16), (uint8_t)GPR_U32(ctx, 3));
label_3240b0:
    // 0x3240b0: 0x9423ad90  lhu         $v1, -0x5270($at)
    ctx->pc = 0x3240b0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294946192)));
label_3240b4:
    // 0x3240b4: 0x42143  sra         $a0, $a0, 5
    ctx->pc = 0x3240b4u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 5));
label_3240b8:
    // 0x3240b8: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x3240b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_3240bc:
    // 0x3240bc: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x3240bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_3240c0:
    // 0x3240c0: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x3240c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_3240c4:
    // 0x3240c4: 0x2410821  addu        $at, $s2, $at
    ctx->pc = 0x3240c4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 1)));
label_3240c8:
    // 0x3240c8: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x3240c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_3240cc:
    // 0x3240cc: 0xa424ad90  sh          $a0, -0x5270($at)
    ctx->pc = 0x3240ccu;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294946192), (uint16_t)GPR_U32(ctx, 4));
label_3240d0:
    // 0x3240d0: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x3240d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_3240d4:
    // 0x3240d4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x3240d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_3240d8:
    // 0x3240d8: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x3240d8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
label_3240dc:
    // 0x3240dc: 0xa425a900  sh          $a1, -0x5700($at)
    ctx->pc = 0x3240dcu;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294945024), (uint16_t)GPR_U32(ctx, 5));
label_3240e0:
    // 0x3240e0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3240e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3240e4:
    // 0x3240e4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3240e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3240e8:
    // 0x3240e8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3240e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3240ec:
    // 0x3240ec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3240ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3240f0:
    // 0x3240f0: 0x3e00008  jr          $ra
label_3240f4:
    if (ctx->pc == 0x3240F4u) {
        ctx->pc = 0x3240F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3240F0u;
        // 0x3240f4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3240F8u;
        goto label_fallthrough_0x3240f0;
    }
    ctx->pc = 0x3240F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3240F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3240F0u;
        // 0x3240f4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3240F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3240f0:
    ctx->pc = 0x3240F8u;
}
