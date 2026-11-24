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

// Function: sub_0031A550
// Address: 0x31a550 - 0x31a61c
void sub_0031A550_0x31a550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031A550_0x31a550");
#endif

    switch (ctx->pc) {
        case 0x31a5c0u: goto label_31a5c0;
        case 0x31a5d0u: goto label_31a5d0;
        case 0x31a5e0u: goto label_31a5e0;
        case 0x31a5f0u: goto label_31a5f0;
        case 0x31a600u: goto label_31a600;
        case 0x31a610u: goto label_31a610;
        default: break;
    }

    ctx->pc = 0x31a550u;

    // 0x31a550: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x31a550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x31a554: 0x2402009d  addiu       $v0, $zero, 0x9D
    ctx->pc = 0x31a554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 157));
    // 0x31a558: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31a558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x31a55c: 0x9083065c  lbu         $v1, 0x65C($a0)
    ctx->pc = 0x31a55cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1628)));
    // 0x31a560: 0x10620025  beq         $v1, $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x31A560u;
    {
        const bool branch_taken_0x31a560 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x31A564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A560u;
        // 0x31a564: 0x2402009a  addiu       $v0, $zero, 0x9A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 154));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a560) {
            ctx->pc = 0x31A5F8u;
            goto label_31a5f8;
        }
    }
    ctx->pc = 0x31A568u;
    // 0x31a568: 0x1062001f  beq         $v1, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x31A568u;
    {
        const bool branch_taken_0x31a568 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x31a568) {
            ctx->pc = 0x31A5E8u;
            goto label_31a5e8;
        }
    }
    ctx->pc = 0x31A570u;
    // 0x31a570: 0x24020099  addiu       $v0, $zero, 0x99
    ctx->pc = 0x31a570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 153));
    // 0x31a574: 0x10620018  beq         $v1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x31A574u;
    {
        const bool branch_taken_0x31a574 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x31A578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A574u;
        // 0x31a578: 0x2402008d  addiu       $v0, $zero, 0x8D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 141));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a574) {
            ctx->pc = 0x31A5D8u;
            goto label_31a5d8;
        }
    }
    ctx->pc = 0x31A57Cu;
    // 0x31a57c: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x31A57Cu;
    {
        const bool branch_taken_0x31a57c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x31a57c) {
            ctx->pc = 0x31A5C8u;
            goto label_31a5c8;
        }
    }
    ctx->pc = 0x31A584u;
    // 0x31a584: 0x24020097  addiu       $v0, $zero, 0x97
    ctx->pc = 0x31a584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 151));
    // 0x31a588: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x31A588u;
    {
        const bool branch_taken_0x31a588 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x31A58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A588u;
        // 0x31a58c: 0x24020096  addiu       $v0, $zero, 0x96 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a588) {
            ctx->pc = 0x31A5B8u;
            goto label_31a5b8;
        }
    }
    ctx->pc = 0x31A590u;
    // 0x31a590: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x31A590u;
    {
        const bool branch_taken_0x31a590 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x31a590) {
            ctx->pc = 0x31A5B8u;
            goto label_31a5b8;
        }
    }
    ctx->pc = 0x31A598u;
    // 0x31a598: 0x24020095  addiu       $v0, $zero, 0x95
    ctx->pc = 0x31a598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 149));
    // 0x31a59c: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x31A59Cu;
    {
        const bool branch_taken_0x31a59c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x31A5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A59Cu;
        // 0x31a5a0: 0x24020094  addiu       $v0, $zero, 0x94 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 148));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a59c) {
            ctx->pc = 0x31A5B8u;
            goto label_31a5b8;
        }
    }
    ctx->pc = 0x31A5A4u;
    // 0x31a5a4: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x31A5A4u;
    {
        const bool branch_taken_0x31a5a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x31a5a4) {
            ctx->pc = 0x31A5B8u;
            goto label_31a5b8;
        }
    }
    ctx->pc = 0x31A5ACu;
    // 0x31a5ac: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x31A5ACu;
    {
        const bool branch_taken_0x31a5ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31a5ac) {
            ctx->pc = 0x31A608u;
            goto label_31a608;
        }
    }
    ctx->pc = 0x31A5B4u;
    // 0x31a5b4: 0x0  nop
    ctx->pc = 0x31a5b4u;
    // NOP
