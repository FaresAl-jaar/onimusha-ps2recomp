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

// Function: sub_003BD230
// Address: 0x3bd230 - 0x3bd284
void sub_003BD230_0x3bd230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BD230_0x3bd230");
#endif

    switch (ctx->pc) {
        case 0x3bd24cu: goto label_3bd24c;
        default: break;
    }

    ctx->pc = 0x3bd230u;

    // 0x3bd230: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3bd230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3bd234: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3bd234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3bd238: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3bd238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3bd23c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3bd23cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3bd240: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3bd240u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bd244: 0xc0eeed4  jal         func_3BBB50
    ctx->pc = 0x3BD244u;
    SET_GPR_U32(ctx, 31, 0x3BD24Cu);
    ctx->pc = 0x3BD248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BD244u;
    // 0x3bd248: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BBB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BBB50u, 0x3BD244u, 0x3BD24Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BD24Cu;
label_3bd24c:
    // 0x3bd24c: 0x26232b20  addiu       $v1, $s1, 0x2B20
    ctx->pc = 0x3bd24cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 11040));
    // 0x3bd250: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x3bd250u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3bd254: 0x7e040000  sq          $a0, 0x0($s0)
    ctx->pc = 0x3bd254u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 4));
    // 0x3bd258: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x3bd258u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x3bd25c: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x3bd25cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3bd260: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3bd260u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3bd264: 0x0  nop
    ctx->pc = 0x3bd264u;
    // NOP
    // 0x3bd268: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x3bd268u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3bd26c: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x3bd26cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x3bd270: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3bd270u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3bd274: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3bd274u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3bd278: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3bd278u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3bd27c: 0x3e00008  jr          $ra
    ctx->pc = 0x3BD27Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BD280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BD27Cu;
        // 0x3bd280: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BD27Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BD284u;
}
