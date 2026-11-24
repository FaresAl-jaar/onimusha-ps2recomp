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

// Function: sub_002129D0
// Address: 0x2129d0 - 0x212aa8
void sub_002129D0_0x2129d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002129D0_0x2129d0");
#endif

    switch (ctx->pc) {
        case 0x2129f8u: goto label_2129f8;
        case 0x212a28u: goto label_212a28;
        case 0x212a54u: goto label_212a54;
        case 0x212a78u: goto label_212a78;
        case 0x212a8cu: goto label_212a8c;
        default: break;
    }

    ctx->pc = 0x2129d0u;

    // 0x2129d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2129d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2129d4: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x2129d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x2129d8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2129d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2129dc: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x2129dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x2129e0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2129e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2129e4: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2129e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2129e8: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x2129e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x2129ec: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2129ECu;
    {
        const bool branch_taken_0x2129ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2129F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2129ECu;
        // 0x2129f0: 0x8e120028  lw          $s2, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2129ec) {
            ctx->pc = 0x212A34u;
            goto label_212a34;
        }
    }
    ctx->pc = 0x2129F4u;
    // 0x2129f4: 0x0  nop
    ctx->pc = 0x2129f4u;
    // NOP
label_2129f8:
    // 0x2129f8: 0x8fa7000c  lw          $a3, 0xC($sp)
    ctx->pc = 0x2129f8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x2129fc: 0xde060990  ld          $a2, 0x990($s0)
    ctx->pc = 0x2129fcu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 16), 2448)));
    // 0x212a00: 0xde020998  ld          $v0, 0x998($s0)
    ctx->pc = 0x212a00u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 2456)));
    // 0x212a04: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x212a04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212a08: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x212a08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x212a0c: 0xe6302d  daddu       $a2, $a3, $a2
    ctx->pc = 0x212a0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 6));
    // 0x212a10: 0xfe060990  sd          $a2, 0x990($s0)
    ctx->pc = 0x212a10u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 2448), GPR_U64(ctx, 6));
    // 0x212a14: 0x43102d  daddu       $v0, $v0, $v1
    ctx->pc = 0x212a14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
    // 0x212a18: 0x10e0001a  beqz        $a3, . + 4 + (0x1A << 2)
    ctx->pc = 0x212A18u;
    {
        const bool branch_taken_0x212a18 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x212A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212A18u;
        // 0x212a1c: 0xfe020998  sd          $v0, 0x998($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 2456), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212a18) {
            ctx->pc = 0x212A84u;
            goto label_212a84;
        }
    }
    ctx->pc = 0x212A20u;
    // 0x212a20: 0xc084ada  jal         func_212B68
    ctx->pc = 0x212A20u;
    SET_GPR_U32(ctx, 31, 0x212A28u);
    ctx->pc = 0x212B68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212B68u, 0x212A20u, 0x212A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212A28u;
label_212a28:
    // 0x212a28: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x212a28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212a2c: 0x16200015  bnez        $s1, . + 4 + (0x15 << 2)
    ctx->pc = 0x212A2Cu;
    {
        const bool branch_taken_0x212a2c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x212a2c) {
            ctx->pc = 0x212A84u;
            goto label_212a84;
        }
    }
    ctx->pc = 0x212A34u;
label_212a34:
    // 0x212a34: 0x8e020060  lw          $v0, 0x60($s0)
    ctx->pc = 0x212a34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x212a38: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x212A38u;
    {
        const bool branch_taken_0x212a38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x212A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212A38u;
        // 0x212a3c: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212a38) {
            ctx->pc = 0x212A84u;
            goto label_212a84;
        }
    }
    ctx->pc = 0x212A40u;
    // 0x212a40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x212a40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212a44: 0x27a80008  addiu       $t0, $sp, 0x8
    ctx->pc = 0x212a44u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x212a48: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x212a48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212a4c: 0xc084aaa  jal         func_212AA8
    ctx->pc = 0x212A4Cu;
    SET_GPR_U32(ctx, 31, 0x212A54u);
    ctx->pc = 0x212A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212A4Cu;
    // 0x212a50: 0x27a60004  addiu       $a2, $sp, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212AA8u, 0x212A4Cu, 0x212A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212A54u;
label_212a54:
    // 0x212a54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x212a54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212a58: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x212a58u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212a5c: 0x27a7000c  addiu       $a3, $sp, 0xC
    ctx->pc = 0x212a5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
    // 0x212a60: 0x16200008  bnez        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x212A60u;
    {
        const bool branch_taken_0x212a60 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x212A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212A60u;
        // 0x212a64: 0x27a80010  addiu       $t0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212a60) {
            ctx->pc = 0x212A84u;
            goto label_212a84;
        }
    }
    ctx->pc = 0x212A68u;
    // 0x212a68: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x212a68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x212a6c: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x212a6cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x212a70: 0xc084af4  jal         func_212BD0
    ctx->pc = 0x212A70u;
    SET_GPR_U32(ctx, 31, 0x212A78u);
    ctx->pc = 0x212A74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212A70u;
    // 0x212a74: 0x8fa90008  lw          $t1, 0x8($sp) (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212BD0u, 0x212A70u, 0x212A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212A78u;
label_212a78:
    // 0x212a78: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x212a78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212a7c: 0x1220ffde  beqz        $s1, . + 4 + (-0x22 << 2)
    ctx->pc = 0x212A7Cu;
    {
        const bool branch_taken_0x212a7c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x212A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212A7Cu;
        // 0x212a80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212a7c) {
            ctx->pc = 0x2129F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2129f8;
        }
    }
    ctx->pc = 0x212A84u;
label_212a84:
    // 0x212a84: 0xc085100  jal         func_214400
    ctx->pc = 0x212A84u;
    SET_GPR_U32(ctx, 31, 0x212A8Cu);
    ctx->pc = 0x212A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212A84u;
    // 0x212a88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214400u, 0x212A84u, 0x212A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212A8Cu;
label_212a8c:
    // 0x212a8c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x212a8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212a90: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x212a90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x212a94: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x212a94u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x212a98: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x212a98u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x212a9c: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x212a9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x212aa0: 0x3e00008  jr          $ra
    ctx->pc = 0x212AA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x212AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212AA0u;
        // 0x212aa4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x212AA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x212AA8u;
}
