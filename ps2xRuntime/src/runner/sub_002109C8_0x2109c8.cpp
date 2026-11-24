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

// Function: sub_002109C8
// Address: 0x2109c8 - 0x210a78
void sub_002109C8_0x2109c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002109C8_0x2109c8");
#endif

    switch (ctx->pc) {
        case 0x2109f0u: goto label_2109f0;
        case 0x210a00u: goto label_210a00;
        case 0x210a18u: goto label_210a18;
        case 0x210a30u: goto label_210a30;
        case 0x210a48u: goto label_210a48;
        case 0x210a60u: goto label_210a60;
        default: break;
    }

    ctx->pc = 0x2109c8u;

    // 0x2109c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2109c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2109cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2109ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2109d0: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2109d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2109d4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2109d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2109d8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2109d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2109dc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2109dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2109e0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2109e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2109e4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2109e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2109e8: 0xc08429e  jal         func_210A78
    ctx->pc = 0x2109E8u;
    SET_GPR_U32(ctx, 31, 0x2109F0u);
    ctx->pc = 0x2109ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2109E8u;
    // 0x2109ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x210A78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210A78u, 0x2109E8u, 0x2109F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2109F0u;
label_2109f0:
    // 0x2109f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2109f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2109f4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2109f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2109f8: 0xc0842b6  jal         func_210AD8
    ctx->pc = 0x2109F8u;
    SET_GPR_U32(ctx, 31, 0x210A00u);
    ctx->pc = 0x2109FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2109F8u;
    // 0x2109fc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x210AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210AD8u, 0x2109F8u, 0x210A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210A00u;
label_210a00:
    // 0x210a00: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x210a00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210a04: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x210a04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210a08: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x210A08u;
    {
        const bool branch_taken_0x210a08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x210A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210A08u;
        // 0x210a0c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210a08) {
            ctx->pc = 0x210A60u;
            goto label_210a60;
        }
    }
    ctx->pc = 0x210A10u;
    // 0x210a10: 0xc0842b8  jal         func_210AE0
    ctx->pc = 0x210A10u;
    SET_GPR_U32(ctx, 31, 0x210A18u);
    ctx->pc = 0x210AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210AE0u, 0x210A10u, 0x210A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210A18u;
label_210a18:
    // 0x210a18: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x210A18u;
    {
        const bool branch_taken_0x210a18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x210a18) {
            ctx->pc = 0x210A1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x210A18u;
            // 0x210a1c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x210A64u;
            goto label_210a64;
        }
    }
    ctx->pc = 0x210A20u;
    // 0x210a20: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x210a20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210a24: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x210a24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210a28: 0xc084538  jal         func_2114E0
    ctx->pc = 0x210A28u;
    SET_GPR_U32(ctx, 31, 0x210A30u);
    ctx->pc = 0x210A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210A28u;
    // 0x210a2c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2114E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2114E0u, 0x210A28u, 0x210A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210A30u;
label_210a30:
    // 0x210a30: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x210a30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210a34: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x210a34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210a38: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x210A38u;
    {
        const bool branch_taken_0x210a38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x210A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210A38u;
        // 0x210a3c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210a38) {
            ctx->pc = 0x210A60u;
            goto label_210a60;
        }
    }
    ctx->pc = 0x210A40u;
    // 0x210a40: 0xc084412  jal         func_211048
    ctx->pc = 0x210A40u;
    SET_GPR_U32(ctx, 31, 0x210A48u);
    ctx->pc = 0x211048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211048u, 0x210A40u, 0x210A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210A48u;
label_210a48:
    // 0x210a48: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x210A48u;
    {
        const bool branch_taken_0x210a48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x210a48) {
            ctx->pc = 0x210A4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x210A48u;
            // 0x210a4c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x210A64u;
            goto label_210a64;
        }
    }
    ctx->pc = 0x210A50u;
    // 0x210a50: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x210a50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210a54: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x210a54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210a58: 0xc0844ba  jal         func_2112E8
    ctx->pc = 0x210A58u;
    SET_GPR_U32(ctx, 31, 0x210A60u);
    ctx->pc = 0x210A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210A58u;
    // 0x210a5c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2112E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2112E8u, 0x210A58u, 0x210A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210A60u;
label_210a60:
    // 0x210a60: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x210a60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_210a64:
    // 0x210a64: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x210a64u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x210a68: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x210a68u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x210a6c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x210a6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x210a70: 0x3e00008  jr          $ra
    ctx->pc = 0x210A70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x210A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210A70u;
        // 0x210a74: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x210A70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x210A78u;
}
