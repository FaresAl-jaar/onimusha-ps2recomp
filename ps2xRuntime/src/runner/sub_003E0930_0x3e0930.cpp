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

// Function: sub_003E0930
// Address: 0x3e0930 - 0x3e0990
void sub_003E0930_0x3e0930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E0930_0x3e0930");
#endif

    switch (ctx->pc) {
        case 0x3e0944u: goto label_3e0944;
        default: break;
    }

    ctx->pc = 0x3e0930u;

    // 0x3e0930: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3e0930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3e0934: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3e0934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3e0938: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3e0938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3e093c: 0xc096c80  jal         func_25B200
    ctx->pc = 0x3E093Cu;
    SET_GPR_U32(ctx, 31, 0x3E0944u);
    ctx->pc = 0x3E0940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E093Cu;
    // 0x3e0940: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B200u, 0x3E093Cu, 0x3E0944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E0944u;
label_3e0944:
    // 0x3e0944: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x3E0944u;
    {
        const bool branch_taken_0x3e0944 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E0948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0944u;
        // 0x3e0948: 0x101c3c  dsll32      $v1, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e0944) {
            ctx->pc = 0x3E0980u;
            goto label_3e0980;
        }
    }
    ctx->pc = 0x3E094Cu;
    // 0x3e094c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x3e094cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x3e0950: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3E0950u;
    {
        const bool branch_taken_0x3e0950 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e0950) {
            ctx->pc = 0x3E0960u;
            goto label_3e0960;
        }
    }
    ctx->pc = 0x3E0958u;
    // 0x3e0958: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x3e0958u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3e095c: 0x0  nop
    ctx->pc = 0x3e095cu;
    // NOP
label_3e0960:
    // 0x3e0960: 0x3c034380  lui         $v1, 0x4380
    ctx->pc = 0x3e0960u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17280 << 16));
    // 0x3e0964: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x3e0964u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3e0968: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3e0968u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3e096c: 0x0  nop
    ctx->pc = 0x3e096cu;
    // NOP
    // 0x3e0970: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3e0970u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3e0974: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x3e0974u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x3e0978: 0xe44000b8  swc1        $f0, 0xB8($v0)
    ctx->pc = 0x3e0978u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 184), bits); }
    // 0x3e097c: 0x0  nop
    ctx->pc = 0x3e097cu;
    // NOP
label_3e0980:
    // 0x3e0980: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3e0980u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e0984: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3e0984u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e0988: 0x3e00008  jr          $ra
    ctx->pc = 0x3E0988u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E098Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0988u;
        // 0x3e098c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E0988u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E0990u;
}