label_31a5b8:
    // 0x31a5b8: 0xc0c67ac  jal         func_319EB0
    ctx->pc = 0x31A5B8u;
    SET_GPR_U32(ctx, 31, 0x31A5C0u);
    ctx->pc = 0x319EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x319EB0u, 0x31A5B8u, 0x31A5C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A5C0u;
label_31a5c0:
    // 0x31a5c0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x31A5C0u;
    {
        const bool branch_taken_0x31a5c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31a5c0) {
            ctx->pc = 0x31A610u;
            goto label_31a610;
        }
    }
    ctx->pc = 0x31A5C8u;
label_31a5c8:
    // 0x31a5c8: 0xc0c6900  jal         func_31A400
    ctx->pc = 0x31A5C8u;
    SET_GPR_U32(ctx, 31, 0x31A5D0u);
    ctx->pc = 0x31A400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31A400u, 0x31A5C8u, 0x31A5D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A5D0u;
label_31a5d0:
    // 0x31a5d0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x31A5D0u;
    {
        const bool branch_taken_0x31a5d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31a5d0) {
            ctx->pc = 0x31A610u;
            goto label_31a610;
        }
    }
    ctx->pc = 0x31A5D8u;
label_31a5d8:
    // 0x31a5d8: 0xc0c6838  jal         func_31A0E0
    ctx->pc = 0x31A5D8u;
    SET_GPR_U32(ctx, 31, 0x31A5E0u);
    ctx->pc = 0x31A0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31A0E0u, 0x31A5D8u, 0x31A5E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A5E0u;
label_31a5e0:
    // 0x31a5e0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x31A5E0u;
    {
        const bool branch_taken_0x31a5e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31a5e0) {
            ctx->pc = 0x31A610u;
            goto label_31a610;
        }
    }
    ctx->pc = 0x31A5E8u;
label_31a5e8:
    // 0x31a5e8: 0xc0c688c  jal         func_31A230
    ctx->pc = 0x31A5E8u;
    SET_GPR_U32(ctx, 31, 0x31A5F0u);
    ctx->pc = 0x31A230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31A230u, 0x31A5E8u, 0x31A5F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A5F0u;
label_31a5f0:
    // 0x31a5f0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x31A5F0u;
    {
        const bool branch_taken_0x31a5f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31a5f0) {
            ctx->pc = 0x31A610u;
            goto label_31a610;
        }
    }
    ctx->pc = 0x31A5F8u;
label_31a5f8:
    // 0x31a5f8: 0xc0c68e0  jal         func_31A380
    ctx->pc = 0x31A5F8u;
    SET_GPR_U32(ctx, 31, 0x31A600u);
    ctx->pc = 0x31A380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31A380u, 0x31A5F8u, 0x31A600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A600u;
label_31a600:
    // 0x31a600: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x31A600u;
    {
        const bool branch_taken_0x31a600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31a600) {
            ctx->pc = 0x31A610u;
            goto label_31a610;
        }
    }
    ctx->pc = 0x31A608u;
label_31a608:
    // 0x31a608: 0xc0a5f30  jal         func_297CC0
    ctx->pc = 0x31A608u;
    SET_GPR_U32(ctx, 31, 0x31A610u);
    ctx->pc = 0x297CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297CC0u, 0x31A608u, 0x31A610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A610u;
label_31a610:
    // 0x31a610: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31a610u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31a614: 0x3e00008  jr          $ra
    ctx->pc = 0x31A614u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31A618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A614u;
        // 0x31a618: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31A614u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31A61Cu;
}
