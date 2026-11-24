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

// Function: sub_002B19E0
// Address: 0x2b19e0 - 0x2b1aa4
void sub_002B19E0_0x2b19e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B19E0_0x2b19e0");
#endif

    switch (ctx->pc) {
        case 0x2b1a1cu: goto label_2b1a1c;
        case 0x2b1a88u: goto label_2b1a88;
        default: break;
    }

    ctx->pc = 0x2b19e0u;

    // 0x2b19e0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2b19e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2b19e4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2b19e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2b19e8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2b19e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2b19ec: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2b19ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2b19f0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2b19f0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b19f4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2b19f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2b19f8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2b19f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b19fc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2b19fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2b1a00: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x2b1a00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1a04: 0x12000020  beqz        $s0, . + 4 + (0x20 << 2)
    ctx->pc = 0x2B1A04u;
    {
        const bool branch_taken_0x2b1a04 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1A04u;
        // 0x2b1a08: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1a04) {
            ctx->pc = 0x2B1A88u;
            goto label_2b1a88;
        }
    }
    ctx->pc = 0x2B1A0Cu;
    // 0x2b1a0c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2b1a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2b1a10: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2b1a10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1a14: 0xc04d748  jal         func_135D20
    ctx->pc = 0x2B1A14u;
    SET_GPR_U32(ctx, 31, 0x2B1A1Cu);
    ctx->pc = 0x2B1A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1A14u;
    // 0x2b1a18: 0x27a6007c  addiu       $a2, $sp, 0x7C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135D20u, 0x2B1A14u, 0x2B1A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1A1Cu;
label_2b1a1c:
    // 0x2b1a1c: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2B1A1Cu;
    {
        const bool branch_taken_0x2b1a1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b1a1c) {
            ctx->pc = 0x2B1A88u;
            goto label_2b1a88;
        }
    }
    ctx->pc = 0x2B1A24u;
    // 0x2b1a24: 0x8f858218  lw          $a1, -0x7DE8($gp)
    ctx->pc = 0x2b1a24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
    // 0x2b1a28: 0x324200ff  andi        $v0, $s2, 0xFF
    ctx->pc = 0x2b1a28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x2b1a2c: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x2b1a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2b1a30: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x2b1a30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x2b1a34: 0x8f8989ac  lw          $t1, -0x7654($gp)
    ctx->pc = 0x2b1a34u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937004)));
    // 0x2b1a38: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2b1a38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1a3c: 0x200582d  daddu       $t3, $s0, $zero
    ctx->pc = 0x2b1a3cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1a40: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2b1a40u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1a44: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x2b1a44u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1a48: 0x5323c  dsll32      $a2, $a1, 8
    ctx->pc = 0x2b1a48u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) << (32 + 8));
    // 0x2b1a4c: 0x6323e  dsrl32      $a2, $a2, 8
    ctx->pc = 0x2b1a4cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 8));
    // 0x2b1a50: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x2b1a50u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
    // 0x2b1a54: 0xc22825  or          $a1, $a2, $v0
    ctx->pc = 0x2b1a54u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x2b1a58: 0x120502d  daddu       $t2, $t1, $zero
    ctx->pc = 0x2b1a58u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1a5c: 0x2462f900  addiu       $v0, $v1, -0x700
    ctx->pc = 0x2b1a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965504));
    // 0x2b1a60: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2b1a60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2b1a64: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2b1a64u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2b1a68: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x2b1a68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x2b1a6c: 0x8fa20064  lw          $v0, 0x64($sp)
    ctx->pc = 0x2b1a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x2b1a70: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x2b1a70u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x2b1a74: 0x2442f870  addiu       $v0, $v0, -0x790
    ctx->pc = 0x2b1a74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965360));
    // 0x2b1a78: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2b1a78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2b1a7c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2b1a7cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2b1a80: 0xc0ac63c  jal         func_2B18F0
    ctx->pc = 0x2B1A80u;
    SET_GPR_U32(ctx, 31, 0x2B1A88u);
    ctx->pc = 0x2B1A84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1A80u;
    // 0x2b1a84: 0xffa20008  sd          $v0, 0x8($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B18F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B18F0u, 0x2B1A80u, 0x2B1A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1A88u;
label_2b1a88:
    // 0x2b1a88: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2b1a88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b1a8c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2b1a8cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b1a90: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2b1a90u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b1a94: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2b1a94u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b1a98: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2b1a98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b1a9c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B1A9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B1AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1A9Cu;
        // 0x2b1aa0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B1A9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B1AA4u;
}
