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

// Function: sub_0011EF00
// Address: 0x11ef00 - 0x11efa0
void sub_0011EF00_0x11ef00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011EF00_0x11ef00");
#endif

    switch (ctx->pc) {
        case 0x11ef54u: goto label_11ef54;
        case 0x11ef7cu: goto label_11ef7c;
        default: break;
    }

    ctx->pc = 0x11ef00u;

    // 0x11ef00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x11ef00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x11ef04: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x11ef04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x11ef08: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11ef08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11ef0c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x11ef0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x11ef10: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x11ef10u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    // 0x11ef14: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x11ef14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x11ef18: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x11ef18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x11ef1c: 0xae0341e0  sw          $v1, 0x41E0($s0)
    ctx->pc = 0x11ef1cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x4041E0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4041E0u, _value); } while (0);
    // 0x11ef20: 0x8e0241e0  lw          $v0, 0x41E0($s0)
    ctx->pc = 0x11ef20u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4041E0u));
    // 0x11ef24: 0xac8241e4  sw          $v0, 0x41E4($a0)
    ctx->pc = 0x11ef24u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x4041E4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4041E4u, _value); } while (0);
    // 0x11ef28: 0x8e0341e0  lw          $v1, 0x41E0($s0)
    ctx->pc = 0x11ef28u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4041E0u));
    // 0x11ef2c: 0x14650006  bne         $v1, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x11EF2Cu;
    {
        const bool branch_taken_0x11ef2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x11EF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EF2Cu;
        // 0x11ef30: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ef2c) {
            ctx->pc = 0x11EF48u;
            goto label_11ef48;
        }
    }
    ctx->pc = 0x11EF34u;
    // 0x11ef34: 0xae0041e0  sw          $zero, 0x41E0($s0)
    ctx->pc = 0x11ef34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16864), GPR_U32(ctx, 0));
    // 0x11ef38: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x11ef38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x11ef3c: 0xac4041b4  sw          $zero, 0x41B4($v0)
    ctx->pc = 0x11ef3cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x4041B4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4041B4u, _value); } while (0);
    // 0x11ef40: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x11EF40u;
    {
        const bool branch_taken_0x11ef40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11EF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EF40u;
        // 0x11ef44: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ef40) {
            ctx->pc = 0x11EF94u;
            goto label_11ef94;
        }
    }
    ctx->pc = 0x11EF48u;
label_11ef48:
    // 0x11ef48: 0x8c4441a8  lw          $a0, 0x41A8($v0)
    ctx->pc = 0x11ef48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16808)));
    // 0x11ef4c: 0xc043804  jal         func_10E010
    ctx->pc = 0x11EF4Cu;
    SET_GPR_U32(ctx, 31, 0x11EF54u);
    ctx->pc = 0x10E010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E010u, 0x11EF4Cu, 0x11EF54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11EF54u;
label_11ef54:
    // 0x11ef54: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x11ef54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x11ef58: 0x8c624194  lw          $v0, 0x4194($v1)
    ctx->pc = 0x11ef58u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x404194u));
    // 0x11ef5c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x11EF5Cu;
    {
        const bool branch_taken_0x11ef5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11EF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EF5Cu;
        // 0x11ef60: 0x3c020069  lui         $v0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ef5c) {
            ctx->pc = 0x11EF84u;
            goto label_11ef84;
        }
    }
    ctx->pc = 0x11EF64u;
    // 0x11ef64: 0x8c434180  lw          $v1, 0x4180($v0)
    ctx->pc = 0x11ef64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16768)));
    // 0x11ef68: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x11EF68u;
    {
        const bool branch_taken_0x11ef68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11EF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EF68u;
        // 0x11ef6c: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ef68) {
            ctx->pc = 0x11EF84u;
            goto label_11ef84;
        }
    }
    ctx->pc = 0x11EF70u;
    // 0x11ef70: 0x8c4441a0  lw          $a0, 0x41A0($v0)
    ctx->pc = 0x11ef70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16800)));
    // 0x11ef74: 0xc043804  jal         func_10E010
    ctx->pc = 0x11EF74u;
    SET_GPR_U32(ctx, 31, 0x11EF7Cu);
    ctx->pc = 0x10E010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E010u, 0x11EF74u, 0x11EF7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11EF7Cu;
label_11ef7c:
    // 0x11ef7c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x11EF7Cu;
    {
        const bool branch_taken_0x11ef7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11ef7c) {
            ctx->pc = 0x11EF8Cu;
            goto label_11ef8c;
        }
    }
    ctx->pc = 0x11EF84u;
label_11ef84:
    // 0x11ef84: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x11ef84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x11ef88: 0xac4041b4  sw          $zero, 0x41B4($v0)
    ctx->pc = 0x11ef88u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x4041B4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4041B4u, _value); } while (0);
label_11ef8c:
    // 0x11ef8c: 0xae0041e0  sw          $zero, 0x41E0($s0)
    ctx->pc = 0x11ef8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16864), GPR_U32(ctx, 0));
    // 0x11ef90: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x11ef90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_11ef94:
    // 0x11ef94: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11ef94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11ef98: 0x3e00008  jr          $ra
    ctx->pc = 0x11EF98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11EF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EF98u;
        // 0x11ef9c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11EF98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11EFA0u;
}
