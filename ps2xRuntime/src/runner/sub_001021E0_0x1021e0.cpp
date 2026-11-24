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

// Function: sub_001021E0
// Address: 0x1021e0 - 0x102244
void sub_001021E0_0x1021e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001021E0_0x1021e0");
#endif

    switch (ctx->pc) {
        case 0x1021e0u: goto label_1021e0;
        case 0x1021e4u: goto label_1021e4;
        case 0x1021e8u: goto label_1021e8;
        case 0x1021ecu: goto label_1021ec;
        case 0x1021f0u: goto label_1021f0;
        case 0x1021f4u: goto label_1021f4;
        case 0x1021f8u: goto label_1021f8;
        case 0x1021fcu: goto label_1021fc;
        case 0x102200u: goto label_102200;
        case 0x102204u: goto label_102204;
        case 0x102208u: goto label_102208;
        case 0x10220cu: goto label_10220c;
        case 0x102210u: goto label_102210;
        case 0x102214u: goto label_102214;
        case 0x102218u: goto label_102218;
        case 0x10221cu: goto label_10221c;
        case 0x102220u: goto label_102220;
        case 0x102224u: goto label_102224;
        case 0x102228u: goto label_102228;
        case 0x10222cu: goto label_10222c;
        case 0x102230u: goto label_102230;
        case 0x102234u: goto label_102234;
        case 0x102238u: goto label_102238;
        case 0x10223cu: goto label_10223c;
        case 0x102240u: goto label_102240;
        default: break;
    }

    ctx->pc = 0x1021e0u;

label_1021e0:
    // 0x1021e0: 0x78900120  lq          $s0, 0x120($a0)
    ctx->pc = 0x1021e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 4), 288)));
label_1021e4:
    // 0x1021e4: 0x78910130  lq          $s1, 0x130($a0)
    ctx->pc = 0x1021e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 4), 304)));
label_1021e8:
    // 0x1021e8: 0x78920140  lq          $s2, 0x140($a0)
    ctx->pc = 0x1021e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 4), 320)));
label_1021ec:
    // 0x1021ec: 0x78930150  lq          $s3, 0x150($a0)
    ctx->pc = 0x1021ecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 4), 336)));
label_1021f0:
    // 0x1021f0: 0x78940160  lq          $s4, 0x160($a0)
    ctx->pc = 0x1021f0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 4), 352)));
label_1021f4:
    // 0x1021f4: 0x78950170  lq          $s5, 0x170($a0)
    ctx->pc = 0x1021f4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 4), 368)));
label_1021f8:
    // 0x1021f8: 0x78960180  lq          $s6, 0x180($a0)
    ctx->pc = 0x1021f8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 4), 384)));
label_1021fc:
    // 0x1021fc: 0x78970190  lq          $s7, 0x190($a0)
    ctx->pc = 0x1021fcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 4), 400)));
label_102200:
    // 0x102200: 0x789e0200  lq          $fp, 0x200($a0)
    ctx->pc = 0x102200u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 4), 512)));
label_102204:
    // 0x102204: 0xc4940288  lwc1        $f20, 0x288($a0)
    ctx->pc = 0x102204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_102208:
    // 0x102208: 0xc495028c  lwc1        $f21, 0x28C($a0)
    ctx->pc = 0x102208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 652)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_10220c:
    // 0x10220c: 0xc4960290  lwc1        $f22, 0x290($a0)
    ctx->pc = 0x10220cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 656)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_102210:
    // 0x102210: 0xc4970294  lwc1        $f23, 0x294($a0)
    ctx->pc = 0x102210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 660)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_102214:
    // 0x102214: 0xc4980298  lwc1        $f24, 0x298($a0)
    ctx->pc = 0x102214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 664)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_102218:
    // 0x102218: 0xc499029c  lwc1        $f25, 0x29C($a0)
    ctx->pc = 0x102218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 668)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
label_10221c:
    // 0x10221c: 0xc49a02a0  lwc1        $f26, 0x2A0($a0)
    ctx->pc = 0x10221cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
label_102220:
    // 0x102220: 0xc49b02a4  lwc1        $f27, 0x2A4($a0)
    ctx->pc = 0x102220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 676)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
label_102224:
    // 0x102224: 0xc49c02a8  lwc1        $f28, 0x2A8($a0)
    ctx->pc = 0x102224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 680)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
label_102228:
    // 0x102228: 0xc49d02ac  lwc1        $f29, 0x2AC($a0)
    ctx->pc = 0x102228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 684)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[29] = f; }
label_10222c:
    // 0x10222c: 0xc49e02b0  lwc1        $f30, 0x2B0($a0)
    ctx->pc = 0x10222cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 688)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[30] = f; }
label_102230:
    // 0x102230: 0xc49f02b4  lwc1        $f31, 0x2B4($a0)
    ctx->pc = 0x102230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 692)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[31] = f; }
label_102234:
    // 0x102234: 0x8c9d001c  lw          $sp, 0x1C($a0)
    ctx->pc = 0x102234u;
    SET_GPR_S32(ctx, 29, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_102238:
    // 0x102238: 0x8c820224  lw          $v0, 0x224($a0)
    ctx->pc = 0x102238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 548)));
label_10223c:
    // 0x10223c: 0xc00008  jr          $a2
label_102240:
    if (ctx->pc == 0x102240u) {
        ctx->pc = 0x102240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10223Cu;
        // 0x102240: 0x3a2e822  sub         $sp, $sp, $v0 (Delay Slot)
        { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 29), GPR_U32(ctx, 2), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 29, (int32_t)tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x102244u;
        goto label_fallthrough_0x10223c;
    }
    ctx->pc = 0x10223Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        ctx->pc = 0x102240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10223Cu;
        // 0x102240: 0x3a2e822  sub         $sp, $sp, $v0 (Delay Slot)
        { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 29), GPR_U32(ctx, 2), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 29, (int32_t)tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10223Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x10223c:
    ctx->pc = 0x102244u;
}
