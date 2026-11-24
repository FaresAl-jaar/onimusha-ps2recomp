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

// Function: sub_003F4140
// Address: 0x3f4140 - 0x3f421c
void sub_003F4140_0x3f4140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F4140_0x3f4140");
#endif

    switch (ctx->pc) {
        case 0x3f41e4u: goto label_3f41e4;
        default: break;
    }

    ctx->pc = 0x3f4140u;

    // 0x3f4140: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3f4140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3f4144: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3f4144u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3f4148: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3f4148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3f414c: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x3f414cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x3f4150: 0x8c24cec0  lw          $a0, -0x3140($at)
    ctx->pc = 0x3f4150u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x81CEC0u));
    // 0x3f4154: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x3f4154u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x3f4158: 0x1460002d  bnez        $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x3F4158u;
    {
        const bool branch_taken_0x3f4158 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F415Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F4158u;
        // 0x3f415c: 0x3c038000  lui         $v1, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f4158) {
            ctx->pc = 0x3F4210u;
            goto label_3f4210;
        }
    }
    ctx->pc = 0x3F4160u;
    // 0x3f4160: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x3f4160u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x3f4164: 0x1460002a  bnez        $v1, . + 4 + (0x2A << 2)
    ctx->pc = 0x3F4164u;
    {
        const bool branch_taken_0x3f4164 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f4164) {
            ctx->pc = 0x3F4210u;
            goto label_3f4210;
        }
    }
    ctx->pc = 0x3F416Cu;
    // 0x3f416c: 0x8f858d44  lw          $a1, -0x72BC($gp)
    ctx->pc = 0x3f416cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937924)));
    // 0x3f4170: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3f4170u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3f4174: 0x80a401d0  lb          $a0, 0x1D0($a1)
    ctx->pc = 0x3f4174u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 464)));
    // 0x3f4178: 0x10830009  beq         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3F4178u;
    {
        const bool branch_taken_0x3f4178 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x3F417Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F4178u;
        // 0x3f417c: 0x24a601d0  addiu       $a2, $a1, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 464));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f4178) {
            ctx->pc = 0x3F41A0u;
            goto label_3f41a0;
        }
    }
    ctx->pc = 0x3F4180u;
    // 0x3f4180: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3f4180u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3f4184: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3F4184u;
    {
        const bool branch_taken_0x3f4184 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3f4184) {
            ctx->pc = 0x3F41A0u;
            goto label_3f41a0;
        }
    }
    ctx->pc = 0x3F418Cu;
    // 0x3f418c: 0x10800020  beqz        $a0, . + 4 + (0x20 << 2)
    ctx->pc = 0x3F418Cu;
    {
        const bool branch_taken_0x3f418c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f418c) {
            ctx->pc = 0x3F4210u;
            goto label_3f4210;
        }
    }
    ctx->pc = 0x3F4194u;
    // 0x3f4194: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x3F4194u;
    {
        const bool branch_taken_0x3f4194 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f4194) {
            ctx->pc = 0x3F4210u;
            goto label_3f4210;
        }
    }
    ctx->pc = 0x3F419Cu;
    // 0x3f419c: 0x0  nop
    ctx->pc = 0x3f419cu;
    // NOP
label_3f41a0:
    // 0x3f41a0: 0x80a401d1  lb          $a0, 0x1D1($a1)
    ctx->pc = 0x3f41a0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 465)));
    // 0x3f41a4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3f41a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3f41a8: 0x10830017  beq         $a0, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x3F41A8u;
    {
        const bool branch_taken_0x3f41a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x3F41ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F41A8u;
        // 0x3f41ac: 0x24a701d1  addiu       $a3, $a1, 0x1D1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 465));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f41a8) {
            ctx->pc = 0x3F4208u;
            goto label_3f4208;
        }
    }
    ctx->pc = 0x3F41B0u;
    // 0x3f41b0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3f41b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3f41b4: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x3F41B4u;
    {
        const bool branch_taken_0x3f41b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3f41b4) {
            ctx->pc = 0x3F41D8u;
            goto label_3f41d8;
        }
    }
    ctx->pc = 0x3F41BCu;
    // 0x3f41bc: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3F41BCu;
    {
        const bool branch_taken_0x3f41bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f41bc) {
            ctx->pc = 0x3F41D0u;
            goto label_3f41d0;
        }
    }
    ctx->pc = 0x3F41C4u;
    // 0x3f41c4: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x3F41C4u;
    {
        const bool branch_taken_0x3f41c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f41c4) {
            ctx->pc = 0x3F4210u;
            goto label_3f4210;
        }
    }
    ctx->pc = 0x3F41CCu;
    // 0x3f41cc: 0x0  nop
    ctx->pc = 0x3f41ccu;
    // NOP
label_3f41d0:
    // 0x3f41d0: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x3f41d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3f41d4: 0xa0e20000  sb          $v0, 0x0($a3)
    ctx->pc = 0x3f41d4u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
label_3f41d8:
    // 0x3f41d8: 0x8f828d44  lw          $v0, -0x72BC($gp)
    ctx->pc = 0x3f41d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937924)));
    // 0x3f41dc: 0xc0fc714  jal         func_3F1C50
    ctx->pc = 0x3F41DCu;
    SET_GPR_U32(ctx, 31, 0x3F41E4u);
    ctx->pc = 0x3F41E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F41DCu;
    // 0x3f41e0: 0x244401e0  addiu       $a0, $v0, 0x1E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F1C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F1C50u, 0x3F41DCu, 0x3F41E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F41E4u;
label_3f41e4:
    // 0x3f41e4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x3f41e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3f41e8: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3F41E8u;
    {
        const bool branch_taken_0x3f41e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f41e8) {
            ctx->pc = 0x3F4210u;
            goto label_3f4210;
        }
    }
    ctx->pc = 0x3F41F0u;
    // 0x3f41f0: 0x8f848d44  lw          $a0, -0x72BC($gp)
    ctx->pc = 0x3f41f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937924)));
    // 0x3f41f4: 0x808301d1  lb          $v1, 0x1D1($a0)
    ctx->pc = 0x3f41f4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 465)));
    // 0x3f41f8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3f41f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3f41fc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3F41FCu;
    {
        const bool branch_taken_0x3f41fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F4200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F41FCu;
        // 0x3f4200: 0xa08301d1  sb          $v1, 0x1D1($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 465), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f41fc) {
            ctx->pc = 0x3F4210u;
            goto label_3f4210;
        }
    }
    ctx->pc = 0x3F4204u;
    // 0x3f4204: 0x0  nop
    ctx->pc = 0x3f4204u;
    // NOP
label_3f4208:
    // 0x3f4208: 0xa0c00000  sb          $zero, 0x0($a2)
    ctx->pc = 0x3f4208u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3f420c: 0x0  nop
    ctx->pc = 0x3f420cu;
    // NOP
label_3f4210:
    // 0x3f4210: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3f4210u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3f4214: 0x3e00008  jr          $ra
    ctx->pc = 0x3F4214u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F4218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F4214u;
        // 0x3f4218: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F4214u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3F421Cu;
}
