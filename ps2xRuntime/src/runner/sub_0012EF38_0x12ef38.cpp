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

// Function: sub_0012EF38
// Address: 0x12ef38 - 0x12efd4
void sub_0012EF38_0x12ef38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012EF38_0x12ef38");
#endif

    switch (ctx->pc) {
        case 0x12ef50u: goto label_12ef50;
        case 0x12efa0u: goto label_12efa0;
        default: break;
    }

    ctx->pc = 0x12ef38u;

    // 0x12ef38: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x12ef38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x12ef3c: 0xffa40020  sd          $a0, 0x20($sp)
    ctx->pc = 0x12ef3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 4));
    // 0x12ef40: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x12ef40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ef44: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x12ef44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x12ef48: 0xc04b988  jal         func_12E620
    ctx->pc = 0x12EF48u;
    SET_GPR_U32(ctx, 31, 0x12EF50u);
    ctx->pc = 0x12EF4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12EF48u;
    // 0x12ef4c: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E620u, 0x12EF48u, 0x12EF50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12EF50u;
label_12ef50:
    // 0x12ef50: 0x8fae0000  lw          $t6, 0x0($sp)
    ctx->pc = 0x12ef50u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12ef54: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x12ef54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ef58: 0x39cf0002  xori        $t7, $t6, 0x2
    ctx->pc = 0x12ef58u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) ^ (uint64_t)(uint16_t)2);
    // 0x12ef5c: 0x11e00010  beqz        $t7, . + 4 + (0x10 << 2)
    ctx->pc = 0x12EF5Cu;
    {
        const bool branch_taken_0x12ef5c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12EF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EF5Cu;
        // 0x12ef60: 0x2dcd0002  sltiu       $t5, $t6, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 13, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ef5c) {
            ctx->pc = 0x12EFA0u;
            goto label_12efa0;
        }
    }
    ctx->pc = 0x12EF64u;
    // 0x12ef64: 0x15a0000f  bnez        $t5, . + 4 + (0xF << 2)
    ctx->pc = 0x12EF64u;
    {
        const bool branch_taken_0x12ef64 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x12EF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EF64u;
        // 0x12ef68: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ef64) {
            ctx->pc = 0x12EFA4u;
            goto label_12efa4;
        }
    }
    ctx->pc = 0x12EF6Cu;
    // 0x12ef6c: 0x39cf0004  xori        $t7, $t6, 0x4
    ctx->pc = 0x12ef6cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) ^ (uint64_t)(uint16_t)4);
    // 0x12ef70: 0x11e00006  beqz        $t7, . + 4 + (0x6 << 2)
    ctx->pc = 0x12EF70u;
    {
        const bool branch_taken_0x12ef70 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12EF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EF70u;
        // 0x12ef74: 0x8faf0008  lw          $t7, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ef70) {
            ctx->pc = 0x12EF8Cu;
            goto label_12ef8c;
        }
    }
    ctx->pc = 0x12EF78u;
    // 0x12ef78: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x12ef78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ef7c: 0x5e00009  bltz        $t7, . + 4 + (0x9 << 2)
    ctx->pc = 0x12EF7Cu;
    {
        const bool branch_taken_0x12ef7c = (GPR_S64(ctx, 15) < 0);
        ctx->pc = 0x12EF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EF7Cu;
        // 0x12ef80: 0x29ee001f  slti        $t6, $t7, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 14, ((int64_t)GPR_S64(ctx, 15) < (int64_t)(int32_t)31) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ef7c) {
            ctx->pc = 0x12EFA4u;
            goto label_12efa4;
        }
    }
    ctx->pc = 0x12EF84u;
    // 0x12ef84: 0x15c00009  bnez        $t6, . + 4 + (0x9 << 2)
    ctx->pc = 0x12EF84u;
    {
        const bool branch_taken_0x12ef84 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x12EF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EF84u;
        // 0x12ef88: 0x240e003c  addiu       $t6, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ef84) {
            ctx->pc = 0x12EFACu;
            goto label_12efac;
        }
    }
    ctx->pc = 0x12EF8Cu;
label_12ef8c:
    // 0x12ef8c: 0x3c0e7fff  lui         $t6, 0x7FFF
    ctx->pc = 0x12ef8cu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)32767 << 16));
    // 0x12ef90: 0x8faf0004  lw          $t7, 0x4($sp)
    ctx->pc = 0x12ef90u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x12ef94: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x12ef94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x12ef98: 0x35ceffff  ori         $t6, $t6, 0xFFFF
    ctx->pc = 0x12ef98u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)65535);
    // 0x12ef9c: 0x1cf100a  movz        $v0, $t6, $t7
    ctx->pc = 0x12ef9cu;
    if (GPR_U64(ctx, 15) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 14));
label_12efa0:
    // 0x12efa0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x12efa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_12efa4:
    // 0x12efa4: 0x3e00008  jr          $ra
    ctx->pc = 0x12EFA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12EFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EFA4u;
        // 0x12efa8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12EFA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12EFACu;
label_12efac:
    // 0x12efac: 0x1cf7023  subu        $t6, $t6, $t7
    ctx->pc = 0x12efacu;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 15)));
    // 0x12efb0: 0xdfaf0010  ld          $t7, 0x10($sp)
    ctx->pc = 0x12efb0u;
    SET_GPR_U64(ctx, 15, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12efb4: 0x1cf7816  dsrlv       $t7, $t7, $t6
    ctx->pc = 0x12efb4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) >> (GPR_U32(ctx, 14) & 0x3F));
    // 0x12efb8: 0xf783c  dsll32      $t7, $t7, 0
    ctx->pc = 0x12efb8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 0));
    // 0x12efbc: 0x8fae0004  lw          $t6, 0x4($sp)
    ctx->pc = 0x12efbcu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x12efc0: 0xf783f  dsra32      $t7, $t7, 0
    ctx->pc = 0x12efc0u;
    SET_GPR_S64(ctx, 15, GPR_S64(ctx, 15) >> (32 + 0));
    // 0x12efc4: 0xf6823  negu        $t5, $t7
    ctx->pc = 0x12efc4u;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 15)));
    // 0x12efc8: 0x1e0102d  daddu       $v0, $t7, $zero
    ctx->pc = 0x12efc8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12efcc: 0x1000fff4  b           . + 4 + (-0xC << 2)
    ctx->pc = 0x12EFCCu;
    {
        const bool branch_taken_0x12efcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12EFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EFCCu;
        // 0x12efd0: 0x1ae100b  movn        $v0, $t5, $t6 (Delay Slot)
        if (GPR_U64(ctx, 14) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12efcc) {
            ctx->pc = 0x12EFA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12efa0;
        }
    }
    ctx->pc = 0x12EFD4u;
}
