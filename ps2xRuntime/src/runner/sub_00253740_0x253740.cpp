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

// Function: sub_00253740
// Address: 0x253740 - 0x253780
void sub_00253740_0x253740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00253740_0x253740");
#endif

    switch (ctx->pc) {
        case 0x25375cu: goto label_25375c;
        default: break;
    }

    ctx->pc = 0x253740u;

    // 0x253740: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x253740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x253744: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x253744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x253748: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x253748u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25374c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x25374cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x253750: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x253750u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x253754: 0xc094ba8  jal         func_252EA0
    ctx->pc = 0x253754u;
    SET_GPR_U32(ctx, 31, 0x25375Cu);
    ctx->pc = 0x253758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253754u;
    // 0x253758: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x252EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x252EA0u, 0x253754u, 0x25375Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25375Cu;
label_25375c:
    // 0x25375c: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x25375cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
    // 0x253760: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x253760u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x253764: 0x24428970  addiu       $v0, $v0, -0x7690
    ctx->pc = 0x253764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936944));
    // 0x253768: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x253768u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x888974u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x888974u, _value); } while (0);
    // 0x25376c: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x25376cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 17)); ps2TraceGuestWrite(rdram, 0x888970u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x888970u, _value); } while (0);
    // 0x253770: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x253770u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x253774: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x253774u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x253778: 0x8094bae  j           func_252EB8
    ctx->pc = 0x253778u;
    ctx->pc = 0x25377Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253778u;
    // 0x25377c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x252EB8u;
    sub_00252EB8_0x252eb8(rdram, ctx, runtime); return;
    ctx->pc = 0x253780u;
}
