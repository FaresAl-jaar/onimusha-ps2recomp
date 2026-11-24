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

// Function: sub_00389D10
// Address: 0x389d10 - 0x389dc0
void sub_00389D10_0x389d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00389D10_0x389d10");
#endif

    switch (ctx->pc) {
        case 0x389d64u: goto label_389d64;
        case 0x389dacu: goto label_389dac;
        default: break;
    }

    ctx->pc = 0x389d10u;

    // 0x389d10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x389d10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x389d14: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x389d14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x389d18: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x389d18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x389d1c: 0x10a00020  beqz        $a1, . + 4 + (0x20 << 2)
    ctx->pc = 0x389D1Cu;
    {
        const bool branch_taken_0x389d1c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x389D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389D1Cu;
        // 0x389d20: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x389d1c) {
            ctx->pc = 0x389DA0u;
            goto label_389da0;
        }
    }
    ctx->pc = 0x389D24u;
    // 0x389d24: 0xc6030000  lwc1        $f3, 0x0($s0)
    ctx->pc = 0x389d24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x389d28: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x389d28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x389d2c: 0xc6020004  lwc1        $f2, 0x4($s0)
    ctx->pc = 0x389d2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x389d30: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x389d30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x389d34: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x389d34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x389d38: 0xe4c30000  swc1        $f3, 0x0($a2)
    ctx->pc = 0x389d38u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x389d3c: 0xe4c20004  swc1        $f2, 0x4($a2)
    ctx->pc = 0x389d3cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x389d40: 0xe4c10008  swc1        $f1, 0x8($a2)
    ctx->pc = 0x389d40u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x389d44: 0xe4c0000c  swc1        $f0, 0xC($a2)
    ctx->pc = 0x389d44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
    // 0x389d48: 0x8e05002c  lw          $a1, 0x2C($s0)
    ctx->pc = 0x389d48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x389d4c: 0x90a300e4  lbu         $v1, 0xE4($a1)
    ctx->pc = 0x389d4cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 228)));
    // 0x389d50: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x389D50u;
    {
        const bool branch_taken_0x389d50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x389D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389D50u;
        // 0x389d54: 0x27848560  addiu       $a0, $gp, -0x7AA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935904));
        ctx->in_delay_slot = false;
        if (branch_taken_0x389d50) {
            ctx->pc = 0x389D68u;
            goto label_389d68;
        }
    }
    ctx->pc = 0x389D58u;
    // 0x389d58: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x389d58u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x389d5c: 0xc053ae8  jal         func_14EBA0
    ctx->pc = 0x389D5Cu;
    SET_GPR_U32(ctx, 31, 0x389D64u);
    ctx->pc = 0x389D60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x389D5Cu;
    // 0x389d60: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14EBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EBA0u, 0x389D5Cu, 0x389D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x389D64u;
label_389d64:
    // 0x389d64: 0x0  nop
    ctx->pc = 0x389d64u;
    // NOP
label_389d68:
    // 0x389d68: 0x8e05002c  lw          $a1, 0x2C($s0)
    ctx->pc = 0x389d68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x389d6c: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x389d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x389d70: 0x8ca400e0  lw          $a0, 0xE0($a1)
    ctx->pc = 0x389d70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 224)));
    // 0x389d74: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x389d74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x389d78: 0xaca300e0  sw          $v1, 0xE0($a1)
    ctx->pc = 0x389d78u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 224), GPR_U32(ctx, 3));
    // 0x389d7c: 0x8e04002c  lw          $a0, 0x2C($s0)
    ctx->pc = 0x389d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x389d80: 0x8c8300e0  lw          $v1, 0xE0($a0)
    ctx->pc = 0x389d80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 224)));
    // 0x389d84: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x389d84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x389d88: 0xac8300e0  sw          $v1, 0xE0($a0)
    ctx->pc = 0x389d88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 224), GPR_U32(ctx, 3));
    // 0x389d8c: 0x8e04002c  lw          $a0, 0x2C($s0)
    ctx->pc = 0x389d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x389d90: 0x8c8300e0  lw          $v1, 0xE0($a0)
    ctx->pc = 0x389d90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 224)));
    // 0x389d94: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x389d94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x389d98: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x389D98u;
    {
        const bool branch_taken_0x389d98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x389D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389D98u;
        // 0x389d9c: 0xac8300e0  sw          $v1, 0xE0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 224), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x389d98) {
            ctx->pc = 0x389DB0u;
            goto label_389db0;
        }
    }
    ctx->pc = 0x389DA0u;
label_389da0:
    // 0x389da0: 0x8e05002c  lw          $a1, 0x2C($s0)
    ctx->pc = 0x389da0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x389da4: 0xc053b28  jal         func_14ECA0
    ctx->pc = 0x389DA4u;
    SET_GPR_U32(ctx, 31, 0x389DACu);
    ctx->pc = 0x389DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x389DA4u;
    // 0x389da8: 0x27848560  addiu       $a0, $gp, -0x7AA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935904));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14ECA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14ECA0u, 0x389DA4u, 0x389DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x389DACu;
label_389dac:
    // 0x389dac: 0x0  nop
    ctx->pc = 0x389dacu;
    // NOP
label_389db0:
    // 0x389db0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x389db0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x389db4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x389db4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x389db8: 0x3e00008  jr          $ra
    ctx->pc = 0x389DB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x389DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389DB8u;
        // 0x389dbc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x389DB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x389DC0u;
}
