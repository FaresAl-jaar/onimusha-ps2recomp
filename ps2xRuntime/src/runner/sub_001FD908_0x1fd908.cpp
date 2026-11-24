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

// Function: sub_001FD908
// Address: 0x1fd908 - 0x1fd958
void sub_001FD908_0x1fd908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FD908_0x1fd908");
#endif

    switch (ctx->pc) {
        case 0x1fd91cu: goto label_1fd91c;
        default: break;
    }

    ctx->pc = 0x1fd908u;

    // 0x1fd908: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1fd908u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1fd90c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1fd90cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1fd910: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1fd910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1fd914: 0xc07f5d0  jal         func_1FD740
    ctx->pc = 0x1FD914u;
    SET_GPR_U32(ctx, 31, 0x1FD91Cu);
    ctx->pc = 0x1FD918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD914u;
    // 0x1fd918: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD740u, 0x1FD914u, 0x1FD91Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD91Cu;
label_1fd91c:
    // 0x1fd91c: 0x3c05ff02  lui         $a1, 0xFF02
    ctx->pc = 0x1fd91cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65282 << 16));
    // 0x1fd920: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1fd920u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd924: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FD924u;
    {
        const bool branch_taken_0x1fd924 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD924u;
        // 0x1fd928: 0x34a50103  ori         $a1, $a1, 0x103 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)259);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd924) {
            ctx->pc = 0x1FD940u;
            goto label_1fd940;
        }
    }
    ctx->pc = 0x1FD92Cu;
    // 0x1fd92c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fd92cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fd930: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1fd930u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1fd934: 0x807f55c  j           func_1FD570
    ctx->pc = 0x1FD934u;
    ctx->pc = 0x1FD938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD934u;
    // 0x1fd938: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD570u;
    sub_001FD570_0x1fd570(rdram, ctx, runtime); return;
    ctx->pc = 0x1FD93Cu;
    // 0x1fd93c: 0x0  nop
    ctx->pc = 0x1fd93cu;
    // NOP
label_1fd940:
    // 0x1fd940: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1fd940u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fd944: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1fd944u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1fd948: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1fd948u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1fd94c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fd94cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fd950: 0x3e00008  jr          $ra
    ctx->pc = 0x1FD950u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FD954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD950u;
        // 0x1fd954: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FD950u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FD958u;
}
