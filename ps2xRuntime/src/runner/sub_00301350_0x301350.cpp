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

// Function: sub_00301350
// Address: 0x301350 - 0x30143c
void sub_00301350_0x301350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00301350_0x301350");
#endif

    switch (ctx->pc) {
        case 0x3013a0u: goto label_3013a0;
        case 0x3013c8u: goto label_3013c8;
        case 0x3013f0u: goto label_3013f0;
        default: break;
    }

    ctx->pc = 0x301350u;

    // 0x301350: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x301350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x301354: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x301354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x301358: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x301358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x30135c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x30135cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x301360: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x301360u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301364: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x301364u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x301368: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x301368u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30136c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x30136cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x301370: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x301370u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301374: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x301374u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x301378: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x301378u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30137c: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x30137cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301380: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x301380u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301384: 0x3c080030  lui         $t0, 0x30
    ctx->pc = 0x301384u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)48 << 16));
    // 0x301388: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x301388u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30138c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x30138cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301390: 0x24070560  addiu       $a3, $zero, 0x560
    ctx->pc = 0x301390u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1376));
    // 0x301394: 0x250812e0  addiu       $t0, $t0, 0x12E0
    ctx->pc = 0x301394u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4832));
    // 0x301398: 0xc0b300c  jal         func_2CC030
    ctx->pc = 0x301398u;
    SET_GPR_U32(ctx, 31, 0x3013A0u);
    ctx->pc = 0x30139Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301398u;
    // 0x30139c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC030u, 0x301398u, 0x3013A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3013A0u;
label_3013a0:
    // 0x3013a0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3013a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3013a4: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x3013A4u;
    {
        const bool branch_taken_0x3013a4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3013A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3013A4u;
        // 0x3013a8: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3013a4) {
            ctx->pc = 0x301410u;
            goto label_301410;
        }
    }
    ctx->pc = 0x3013ACu;
    // 0x3013ac: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x3013acu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3013b0: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x3013b0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3013b4: 0x240502d  daddu       $t2, $s2, $zero
    ctx->pc = 0x3013b4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3013b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3013b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3013bc: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x3013bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x3013c0: 0xc0c067c  jal         func_3019F0
    ctx->pc = 0x3013C0u;
    SET_GPR_U32(ctx, 31, 0x3013C8u);
    ctx->pc = 0x3013C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3013C0u;
    // 0x3013c4: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3019F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3019F0u, 0x3013C0u, 0x3013C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3013C8u;
label_3013c8:
    // 0x3013c8: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x3013c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x3013cc: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x3013ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x3013d0: 0xa6020526  sh          $v0, 0x526($s0)
    ctx->pc = 0x3013d0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1318), (uint16_t)GPR_U32(ctx, 2));
    // 0x3013d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3013d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3013d8: 0xa6030528  sh          $v1, 0x528($s0)
    ctx->pc = 0x3013d8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1320), (uint16_t)GPR_U32(ctx, 3));
    // 0x3013dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3013dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3013e0: 0xa603052a  sh          $v1, 0x52A($s0)
    ctx->pc = 0x3013e0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1322), (uint16_t)GPR_U32(ctx, 3));
    // 0x3013e4: 0xa2000521  sb          $zero, 0x521($s0)
    ctx->pc = 0x3013e4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 0));
    // 0x3013e8: 0xc0c08a8  jal         func_3022A0
    ctx->pc = 0x3013E8u;
    SET_GPR_U32(ctx, 31, 0x3013F0u);
    ctx->pc = 0x3013ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3013E8u;
    // 0x3013ec: 0xa2020520  sb          $v0, 0x520($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 1312), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022A0u, 0x3013E8u, 0x3013F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3013F0u;
label_3013f0:
    // 0x3013f0: 0xae000550  sw          $zero, 0x550($s0)
    ctx->pc = 0x3013f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1360), GPR_U32(ctx, 0));
    // 0x3013f4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3013f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3013f8: 0xae020554  sw          $v0, 0x554($s0)
    ctx->pc = 0x3013f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1364), GPR_U32(ctx, 2));
    // 0x3013fc: 0xa2110558  sb          $s1, 0x558($s0)
    ctx->pc = 0x3013fcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1368), (uint8_t)GPR_U32(ctx, 17));
    // 0x301400: 0xa2000559  sb          $zero, 0x559($s0)
    ctx->pc = 0x301400u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1369), (uint8_t)GPR_U32(ctx, 0));
    // 0x301404: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x301404u;
    {
        const bool branch_taken_0x301404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x301408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301404u;
        // 0x301408: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301404) {
            ctx->pc = 0x301418u;
            goto label_301418;
        }
    }
    ctx->pc = 0x30140Cu;
    // 0x30140c: 0x0  nop
    ctx->pc = 0x30140cu;
    // NOP
label_301410:
    // 0x301410: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x301410u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301414: 0x0  nop
    ctx->pc = 0x301414u;
    // NOP
label_301418:
    // 0x301418: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x301418u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x30141c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x30141cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x301420: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x301420u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x301424: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x301424u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x301428: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x301428u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30142c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x30142cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x301430: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x301430u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x301434: 0x3e00008  jr          $ra
    ctx->pc = 0x301434u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x301438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301434u;
        // 0x301438: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x301434u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30143Cu;
}
