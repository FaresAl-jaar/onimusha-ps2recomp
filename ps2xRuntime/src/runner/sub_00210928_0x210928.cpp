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

// Function: sub_00210928
// Address: 0x210928 - 0x2109c8
void sub_00210928_0x210928(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00210928_0x210928");
#endif

    switch (ctx->pc) {
        case 0x210950u: goto label_210950;
        case 0x210960u: goto label_210960;
        case 0x2109b0u: goto label_2109b0;
        default: break;
    }

    ctx->pc = 0x210928u;

    // 0x210928: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x210928u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x21092c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x21092cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x210930: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x210930u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210934: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x210934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x210938: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x210938u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21093c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x21093cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x210940: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x210940u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210944: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x210944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x210948: 0xc084990  jal         func_212640
    ctx->pc = 0x210948u;
    SET_GPR_U32(ctx, 31, 0x210950u);
    ctx->pc = 0x21094Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210948u;
    // 0x21094c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212640u, 0x210948u, 0x210950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210950u;
label_210950:
    // 0x210950: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x210950u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210954: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x210954u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210958: 0xc084272  jal         func_2109C8
    ctx->pc = 0x210958u;
    SET_GPR_U32(ctx, 31, 0x210960u);
    ctx->pc = 0x21095Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210958u;
    // 0x21095c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2109C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2109C8u, 0x210958u, 0x210960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210960u;
label_210960:
    // 0x210960: 0x8e450008  lw          $a1, 0x8($s2)
    ctx->pc = 0x210960u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x210964: 0x14a00008  bnez        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x210964u;
    {
        const bool branch_taken_0x210964 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x210968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210964u;
        // 0x210968: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210964) {
            ctx->pc = 0x210988u;
            goto label_210988;
        }
    }
    ctx->pc = 0x21096Cu;
    // 0x21096c: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x21096cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x210970: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x210970u;
    {
        const bool branch_taken_0x210970 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x210974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210970u;
        // 0x210974: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210970) {
            ctx->pc = 0x21098Cu;
            goto label_21098c;
        }
    }
    ctx->pc = 0x210978u;
    // 0x210978: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x210978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x21097c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x21097cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x210980: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x210980u;
    {
        const bool branch_taken_0x210980 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x210980) {
            ctx->pc = 0x210990u;
            goto label_210990;
        }
    }
    ctx->pc = 0x210988u;
label_210988:
    // 0x210988: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x210988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21098c:
    // 0x21098c: 0xa2420000  sb          $v0, 0x0($s2)
    ctx->pc = 0x21098cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 2));
label_210990:
    // 0x210990: 0x14a00004  bnez        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x210990u;
    {
        const bool branch_taken_0x210990 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x210994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210990u;
        // 0x210994: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210990) {
            ctx->pc = 0x2109A4u;
            goto label_2109a4;
        }
    }
    ctx->pc = 0x210998u;
    // 0x210998: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x210998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x21099c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x21099Cu;
    {
        const bool branch_taken_0x21099c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2109A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21099Cu;
        // 0x2109a0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21099c) {
            ctx->pc = 0x2109A8u;
            goto label_2109a8;
        }
    }
    ctx->pc = 0x2109A4u;
label_2109a4:
    // 0x2109a4: 0xa2420001  sb          $v0, 0x1($s2)
    ctx->pc = 0x2109a4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 2));
label_2109a8:
    // 0x2109a8: 0xc084996  jal         func_212658
    ctx->pc = 0x2109A8u;
    SET_GPR_U32(ctx, 31, 0x2109B0u);
    ctx->pc = 0x212658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212658u, 0x2109A8u, 0x2109B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2109B0u;
label_2109b0:
    // 0x2109b0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2109b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2109b4: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2109b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2109b8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2109b8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2109bc: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2109bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2109c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2109C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2109C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2109C0u;
        // 0x2109c4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2109C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2109C8u;
}
