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

// Function: sub_00272200
// Address: 0x272200 - 0x27228c
void sub_00272200_0x272200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00272200_0x272200");
#endif

    switch (ctx->pc) {
        case 0x272238u: goto label_272238;
        case 0x272248u: goto label_272248;
        case 0x27227cu: goto label_27227c;
        default: break;
    }

    ctx->pc = 0x272200u;

    // 0x272200: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x272200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x272204: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x272204u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x272208: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x272208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x27220c: 0x24a20ee9  addiu       $v0, $a1, 0xEE9
    ctx->pc = 0x27220cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 3817));
    // 0x272210: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x272210u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x272214: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x272214u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x272218: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x272218u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27221c: 0xa0860001  sb          $a2, 0x1($a0)
    ctx->pc = 0x27221cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 6));
    // 0x272220: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x272220u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x272224: 0xa0800003  sb          $zero, 0x3($a0)
    ctx->pc = 0x272224u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x272228: 0xa0800004  sb          $zero, 0x4($a0)
    ctx->pc = 0x272228u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x27222c: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x27222cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x272230: 0xc0c70c8  jal         func_31C320
    ctx->pc = 0x272230u;
    SET_GPR_U32(ctx, 31, 0x272238u);
    ctx->pc = 0x272234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272230u;
    // 0x272234: 0x3044ffff  andi        $a0, $v0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x31C320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31C320u, 0x272230u, 0x272238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272238u;
label_272238:
    // 0x272238: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x272238u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x27223c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27223cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272240: 0xc09c8c8  jal         func_272320
    ctx->pc = 0x272240u;
    SET_GPR_U32(ctx, 31, 0x272248u);
    ctx->pc = 0x272244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272240u;
    // 0x272244: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x272320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x272320u, 0x272240u, 0x272248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272248u;
label_272248:
    // 0x272248: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x272248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x27224c: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x27224cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x272250: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x272250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x272254: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x272254u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x272258: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x272258u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x27225c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x27225cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272260: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x272260u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x272264: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x272264u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272268: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x272268u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27226c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x27226cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272270: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x272270u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272274: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x272274u;
    SET_GPR_U32(ctx, 31, 0x27227Cu);
    ctx->pc = 0x272278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272274u;
    // 0x272278: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x272274u, 0x27227Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27227Cu;
label_27227c:
    // 0x27227c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x27227cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x272280: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x272280u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x272284: 0x3e00008  jr          $ra
    ctx->pc = 0x272284u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x272288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272284u;
        // 0x272288: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x272284u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27228Cu;
}
