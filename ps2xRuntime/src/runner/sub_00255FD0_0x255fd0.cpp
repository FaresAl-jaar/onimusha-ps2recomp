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

// Function: sub_00255FD0
// Address: 0x255fd0 - 0x256070
void sub_00255FD0_0x255fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00255FD0_0x255fd0");
#endif

    switch (ctx->pc) {
        case 0x256008u: goto label_256008;
        default: break;
    }

    ctx->pc = 0x255fd0u;

    // 0x255fd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x255fd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x255fd4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x255fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x255fd8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x255fd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x255fdc: 0x14a20004  bne         $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x255FDCu;
    {
        const bool branch_taken_0x255fdc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x255FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255FDCu;
        // 0x255fe0: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255fdc) {
            ctx->pc = 0x255FF0u;
            goto label_255ff0;
        }
    }
    ctx->pc = 0x255FE4u;
    // 0x255fe4: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x255FE4u;
    {
        const bool branch_taken_0x255fe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x255FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255FE4u;
        // 0x255fe8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255fe4) {
            ctx->pc = 0x256060u;
            goto label_256060;
        }
    }
    ctx->pc = 0x255FECu;
    // 0x255fec: 0x0  nop
    ctx->pc = 0x255fecu;
    // NOP
label_255ff0:
    // 0x255ff0: 0x51402  srl         $v0, $a1, 16
    ctx->pc = 0x255ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
    // 0x255ff4: 0x30b0ffff  andi        $s0, $a1, 0xFFFF
    ctx->pc = 0x255ff4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x255ff8: 0x51e02  srl         $v1, $a1, 24
    ctx->pc = 0x255ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 24));
    // 0x255ffc: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x255ffcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x256000: 0xc0957e0  jal         func_255F80
    ctx->pc = 0x256000u;
    SET_GPR_U32(ctx, 31, 0x256008u);
    ctx->pc = 0x256004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256000u;
    // 0x256004: 0x304600ff  andi        $a2, $v0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x255F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255F80u, 0x256000u, 0x256008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256008u;
label_256008:
    // 0x256008: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x256008u;
    {
        const bool branch_taken_0x256008 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x256008) {
            ctx->pc = 0x256018u;
            goto label_256018;
        }
    }
    ctx->pc = 0x256010u;
    // 0x256010: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x256010u;
    {
        const bool branch_taken_0x256010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x256014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256010u;
        // 0x256014: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256010) {
            ctx->pc = 0x256060u;
            goto label_256060;
        }
    }
    ctx->pc = 0x256018u;
label_256018:
    // 0x256018: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x256018u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25601c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x25601cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x256020: 0x42082  srl         $a0, $a0, 2
    ctx->pc = 0x256020u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 2));
    // 0x256024: 0x2485ffff  addiu       $a1, $a0, -0x1
    ctx->pc = 0x256024u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x256028: 0x14a30003  bne         $a1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x256028u;
    {
        const bool branch_taken_0x256028 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x256028) {
            ctx->pc = 0x256038u;
            goto label_256038;
        }
    }
    ctx->pc = 0x256030u;
    // 0x256030: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x256030u;
    {
        const bool branch_taken_0x256030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x256034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256030u;
        // 0x256034: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256030) {
            ctx->pc = 0x256060u;
            goto label_256060;
        }
    }
    ctx->pc = 0x256038u;
label_256038:
    // 0x256038: 0x3204ffff  andi        $a0, $s0, 0xFFFF
    ctx->pc = 0x256038u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x25603c: 0x85182b  sltu        $v1, $a0, $a1
    ctx->pc = 0x25603cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x256040: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x256040u;
    {
        const bool branch_taken_0x256040 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x256044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256040u;
        // 0x256044: 0x41880  sll         $v1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256040) {
            ctx->pc = 0x256050u;
            goto label_256050;
        }
    }
    ctx->pc = 0x256048u;
    // 0x256048: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x256048u;
    {
        const bool branch_taken_0x256048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25604Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256048u;
        // 0x25604c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256048) {
            ctx->pc = 0x25605Cu;
            goto label_25605c;
        }
    }
    ctx->pc = 0x256050u;
label_256050:
    // 0x256050: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x256050u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x256054: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x256054u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x256058: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x256058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_25605c:
    // 0x25605c: 0x0  nop
    ctx->pc = 0x25605cu;
    // NOP
label_256060:
    // 0x256060: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x256060u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x256064: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x256064u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x256068: 0x3e00008  jr          $ra
    ctx->pc = 0x256068u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25606Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256068u;
        // 0x25606c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x256068u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x256070u;
}
