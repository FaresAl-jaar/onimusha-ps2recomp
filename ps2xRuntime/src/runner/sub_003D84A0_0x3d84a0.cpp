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

// Function: sub_003D84A0
// Address: 0x3d84a0 - 0x3d8598
void sub_003D84A0_0x3d84a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D84A0_0x3d84a0");
#endif

    switch (ctx->pc) {
        case 0x3d8570u: goto label_3d8570;
        case 0x3d8578u: goto label_3d8578;
        case 0x3d8588u: goto label_3d8588;
        default: break;
    }

    ctx->pc = 0x3d84a0u;

    // 0x3d84a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3d84a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3d84a4: 0x2402009d  addiu       $v0, $zero, 0x9D
    ctx->pc = 0x3d84a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 157));
    // 0x3d84a8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3d84a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3d84ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3d84acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3d84b0: 0x9083065c  lbu         $v1, 0x65C($a0)
    ctx->pc = 0x3d84b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1628)));
    // 0x3d84b4: 0x1062002e  beq         $v1, $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x3D84B4u;
    {
        const bool branch_taken_0x3d84b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3D84B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D84B4u;
        // 0x3d84b8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d84b4) {
            ctx->pc = 0x3D8570u;
            goto label_3d8570;
        }
    }
    ctx->pc = 0x3D84BCu;
    // 0x3d84bc: 0x2402009c  addiu       $v0, $zero, 0x9C
    ctx->pc = 0x3d84bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 156));
    // 0x3d84c0: 0x1062002b  beq         $v1, $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x3D84C0u;
    {
        const bool branch_taken_0x3d84c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3D84C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D84C0u;
        // 0x3d84c4: 0x2402009b  addiu       $v0, $zero, 0x9B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 155));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d84c0) {
            ctx->pc = 0x3D8570u;
            goto label_3d8570;
        }
    }
    ctx->pc = 0x3D84C8u;
    // 0x3d84c8: 0x10620029  beq         $v1, $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x3D84C8u;
    {
        const bool branch_taken_0x3d84c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3d84c8) {
            ctx->pc = 0x3D8570u;
            goto label_3d8570;
        }
    }
    ctx->pc = 0x3D84D0u;
    // 0x3d84d0: 0x2402009a  addiu       $v0, $zero, 0x9A
    ctx->pc = 0x3d84d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 154));
    // 0x3d84d4: 0x10620026  beq         $v1, $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x3D84D4u;
    {
        const bool branch_taken_0x3d84d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3D84D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D84D4u;
        // 0x3d84d8: 0x24020099  addiu       $v0, $zero, 0x99 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 153));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d84d4) {
            ctx->pc = 0x3D8570u;
            goto label_3d8570;
        }
    }
    ctx->pc = 0x3D84DCu;
    // 0x3d84dc: 0x10620024  beq         $v1, $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x3D84DCu;
    {
        const bool branch_taken_0x3d84dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3d84dc) {
            ctx->pc = 0x3D8570u;
            goto label_3d8570;
        }
    }
    ctx->pc = 0x3D84E4u;
    // 0x3d84e4: 0x2402008f  addiu       $v0, $zero, 0x8F
    ctx->pc = 0x3d84e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 143));
    // 0x3d84e8: 0x10620021  beq         $v1, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x3D84E8u;
    {
        const bool branch_taken_0x3d84e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3D84ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D84E8u;
        // 0x3d84ec: 0x2402008d  addiu       $v0, $zero, 0x8D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 141));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d84e8) {
            ctx->pc = 0x3D8570u;
            goto label_3d8570;
        }
    }
    ctx->pc = 0x3D84F0u;
    // 0x3d84f0: 0x1062001f  beq         $v1, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x3D84F0u;
    {
        const bool branch_taken_0x3d84f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3d84f0) {
            ctx->pc = 0x3D8570u;
            goto label_3d8570;
        }
    }
    ctx->pc = 0x3D84F8u;
    // 0x3d84f8: 0x2402008c  addiu       $v0, $zero, 0x8C
    ctx->pc = 0x3d84f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
    // 0x3d84fc: 0x1062001c  beq         $v1, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x3D84FCu;
    {
        const bool branch_taken_0x3d84fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3D8500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D84FCu;
        // 0x3d8500: 0x2402008b  addiu       $v0, $zero, 0x8B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 139));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d84fc) {
            ctx->pc = 0x3D8570u;
            goto label_3d8570;
        }
    }
    ctx->pc = 0x3D8504u;
    // 0x3d8504: 0x1062001a  beq         $v1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x3D8504u;
    {
        const bool branch_taken_0x3d8504 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3d8504) {
            ctx->pc = 0x3D8570u;
            goto label_3d8570;
        }
    }
    ctx->pc = 0x3D850Cu;
    // 0x3d850c: 0x24020089  addiu       $v0, $zero, 0x89
    ctx->pc = 0x3d850cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 137));
    // 0x3d8510: 0x10620017  beq         $v1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x3D8510u;
    {
        const bool branch_taken_0x3d8510 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3D8514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8510u;
        // 0x3d8514: 0x24020088  addiu       $v0, $zero, 0x88 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 136));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d8510) {
            ctx->pc = 0x3D8570u;
            goto label_3d8570;
        }
    }
    ctx->pc = 0x3D8518u;
    // 0x3d8518: 0x10620015  beq         $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x3D8518u;
    {
        const bool branch_taken_0x3d8518 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3d8518) {
            ctx->pc = 0x3D8570u;
            goto label_3d8570;
        }
    }
    ctx->pc = 0x3D8520u;
    // 0x3d8520: 0x24020087  addiu       $v0, $zero, 0x87
    ctx->pc = 0x3d8520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 135));
    // 0x3d8524: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x3D8524u;
    {
        const bool branch_taken_0x3d8524 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3D8528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8524u;
        // 0x3d8528: 0x24020086  addiu       $v0, $zero, 0x86 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 134));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d8524) {
            ctx->pc = 0x3D8570u;
            goto label_3d8570;
        }
    }
    ctx->pc = 0x3D852Cu;
    // 0x3d852c: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x3D852Cu;
    {
        const bool branch_taken_0x3d852c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3d852c) {
            ctx->pc = 0x3D8568u;
            goto label_3d8568;
        }
    }
    ctx->pc = 0x3D8534u;
    // 0x3d8534: 0x24020085  addiu       $v0, $zero, 0x85
    ctx->pc = 0x3d8534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 133));
    // 0x3d8538: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3D8538u;
    {
        const bool branch_taken_0x3d8538 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3D853Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8538u;
        // 0x3d853c: 0x24020084  addiu       $v0, $zero, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d8538) {
            ctx->pc = 0x3D8568u;
            goto label_3d8568;
        }
    }
    ctx->pc = 0x3D8540u;
    // 0x3d8540: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3D8540u;
    {
        const bool branch_taken_0x3d8540 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3d8540) {
            ctx->pc = 0x3D8568u;
            goto label_3d8568;
        }
    }
    ctx->pc = 0x3D8548u;
    // 0x3d8548: 0x24020083  addiu       $v0, $zero, 0x83
    ctx->pc = 0x3d8548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 131));
    // 0x3d854c: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3D854Cu;
    {
        const bool branch_taken_0x3d854c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3D8550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D854Cu;
        // 0x3d8550: 0x24020082  addiu       $v0, $zero, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d854c) {
            ctx->pc = 0x3D8568u;
            goto label_3d8568;
        }
    }
    ctx->pc = 0x3D8554u;
    // 0x3d8554: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3D8554u;
    {
        const bool branch_taken_0x3d8554 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3d8554) {
            ctx->pc = 0x3D8568u;
            goto label_3d8568;
        }
    }
    ctx->pc = 0x3D855Cu;
    // 0x3d855c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3D855Cu;
    {
        const bool branch_taken_0x3d855c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d855c) {
            ctx->pc = 0x3D8580u;
            goto label_3d8580;
        }
    }
    ctx->pc = 0x3D8564u;
    // 0x3d8564: 0x0  nop
    ctx->pc = 0x3d8564u;
    // NOP
