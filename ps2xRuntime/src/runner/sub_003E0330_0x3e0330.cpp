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

// Function: sub_003E0330
// Address: 0x3e0330 - 0x3e03d8
void sub_003E0330_0x3e0330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E0330_0x3e0330");
#endif

    switch (ctx->pc) {
        case 0x3e0374u: goto label_3e0374;
        case 0x3e0390u: goto label_3e0390;
        case 0x3e03b8u: goto label_3e03b8;
        case 0x3e03c8u: goto label_3e03c8;
        default: break;
    }

    ctx->pc = 0x3e0330u;

    // 0x3e0330: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3e0330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3e0334: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x3e0334u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x3e0338: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3e0338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3e033c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3e033cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3e0340: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3e0340u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3e0344: 0x27a6002c  addiu       $a2, $sp, 0x2C
    ctx->pc = 0x3e0344u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x3e0348: 0x78830020  lq          $v1, 0x20($a0)
    ctx->pc = 0x3e0348u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x3e034c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3e034cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e0350: 0x26052b20  addiu       $a1, $s0, 0x2B20
    ctx->pc = 0x3e0350u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 11040));
    // 0x3e0354: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3e0354u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e0358: 0x7c832b20  sq          $v1, 0x2B20($a0)
    ctx->pc = 0x3e0358u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 11040), GPR_VEC(ctx, 3));
    // 0x3e035c: 0xc4812b24  lwc1        $f1, 0x2B24($a0)
    ctx->pc = 0x3e035cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 11044)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3e0360: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x3e0360u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3e0364: 0xe4802b24  swc1        $f0, 0x2B24($a0)
    ctx->pc = 0x3e0364u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 11044), bits); }
    // 0x3e0368: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x3e0368u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x3e036c: 0xc04ed64  jal         func_13B590
    ctx->pc = 0x3E036Cu;
    SET_GPR_U32(ctx, 31, 0x3E0374u);
    ctx->pc = 0x3E0370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E036Cu;
    // 0x3e0370: 0x24846710  addiu       $a0, $a0, 0x6710 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13B590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13B590u, 0x3E036Cu, 0x3E0374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E0374u;
label_3e0374:
    // 0x3e0374: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3E0374u;
    {
        const bool branch_taken_0x3e0374 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e0374) {
            ctx->pc = 0x3E0388u;
            goto label_3e0388;
        }
    }
    ctx->pc = 0x3E037Cu;
    // 0x3e037c: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x3e037cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3e0380: 0xe6002b24  swc1        $f0, 0x2B24($s0)
    ctx->pc = 0x3e0380u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 11044), bits); }
    // 0x3e0384: 0x0  nop
    ctx->pc = 0x3e0384u;
    // NOP
label_3e0388:
    // 0x3e0388: 0xc0a4d3c  jal         func_2934F0
    ctx->pc = 0x3E0388u;
    SET_GPR_U32(ctx, 31, 0x3E0390u);
    ctx->pc = 0x3E038Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E0388u;
    // 0x3e038c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2934F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2934F0u, 0x3E0388u, 0x3E0390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E0390u;
label_3e0390:
    // 0x3e0390: 0x9204065c  lbu         $a0, 0x65C($s0)
    ctx->pc = 0x3e0390u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1628)));
    // 0x3e0394: 0x240300f1  addiu       $v1, $zero, 0xF1
    ctx->pc = 0x3e0394u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 241));
    // 0x3e0398: 0x10830009  beq         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3E0398u;
    {
        const bool branch_taken_0x3e0398 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x3E039Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0398u;
        // 0x3e039c: 0x240300f0  addiu       $v1, $zero, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e0398) {
            ctx->pc = 0x3E03C0u;
            goto label_3e03c0;
        }
    }
    ctx->pc = 0x3E03A0u;
    // 0x3e03a0: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3E03A0u;
    {
        const bool branch_taken_0x3e03a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3e03a0) {
            ctx->pc = 0x3E03B0u;
            goto label_3e03b0;
        }
    }
    ctx->pc = 0x3E03A8u;
    // 0x3e03a8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3E03A8u;
    {
        const bool branch_taken_0x3e03a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e03a8) {
            ctx->pc = 0x3E03C8u;
            goto label_3e03c8;
        }
    }
    ctx->pc = 0x3E03B0u;
label_3e03b0:
    // 0x3e03b0: 0xc0f8078  jal         func_3E01E0
    ctx->pc = 0x3E03B0u;
    SET_GPR_U32(ctx, 31, 0x3E03B8u);
    ctx->pc = 0x3E03B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E03B0u;
    // 0x3e03b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E01E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E01E0u, 0x3E03B0u, 0x3E03B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E03B8u;
label_3e03b8:
    // 0x3e03b8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3E03B8u;
    {
        const bool branch_taken_0x3e03b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e03b8) {
            ctx->pc = 0x3E03C8u;
            goto label_3e03c8;
        }
    }
    ctx->pc = 0x3E03C0u;
label_3e03c0:
    // 0x3e03c0: 0xc0f7fb4  jal         func_3DFED0
    ctx->pc = 0x3E03C0u;
    SET_GPR_U32(ctx, 31, 0x3E03C8u);
    ctx->pc = 0x3E03C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E03C0u;
    // 0x3e03c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DFED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DFED0u, 0x3E03C0u, 0x3E03C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E03C8u;
label_3e03c8:
    // 0x3e03c8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3e03c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e03cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3e03ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e03d0: 0x3e00008  jr          $ra
    ctx->pc = 0x3E03D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E03D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E03D0u;
        // 0x3e03d4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E03D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E03D8u;
}
