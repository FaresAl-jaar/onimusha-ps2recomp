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

// Function: sub_00209270
// Address: 0x209270 - 0x2092dc
void sub_00209270_0x209270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00209270_0x209270");
#endif

    switch (ctx->pc) {
        case 0x20928cu: goto label_20928c;
        case 0x2092c0u: goto label_2092c0;
        default: break;
    }

    ctx->pc = 0x209270u;

    // 0x209270: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x209270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x209274: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x209274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x209278: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x209278u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20927c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x20927cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x209280: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x209280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x209284: 0xc081d84  jal         func_207610
    ctx->pc = 0x209284u;
    SET_GPR_U32(ctx, 31, 0x20928Cu);
    ctx->pc = 0x209288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209284u;
    // 0x209288: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207610u, 0x209284u, 0x20928Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20928Cu;
label_20928c:
    // 0x20928c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20928cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x209290: 0x10430009  beq         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x209290u;
    {
        const bool branch_taken_0x209290 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x209294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209290u;
        // 0x209294: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209290) {
            ctx->pc = 0x2092B8u;
            goto label_2092b8;
        }
    }
    ctx->pc = 0x209298u;
    // 0x209298: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x209298u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x20929c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20929cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2092a0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2092a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2092a4: 0x24847f48  addiu       $a0, $a0, 0x7F48
    ctx->pc = 0x2092a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32584));
    // 0x2092a8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2092a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2092ac: 0x8082e3e  j           func_20B8F8
    ctx->pc = 0x2092ACu;
    ctx->pc = 0x2092B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2092ACu;
    // 0x2092b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B8F8u;
    sub_0020B8F8_0x20b8f8(rdram, ctx, runtime); return;
    ctx->pc = 0x2092B4u;
    // 0x2092b4: 0x0  nop
    ctx->pc = 0x2092b4u;
    // NOP
label_2092b8:
    // 0x2092b8: 0xc0821e6  jal         func_208798
    ctx->pc = 0x2092B8u;
    SET_GPR_U32(ctx, 31, 0x2092C0u);
    ctx->pc = 0x208798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208798u, 0x2092B8u, 0x2092C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2092C0u;
label_2092c0:
    // 0x2092c0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2092c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2092c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2092c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2092c8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2092c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2092cc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2092ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2092d0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2092d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2092d4: 0x808993c  j           func_2264F0
    ctx->pc = 0x2092D4u;
    ctx->pc = 0x2092D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2092D4u;
    // 0x2092d8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2264F0u;
    sub_002264F0_0x2264f0(rdram, ctx, runtime); return;
    ctx->pc = 0x2092DCu;
}
