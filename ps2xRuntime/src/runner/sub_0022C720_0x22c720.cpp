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

// Function: sub_0022C720
// Address: 0x22c720 - 0x22c784
void sub_0022C720_0x22c720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022C720_0x22c720");
#endif

    switch (ctx->pc) {
        case 0x22c720u: goto label_22c720;
        case 0x22c724u: goto label_22c724;
        case 0x22c728u: goto label_22c728;
        case 0x22c72cu: goto label_22c72c;
        case 0x22c730u: goto label_22c730;
        case 0x22c734u: goto label_22c734;
        case 0x22c738u: goto label_22c738;
        case 0x22c73cu: goto label_22c73c;
        case 0x22c740u: goto label_22c740;
        case 0x22c744u: goto label_22c744;
        case 0x22c748u: goto label_22c748;
        case 0x22c74cu: goto label_22c74c;
        case 0x22c750u: goto label_22c750;
        case 0x22c754u: goto label_22c754;
        case 0x22c758u: goto label_22c758;
        case 0x22c75cu: goto label_22c75c;
        case 0x22c760u: goto label_22c760;
        case 0x22c764u: goto label_22c764;
        case 0x22c768u: goto label_22c768;
        case 0x22c76cu: goto label_22c76c;
        case 0x22c770u: goto label_22c770;
        case 0x22c774u: goto label_22c774;
        case 0x22c778u: goto label_22c778;
        case 0x22c77cu: goto label_22c77c;
        case 0x22c780u: goto label_22c780;
        default: break;
    }

    ctx->pc = 0x22c720u;

label_22c720:
    // 0x22c720: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x22c720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_22c724:
    // 0x22c724: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x22c724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_22c728:
    // 0x22c728: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x22c728u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_22c72c:
    // 0x22c72c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x22c72cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_22c730:
    // 0x22c730: 0x8202000e  lb          $v0, 0xE($s0)
    ctx->pc = 0x22c730u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
label_22c734:
    // 0x22c734: 0x8e060090  lw          $a2, 0x90($s0)
    ctx->pc = 0x22c734u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
label_22c738:
    // 0x22c738: 0x8e0300f4  lw          $v1, 0xF4($s0)
    ctx->pc = 0x22c738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 244)));
label_22c73c:
    // 0x22c73c: 0x8e050094  lw          $a1, 0x94($s0)
    ctx->pc = 0x22c73cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_22c740:
    // 0x22c740: 0xc23018  mult        $a2, $a2, $v0
    ctx->pc = 0x22c740u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_22c744:
    // 0x22c744: 0x8e0700fc  lw          $a3, 0xFC($s0)
    ctx->pc = 0x22c744u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 252)));
label_22c748:
    // 0x22c748: 0xa32823  subu        $a1, $a1, $v1
    ctx->pc = 0x22c748u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_22c74c:
    // 0x22c74c: 0x8e040100  lw          $a0, 0x100($s0)
    ctx->pc = 0x22c74cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
label_22c750:
    // 0x22c750: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x22c750u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
label_22c754:
    // 0x22c754: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x22c754u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_22c758:
    // 0x22c758: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x22c758u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_22c75c:
    // 0x22c75c: 0x28a20000  slti        $v0, $a1, 0x0
    ctx->pc = 0x22c75cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)0) ? 1 : 0);
label_22c760:
    // 0x22c760: 0x62280b  movn        $a1, $v1, $v0
    ctx->pc = 0x22c760u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
label_22c764:
    // 0x22c764: 0xe0f809  jalr        $a3
label_22c768:
    if (ctx->pc == 0x22C768u) {
        ctx->pc = 0x22C768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C764u;
        // 0x22c768: 0x63040  sll         $a2, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C76Cu;
        goto label_22c76c;
    }
    ctx->pc = 0x22C764u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 7);
        SET_GPR_U32(ctx, 31, 0x22C76Cu);
        ctx->pc = 0x22C768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C764u;
        // 0x22c768: 0x63040  sll         $a2, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22C764u, 0x22C76Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22C76Cu;
label_22c76c:
    // 0x22c76c: 0x8e020094  lw          $v0, 0x94($s0)
    ctx->pc = 0x22c76cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_22c770:
    // 0x22c770: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x22c770u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_22c774:
    // 0x22c774: 0xae0200f4  sw          $v0, 0xF4($s0)
    ctx->pc = 0x22c774u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 244), GPR_U32(ctx, 2));
label_22c778:
    // 0x22c778: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22c778u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_22c77c:
    // 0x22c77c: 0x3e00008  jr          $ra
label_22c780:
    if (ctx->pc == 0x22C780u) {
        ctx->pc = 0x22C780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C77Cu;
        // 0x22c780: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C784u;
        goto label_fallthrough_0x22c77c;
    }
    ctx->pc = 0x22C77Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22C780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C77Cu;
        // 0x22c780: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22C77Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x22c77c:
    ctx->pc = 0x22C784u;
}