label_3d8568:
    // 0x3d8568: 0xc0a06e8  jal         func_281BA0
    ctx->pc = 0x3D8568u;
    SET_GPR_U32(ctx, 31, 0x3D8570u);
    ctx->pc = 0x3D856Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D8568u;
    // 0x3d856c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x281BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281BA0u, 0x3D8568u, 0x3D8570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D8570u;
label_3d8570:
    // 0x3d8570: 0xc0a0458  jal         func_281160
    ctx->pc = 0x3D8570u;
    SET_GPR_U32(ctx, 31, 0x3D8578u);
    ctx->pc = 0x3D8574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D8570u;
    // 0x3d8574: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x281160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281160u, 0x3D8570u, 0x3D8578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D8578u;
label_3d8578:
    // 0x3d8578: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3D8578u;
    {
        const bool branch_taken_0x3d8578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d8578) {
            ctx->pc = 0x3D8588u;
            goto label_3d8588;
        }
    }
    ctx->pc = 0x3D8580u;
label_3d8580:
    // 0x3d8580: 0xc0a5f30  jal         func_297CC0
    ctx->pc = 0x3D8580u;
    SET_GPR_U32(ctx, 31, 0x3D8588u);
    ctx->pc = 0x297CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297CC0u, 0x3D8580u, 0x3D8588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D8588u;
label_3d8588:
    // 0x3d8588: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3d8588u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3d858c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3d858cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d8590: 0x3e00008  jr          $ra
    ctx->pc = 0x3D8590u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D8594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8590u;
        // 0x3d8594: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D8590u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D8598u;
}
