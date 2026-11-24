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

// Function: sub_00253AE0
// Address: 0x253ae0 - 0x253b38
void sub_00253AE0_0x253ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00253AE0_0x253ae0");
#endif

    switch (ctx->pc) {
        case 0x253b10u: goto label_253b10;
        default: break;
    }

    ctx->pc = 0x253ae0u;

    // 0x253ae0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x253ae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x253ae4: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x253ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x253ae8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x253ae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x253aec: 0x2442070c  addiu       $v0, $v0, 0x70C
    ctx->pc = 0x253aecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1804));
    // 0x253af0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x253af0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4E070Cu));
    // 0x253af4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x253af4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x253af8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x253af8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x4E070Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4E070Cu, _value); } while (0);
    // 0x253afc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x253afcu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x4E070Cu));
    // 0x253b00: 0x1480000b  bnez        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x253B00u;
    {
        const bool branch_taken_0x253b00 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x253B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253B00u;
        // 0x253b04: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253b00) {
            ctx->pc = 0x253B30u;
            goto label_253b30;
        }
    }
    ctx->pc = 0x253B08u;
    // 0x253b08: 0xc094e7e  jal         func_2539F8
    ctx->pc = 0x253B08u;
    SET_GPR_U32(ctx, 31, 0x253B10u);
    ctx->pc = 0x2539F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2539F8u, 0x253B08u, 0x253B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253B10u;
label_253b10:
    // 0x253b10: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x253b10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x253b14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x253b14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x253b18: 0x24848970  addiu       $a0, $a0, -0x7690
    ctx->pc = 0x253b18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936944));
    // 0x253b1c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x253b1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253b20: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x253b20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x253b24: 0x8049590  j           func_125640
    ctx->pc = 0x253B24u;
    ctx->pc = 0x253B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253B24u;
    // 0x253b28: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    sub_00125640_0x125640(rdram, ctx, runtime); return;
    ctx->pc = 0x253B2Cu;
    // 0x253b2c: 0x0  nop
    ctx->pc = 0x253b2cu;
    // NOP
label_253b30:
    // 0x253b30: 0x3e00008  jr          $ra
    ctx->pc = 0x253B30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x253B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253B30u;
        // 0x253b34: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x253B30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x253B38u;
}
