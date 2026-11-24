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

// Function: sub_00131930
// Address: 0x131930 - 0x131980
void sub_00131930_0x131930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00131930_0x131930");
#endif

    ctx->pc = 0x131930u;

    // 0x131930: 0x2403022c  addiu       $v1, $zero, 0x22C
    ctx->pc = 0x131930u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 556));
    // 0x131934: 0xa32818  mult        $a1, $a1, $v1
    ctx->pc = 0x131934u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x131938: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x131938u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x13193c: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x13193cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x131940: 0x24850128  addiu       $a1, $a0, 0x128
    ctx->pc = 0x131940u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 296));
    // 0x131944: 0x8c840228  lw          $a0, 0x228($a0)
    ctx->pc = 0x131944u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 552)));
    // 0x131948: 0x1083000b  beq         $a0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x131948u;
    {
        const bool branch_taken_0x131948 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x13194Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131948u;
        // 0x13194c: 0x41880  sll         $v1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131948) {
            ctx->pc = 0x131978u;
            goto label_131978;
        }
    }
    ctx->pc = 0x131950u;
    // 0x131950: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x131950u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x131954: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x131954u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x131958: 0x8ca30100  lw          $v1, 0x100($a1)
    ctx->pc = 0x131958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 256)));
    // 0x13195c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x13195cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x131960: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x131960u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x131964: 0xac670080  sw          $a3, 0x80($v1)
    ctx->pc = 0x131964u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 7));
    // 0x131968: 0x8ca30100  lw          $v1, 0x100($a1)
    ctx->pc = 0x131968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 256)));
    // 0x13196c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x13196cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x131970: 0xaca30100  sw          $v1, 0x100($a1)
    ctx->pc = 0x131970u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 256), GPR_U32(ctx, 3));
    // 0x131974: 0x0  nop
    ctx->pc = 0x131974u;
    // NOP
label_131978:
    // 0x131978: 0x3e00008  jr          $ra
    ctx->pc = 0x131978u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x131978u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x131980u;
}
