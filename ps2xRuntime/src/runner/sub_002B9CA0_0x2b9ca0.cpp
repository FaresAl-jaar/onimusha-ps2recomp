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

// Function: sub_002B9CA0
// Address: 0x2b9ca0 - 0x2ba050
void sub_002B9CA0_0x2b9ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B9CA0_0x2b9ca0");
#endif

    switch (ctx->pc) {
        case 0x2b9cf0u: goto label_2b9cf0;
        case 0x2b9d54u: goto label_2b9d54;
        case 0x2b9d80u: goto label_2b9d80;
        case 0x2b9da4u: goto label_2b9da4;
        case 0x2b9db4u: goto label_2b9db4;
        case 0x2b9dc4u: goto label_2b9dc4;
        case 0x2b9dd8u: goto label_2b9dd8;
        case 0x2b9de0u: goto label_2b9de0;
        case 0x2b9e28u: goto label_2b9e28;
        case 0x2b9e44u: goto label_2b9e44;
        case 0x2b9e60u: goto label_2b9e60;
        case 0x2b9ec8u: goto label_2b9ec8;
        case 0x2b9f04u: goto label_2b9f04;
        case 0x2b9f20u: goto label_2b9f20;
        case 0x2b9f2cu: goto label_2b9f2c;
        case 0x2b9f78u: goto label_2b9f78;
        case 0x2b9ff0u: goto label_2b9ff0;
        default: break;
    }

    ctx->pc = 0x2b9ca0u;

    // 0x2b9ca0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2b9ca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2b9ca4: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x2b9ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2b9ca8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2b9ca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2b9cac: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2b9cacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2b9cb0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2b9cb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2b9cb4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2b9cb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2b9cb8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2b9cb8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9cbc: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x2b9cbcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2b9cc0: 0xa08614b4  sb          $a2, 0x14B4($a0)
    ctx->pc = 0x2b9cc0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 5300), (uint8_t)GPR_U32(ctx, 6));
    // 0x2b9cc4: 0xa08714b5  sb          $a3, 0x14B5($a0)
    ctx->pc = 0x2b9cc4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 5301), (uint8_t)GPR_U32(ctx, 7));
    // 0x2b9cc8: 0xa08814b6  sb          $t0, 0x14B6($a0)
    ctx->pc = 0x2b9cc8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 5302), (uint8_t)GPR_U32(ctx, 8));
    // 0x2b9ccc: 0x8c820050  lw          $v0, 0x50($a0)
    ctx->pc = 0x2b9cccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x2b9cd0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B9CD0u;
    {
        const bool branch_taken_0x2b9cd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B9CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9CD0u;
        // 0x2b9cd4: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9cd0) {
            ctx->pc = 0x2B9CE8u;
            goto label_2b9ce8;
        }
    }
    ctx->pc = 0x2B9CD8u;
    // 0x2b9cd8: 0x8e220058  lw          $v0, 0x58($s1)
    ctx->pc = 0x2b9cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x2b9cdc: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2B9CDCu;
    {
        const bool branch_taken_0x2b9cdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b9cdc) {
            ctx->pc = 0x2B9CE8u;
            goto label_2b9ce8;
        }
    }
    ctx->pc = 0x2B9CE4u;
    // 0x2b9ce4: 0xae220050  sw          $v0, 0x50($s1)
    ctx->pc = 0x2b9ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 2));
label_2b9ce8:
    // 0x2b9ce8: 0xc0a6c8c  jal         func_29B230
    ctx->pc = 0x2B9CE8u;
    SET_GPR_U32(ctx, 31, 0x2B9CF0u);
    ctx->pc = 0x2B9CECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9CE8u;
    // 0x2b9cec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29B230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29B230u, 0x2B9CE8u, 0x2B9CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9CF0u;
label_2b9cf0:
    // 0x2b9cf0: 0x8e24004c  lw          $a0, 0x4C($s1)
    ctx->pc = 0x2b9cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x2b9cf4: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2B9CF4u;
    {
        const bool branch_taken_0x2b9cf4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9CF4u;
        // 0x2b9cf8: 0x3c03466a  lui         $v1, 0x466A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18026 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9cf4) {
            ctx->pc = 0x2B9D18u;
            goto label_2b9d18;
        }
    }
    ctx->pc = 0x2B9CFCu;
    // 0x2b9cfc: 0x2402ffdf  addiu       $v0, $zero, -0x21
    ctx->pc = 0x2b9cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
    // 0x2b9d00: 0x34636000  ori         $v1, $v1, 0x6000
    ctx->pc = 0x2b9d00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)24576);
    // 0x2b9d04: 0xac830084  sw          $v1, 0x84($a0)
    ctx->pc = 0x2b9d04u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 3));
    // 0x2b9d08: 0x8e24004c  lw          $a0, 0x4C($s1)
    ctx->pc = 0x2b9d08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x2b9d0c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2b9d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2b9d10: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2b9d10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2b9d14: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2b9d14u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_2b9d18:
    // 0x2b9d18: 0x92270002  lbu         $a3, 0x2($s1)
    ctx->pc = 0x2b9d18u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x2b9d1c: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x2b9d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x2b9d20: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x2b9d20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x2b9d24: 0x2463f380  addiu       $v1, $v1, -0xC80
    ctx->pc = 0x2b9d24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964096));
    // 0x2b9d28: 0x2442f384  addiu       $v0, $v0, -0xC7C
    ctx->pc = 0x2b9d28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964100));
    // 0x2b9d2c: 0x262404e0  addiu       $a0, $s1, 0x4E0
    ctx->pc = 0x2b9d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1248));
    // 0x2b9d30: 0x73040  sll         $a2, $a3, 1
    ctx->pc = 0x2b9d30u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x2b9d34: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x2b9d34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x2b9d38: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x2b9d38u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x2b9d3c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x2b9d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2b9d40: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x2b9d40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2b9d44: 0xc46c0000  lwc1        $f12, 0x0($v1)
    ctx->pc = 0x2b9d44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2b9d48: 0xc44d0000  lwc1        $f13, 0x0($v0)
    ctx->pc = 0x2b9d48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2b9d4c: 0xc04f7b8  jal         func_13DEE0
    ctx->pc = 0x2B9D4Cu;
    SET_GPR_U32(ctx, 31, 0x2B9D54u);
    ctx->pc = 0x2B9D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9D4Cu;
    // 0x2b9d50: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13DEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13DEE0u, 0x2B9D4Cu, 0x2B9D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9D54u;
label_2b9d54:
    // 0x2b9d54: 0x8e240050  lw          $a0, 0x50($s1)
    ctx->pc = 0x2b9d54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x2b9d58: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x2B9D58u;
    {
        const bool branch_taken_0x2b9d58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b9d58) {
            ctx->pc = 0x2B9D90u;
            goto label_2b9d90;
        }
    }
    ctx->pc = 0x2B9D60u;
    // 0x2b9d60: 0x908300ce  lbu         $v1, 0xCE($a0)
    ctx->pc = 0x2b9d60u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 206)));
    // 0x2b9d64: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b9d64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b9d68: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B9D68u;
    {
        const bool branch_taken_0x2b9d68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B9D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9D68u;
        // 0x2b9d6c: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9d68) {
            ctx->pc = 0x2B9D80u;
            goto label_2b9d80;
        }
    }
    ctx->pc = 0x2B9D70u;
    // 0x2b9d70: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2b9d70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9d74: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x2b9d74u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9d78: 0xc060a74  jal         func_1829D0
    ctx->pc = 0x2B9D78u;
    SET_GPR_U32(ctx, 31, 0x2B9D80u);
    ctx->pc = 0x2B9D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9D78u;
    // 0x2b9d7c: 0xc0402d  daddu       $t0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1829D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1829D0u, 0x2B9D78u, 0x2B9D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9D80u;
label_2b9d80:
    // 0x2b9d80: 0x8e230050  lw          $v1, 0x50($s1)
    ctx->pc = 0x2b9d80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x2b9d84: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x2b9d84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x2b9d88: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x2b9d88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x2b9d8c: 0xac620044  sw          $v0, 0x44($v1)
    ctx->pc = 0x2b9d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 68), GPR_U32(ctx, 2));
label_2b9d90:
    // 0x2b9d90: 0x92250001  lbu         $a1, 0x1($s1)
    ctx->pc = 0x2b9d90u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x2b9d94: 0x92260002  lbu         $a2, 0x2($s1)
    ctx->pc = 0x2b9d94u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x2b9d98: 0x92270003  lbu         $a3, 0x3($s1)
    ctx->pc = 0x2b9d98u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x2b9d9c: 0xc05ef14  jal         func_17BC50
    ctx->pc = 0x2B9D9Cu;
    SET_GPR_U32(ctx, 31, 0x2B9DA4u);
    ctx->pc = 0x2B9DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9D9Cu;
    // 0x2b9da0: 0x27848650  addiu       $a0, $gp, -0x79B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17BC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17BC50u, 0x2B9D9Cu, 0x2B9DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9DA4u;
label_2b9da4:
    // 0x2b9da4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2B9DA4u;
    {
        const bool branch_taken_0x2b9da4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9DA4u;
        // 0x2b9da8: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9da4) {
            ctx->pc = 0x2B9DE0u;
            goto label_2b9de0;
        }
    }
    ctx->pc = 0x2B9DACu;
    // 0x2b9dac: 0xc0a88b4  jal         func_2A22D0
    ctx->pc = 0x2B9DACu;
    SET_GPR_U32(ctx, 31, 0x2B9DB4u);
    ctx->pc = 0x2B9DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9DACu;
    // 0x2b9db0: 0x8e24004c  lw          $a0, 0x4C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A22D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A22D0u, 0x2B9DACu, 0x2B9DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9DB4u;
label_2b9db4:
    // 0x2b9db4: 0x8e240078  lw          $a0, 0x78($s1)
    ctx->pc = 0x2b9db4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
    // 0x2b9db8: 0x8e26004c  lw          $a2, 0x4C($s1)
    ctx->pc = 0x2b9db8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x2b9dbc: 0xc05efa0  jal         func_17BE80
    ctx->pc = 0x2B9DBCu;
    SET_GPR_U32(ctx, 31, 0x2B9DC4u);
    ctx->pc = 0x2B9DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9DBCu;
    // 0x2b9dc0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17BE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17BE80u, 0x2B9DBCu, 0x2B9DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9DC4u;
label_2b9dc4:
    // 0x2b9dc4: 0x8e220078  lw          $v0, 0x78($s1)
    ctx->pc = 0x2b9dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
    // 0x2b9dc8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2b9dc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b9dcc: 0xa045007c  sb          $a1, 0x7C($v0)
    ctx->pc = 0x2b9dccu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 124), (uint8_t)GPR_U32(ctx, 5));
    // 0x2b9dd0: 0xc05f454  jal         func_17D150
    ctx->pc = 0x2B9DD0u;
    SET_GPR_U32(ctx, 31, 0x2B9DD8u);
    ctx->pc = 0x2B9DD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9DD0u;
    // 0x2b9dd4: 0x8e240078  lw          $a0, 0x78($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D150u, 0x2B9DD0u, 0x2B9DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9DD8u;
label_2b9dd8:
    // 0x2b9dd8: 0xc05f2c0  jal         func_17CB00
    ctx->pc = 0x2B9DD8u;
    SET_GPR_U32(ctx, 31, 0x2B9DE0u);
    ctx->pc = 0x2B9DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9DD8u;
    // 0x2b9ddc: 0x8e240078  lw          $a0, 0x78($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17CB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17CB00u, 0x2B9DD8u, 0x2B9DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9DE0u;
label_2b9de0:
    // 0x2b9de0: 0x24020046  addiu       $v0, $zero, 0x46
    ctx->pc = 0x2b9de0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x2b9de4: 0xa6220030  sh          $v0, 0x30($s1)
    ctx->pc = 0x2b9de4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 48), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b9de8: 0xae200028  sw          $zero, 0x28($s1)
    ctx->pc = 0x2b9de8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 0));
    // 0x2b9dec: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2b9decu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2b9df0: 0xae200024  sw          $zero, 0x24($s1)
    ctx->pc = 0x2b9df0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 0));
    // 0x2b9df4: 0xae200020  sw          $zero, 0x20($s1)
    ctx->pc = 0x2b9df4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 0));
    // 0x2b9df8: 0xae22002c  sw          $v0, 0x2C($s1)
    ctx->pc = 0x2b9df8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 2));
    // 0x2b9dfc: 0xa62000c2  sh          $zero, 0xC2($s1)
    ctx->pc = 0x2b9dfcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 194), (uint16_t)GPR_U32(ctx, 0));
    // 0x2b9e00: 0x962214b2  lhu         $v0, 0x14B2($s1)
    ctx->pc = 0x2b9e00u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 5298)));
    // 0x2b9e04: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x2b9e04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x2b9e08: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2B9E08u;
    {
        const bool branch_taken_0x2b9e08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b9e08) {
            ctx->pc = 0x2B9E50u;
            goto label_2b9e50;
        }
    }
    ctx->pc = 0x2B9E10u;
    // 0x2b9e10: 0x92220002  lbu         $v0, 0x2($s1)
    ctx->pc = 0x2b9e10u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x2b9e14: 0x28410040  slti        $at, $v0, 0x40
    ctx->pc = 0x2b9e14u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x2b9e18: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x2B9E18u;
    {
        const bool branch_taken_0x2b9e18 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9E18u;
        // 0x2b9e1c: 0x3c040068  lui         $a0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9e18) {
            ctx->pc = 0x2B9E38u;
            goto label_2b9e38;
        }
    }
    ctx->pc = 0x2B9E20u;
    // 0x2b9e20: 0xc09e6e4  jal         func_279B90
    ctx->pc = 0x2B9E20u;
    SET_GPR_U32(ctx, 31, 0x2B9E28u);
    ctx->pc = 0x2B9E24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9E20u;
    // 0x2b9e24: 0x248499c0  addiu       $a0, $a0, -0x6640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x279B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x279B90u, 0x2B9E20u, 0x2B9E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9E28u;
label_2b9e28:
    // 0x2b9e28: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x2b9e28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x2b9e2c: 0x244299c0  addiu       $v0, $v0, -0x6640
    ctx->pc = 0x2b9e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941120));
    // 0x2b9e30: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2B9E30u;
    {
        const bool branch_taken_0x2b9e30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9E30u;
        // 0x2b9e34: 0xae2204b0  sw          $v0, 0x4B0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1200), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9e30) {
            ctx->pc = 0x2B9E50u;
            goto label_2b9e50;
        }
    }
    ctx->pc = 0x2B9E38u;
label_2b9e38:
    // 0x2b9e38: 0x3c040068  lui         $a0, 0x68
    ctx->pc = 0x2b9e38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
    // 0x2b9e3c: 0xc09e6e4  jal         func_279B90
    ctx->pc = 0x2B9E3Cu;
    SET_GPR_U32(ctx, 31, 0x2B9E44u);
    ctx->pc = 0x2B9E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9E3Cu;
    // 0x2b9e40: 0x2484a9d0  addiu       $a0, $a0, -0x5630 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945232));
    ctx->in_delay_slot = false;
    ctx->pc = 0x279B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x279B90u, 0x2B9E3Cu, 0x2B9E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9E44u;
label_2b9e44:
    // 0x2b9e44: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x2b9e44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x2b9e48: 0x2442a9d0  addiu       $v0, $v0, -0x5630
    ctx->pc = 0x2b9e48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945232));
    // 0x2b9e4c: 0xae2204b0  sw          $v0, 0x4B0($s1)
    ctx->pc = 0x2b9e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1200), GPR_U32(ctx, 2));
label_2b9e50:
    // 0x2b9e50: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2b9e50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b9e54: 0xa62214b0  sh          $v0, 0x14B0($s1)
    ctx->pc = 0x2b9e54u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 5296), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b9e58: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2b9e58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9e5c: 0x27848060  addiu       $a0, $gp, -0x7FA0
    ctx->pc = 0x2b9e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
label_2b9e60:
    // 0x2b9e60: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x2b9e60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2b9e64: 0x10a00010  beqz        $a1, . + 4 + (0x10 << 2)
    ctx->pc = 0x2B9E64u;
    {
        const bool branch_taken_0x2b9e64 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b9e64) {
            ctx->pc = 0x2B9EA8u;
            goto label_2b9ea8;
        }
    }
    ctx->pc = 0x2B9E6Cu;
    // 0x2b9e6c: 0x90a30001  lbu         $v1, 0x1($a1)
    ctx->pc = 0x2b9e6cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x2b9e70: 0x92220001  lbu         $v0, 0x1($s1)
    ctx->pc = 0x2b9e70u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x2b9e74: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2B9E74u;
    {
        const bool branch_taken_0x2b9e74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2b9e74) {
            ctx->pc = 0x2B9EA8u;
            goto label_2b9ea8;
        }
    }
    ctx->pc = 0x2B9E7Cu;
    // 0x2b9e7c: 0x90a30002  lbu         $v1, 0x2($a1)
    ctx->pc = 0x2b9e7cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x2b9e80: 0x92220002  lbu         $v0, 0x2($s1)
    ctx->pc = 0x2b9e80u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x2b9e84: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2B9E84u;
    {
        const bool branch_taken_0x2b9e84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2b9e84) {
            ctx->pc = 0x2B9EA8u;
            goto label_2b9ea8;
        }
    }
    ctx->pc = 0x2B9E8Cu;
    // 0x2b9e8c: 0x90a30003  lbu         $v1, 0x3($a1)
    ctx->pc = 0x2b9e8cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
    // 0x2b9e90: 0x92220003  lbu         $v0, 0x3($s1)
    ctx->pc = 0x2b9e90u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x2b9e94: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B9E94u;
    {
        const bool branch_taken_0x2b9e94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2b9e94) {
            ctx->pc = 0x2B9EA8u;
            goto label_2b9ea8;
        }
    }
    ctx->pc = 0x2B9E9Cu;
    // 0x2b9e9c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2B9E9Cu;
    {
        const bool branch_taken_0x2b9e9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9E9Cu;
        // 0x2b9ea0: 0xa62614b0  sh          $a2, 0x14B0($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 5296), (uint16_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9e9c) {
            ctx->pc = 0x2B9EB8u;
            goto label_2b9eb8;
        }
    }
    ctx->pc = 0x2B9EA4u;
    // 0x2b9ea4: 0x0  nop
    ctx->pc = 0x2b9ea4u;
    // NOP
label_2b9ea8:
    // 0x2b9ea8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2b9ea8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2b9eac: 0x28c20002  slti        $v0, $a2, 0x2
    ctx->pc = 0x2b9eacu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2b9eb0: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x2B9EB0u;
    {
        const bool branch_taken_0x2b9eb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B9EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9EB0u;
        // 0x2b9eb4: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9eb0) {
            ctx->pc = 0x2B9E60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b9e60;
        }
    }
    ctx->pc = 0x2B9EB8u;
label_2b9eb8:
    // 0x2b9eb8: 0x92250002  lbu         $a1, 0x2($s1)
    ctx->pc = 0x2b9eb8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x2b9ebc: 0x92260003  lbu         $a2, 0x3($s1)
    ctx->pc = 0x2b9ebcu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x2b9ec0: 0xc0a2adc  jal         func_28AB70
    ctx->pc = 0x2B9EC0u;
    SET_GPR_U32(ctx, 31, 0x2B9EC8u);
    ctx->pc = 0x2B9EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9EC0u;
    // 0x2b9ec4: 0x92240001  lbu         $a0, 0x1($s1) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28AB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28AB70u, 0x2B9EC0u, 0x2B9EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9EC8u;
label_2b9ec8:
    // 0x2b9ec8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B9EC8u;
    {
        const bool branch_taken_0x2b9ec8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b9ec8) {
            ctx->pc = 0x2B9EE0u;
            goto label_2b9ee0;
        }
    }
    ctx->pc = 0x2B9ED0u;
    // 0x2b9ed0: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x2b9ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2b9ed4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2B9ED4u;
    {
        const bool branch_taken_0x2b9ed4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9ED4u;
        // 0x2b9ed8: 0xae2204d0  sw          $v0, 0x4D0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1232), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9ed4) {
            ctx->pc = 0x2B9EF0u;
            goto label_2b9ef0;
        }
    }
    ctx->pc = 0x2B9EDCu;
    // 0x2b9edc: 0x0  nop
    ctx->pc = 0x2b9edcu;
    // NOP
label_2b9ee0:
    // 0x2b9ee0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2b9ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2b9ee4: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x2b9ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x2b9ee8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2b9ee8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2b9eec: 0xae2204d0  sw          $v0, 0x4D0($s1)
    ctx->pc = 0x2b9eecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1232), GPR_U32(ctx, 2));
label_2b9ef0:
    // 0x2b9ef0: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2B9EF0u;
    {
        const bool branch_taken_0x2b9ef0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9EF0u;
        // 0x2b9ef4: 0x3c04008d  lui         $a0, 0x8D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9ef0) {
            ctx->pc = 0x2B9F10u;
            goto label_2b9f10;
        }
    }
    ctx->pc = 0x2B9EF8u;
    // 0x2b9ef8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2b9ef8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9efc: 0xc0a7394  jal         func_29CE50
    ctx->pc = 0x2B9EFCu;
    SET_GPR_U32(ctx, 31, 0x2B9F04u);
    ctx->pc = 0x2B9F00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9EFCu;
    // 0x2b9f00: 0x24845db0  addiu       $a0, $a0, 0x5DB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29CE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29CE50u, 0x2B9EFCu, 0x2B9F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9F04u;
label_2b9f04:
    // 0x2b9f04: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2B9F04u;
    {
        const bool branch_taken_0x2b9f04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b9f04) {
            ctx->pc = 0x2B9F20u;
            goto label_2b9f20;
        }
    }
    ctx->pc = 0x2B9F0Cu;
    // 0x2b9f0c: 0x0  nop
    ctx->pc = 0x2b9f0cu;
    // NOP
label_2b9f10:
    // 0x2b9f10: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x2b9f10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x2b9f14: 0x24845c80  addiu       $a0, $a0, 0x5C80
    ctx->pc = 0x2b9f14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23680));
    // 0x2b9f18: 0xc0a7394  jal         func_29CE50
    ctx->pc = 0x2B9F18u;
    SET_GPR_U32(ctx, 31, 0x2B9F20u);
    ctx->pc = 0x2B9F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9F18u;
    // 0x2b9f1c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29CE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29CE50u, 0x2B9F18u, 0x2B9F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9F20u;
label_2b9f20:
    // 0x2b9f20: 0x3c04007e  lui         $a0, 0x7E
    ctx->pc = 0x2b9f20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
    // 0x2b9f24: 0xc054568  jal         func_1515A0
    ctx->pc = 0x2B9F24u;
    SET_GPR_U32(ctx, 31, 0x2B9F2Cu);
    ctx->pc = 0x2B9F28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9F24u;
    // 0x2b9f28: 0x24846ac0  addiu       $a0, $a0, 0x6AC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27328));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1515A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1515A0u, 0x2B9F24u, 0x2B9F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9F2Cu;
label_2b9f2c:
    // 0x2b9f2c: 0x10400042  beqz        $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x2B9F2Cu;
    {
        const bool branch_taken_0x2b9f2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b9f2c) {
            ctx->pc = 0x2BA038u;
            goto label_2ba038;
        }
    }
    ctx->pc = 0x2B9F34u;
    // 0x2b9f34: 0x92240001  lbu         $a0, 0x1($s1)
    ctx->pc = 0x2b9f34u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x2b9f38: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b9f38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b9f3c: 0x1483003e  bne         $a0, $v1, . + 4 + (0x3E << 2)
    ctx->pc = 0x2B9F3Cu;
    {
        const bool branch_taken_0x2b9f3c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2b9f3c) {
            ctx->pc = 0x2BA038u;
            goto label_2ba038;
        }
    }
    ctx->pc = 0x2B9F44u;
    // 0x2b9f44: 0x92240002  lbu         $a0, 0x2($s1)
    ctx->pc = 0x2b9f44u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x2b9f48: 0x28830018  slti        $v1, $a0, 0x18
    ctx->pc = 0x2b9f48u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x2b9f4c: 0x1460003a  bnez        $v1, . + 4 + (0x3A << 2)
    ctx->pc = 0x2B9F4Cu;
    {
        const bool branch_taken_0x2b9f4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B9F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9F4Cu;
        // 0x2b9f50: 0x28810020  slti        $at, $a0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)32) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9f4c) {
            ctx->pc = 0x2BA038u;
            goto label_2ba038;
        }
    }
    ctx->pc = 0x2B9F54u;
    // 0x2b9f54: 0x10200038  beqz        $at, . + 4 + (0x38 << 2)
    ctx->pc = 0x2B9F54u;
    {
        const bool branch_taken_0x2b9f54 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b9f54) {
            ctx->pc = 0x2BA038u;
            goto label_2ba038;
        }
    }
    ctx->pc = 0x2B9F5Cu;
    // 0x2b9f5c: 0x8e23004c  lw          $v1, 0x4C($s1)
    ctx->pc = 0x2b9f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x2b9f60: 0x94630068  lhu         $v1, 0x68($v1)
    ctx->pc = 0x2b9f60u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
    // 0x2b9f64: 0x2861001f  slti        $at, $v1, 0x1F
    ctx->pc = 0x2b9f64u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x2b9f68: 0x1420001b  bnez        $at, . + 4 + (0x1B << 2)
    ctx->pc = 0x2B9F68u;
    {
        const bool branch_taken_0x2b9f68 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B9F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9F68u;
        // 0x2b9f6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9f68) {
            ctx->pc = 0x2B9FD8u;
            goto label_2b9fd8;
        }
    }
    ctx->pc = 0x2B9F70u;
    // 0x2b9f70: 0xc0ae690  jal         func_2B9A40
    ctx->pc = 0x2B9F70u;
    SET_GPR_U32(ctx, 31, 0x2B9F78u);
    ctx->pc = 0x2B9A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B9A40u, 0x2B9F70u, 0x2B9F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9F78u;
label_2b9f78:
    // 0x2b9f78: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2B9F78u;
    {
        const bool branch_taken_0x2b9f78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b9f78) {
            ctx->pc = 0x2B9FD8u;
            goto label_2b9fd8;
        }
    }
    ctx->pc = 0x2B9F80u;
    // 0x2b9f80: 0x8e23004c  lw          $v1, 0x4C($s1)
    ctx->pc = 0x2b9f80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x2b9f84: 0x3c050800  lui         $a1, 0x800
    ctx->pc = 0x2b9f84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2048 << 16));
    // 0x2b9f88: 0x8c64007c  lw          $a0, 0x7C($v1)
    ctx->pc = 0x2b9f88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 124)));
    // 0x2b9f8c: 0x8c833a24  lw          $v1, 0x3A24($a0)
    ctx->pc = 0x2b9f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 14884)));
    // 0x2b9f90: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x2b9f90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x2b9f94: 0xac833a24  sw          $v1, 0x3A24($a0)
    ctx->pc = 0x2b9f94u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 14884), GPR_U32(ctx, 3));
    // 0x2b9f98: 0x8e23004c  lw          $v1, 0x4C($s1)
    ctx->pc = 0x2b9f98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x2b9f9c: 0x8c64007c  lw          $a0, 0x7C($v1)
    ctx->pc = 0x2b9f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 124)));
    // 0x2b9fa0: 0x8c833c14  lw          $v1, 0x3C14($a0)
    ctx->pc = 0x2b9fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 15380)));
    // 0x2b9fa4: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x2b9fa4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x2b9fa8: 0xac833c14  sw          $v1, 0x3C14($a0)
    ctx->pc = 0x2b9fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 15380), GPR_U32(ctx, 3));
    // 0x2b9fac: 0x8e23004c  lw          $v1, 0x4C($s1)
    ctx->pc = 0x2b9facu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x2b9fb0: 0x8c64007c  lw          $a0, 0x7C($v1)
    ctx->pc = 0x2b9fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 124)));
    // 0x2b9fb4: 0x8c833e04  lw          $v1, 0x3E04($a0)
    ctx->pc = 0x2b9fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 15876)));
    // 0x2b9fb8: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x2b9fb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x2b9fbc: 0xac833e04  sw          $v1, 0x3E04($a0)
    ctx->pc = 0x2b9fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 15876), GPR_U32(ctx, 3));
    // 0x2b9fc0: 0x8e23004c  lw          $v1, 0x4C($s1)
    ctx->pc = 0x2b9fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x2b9fc4: 0x8c64007c  lw          $a0, 0x7C($v1)
    ctx->pc = 0x2b9fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 124)));
    // 0x2b9fc8: 0x8c833ff4  lw          $v1, 0x3FF4($a0)
    ctx->pc = 0x2b9fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16372)));
    // 0x2b9fcc: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x2b9fccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x2b9fd0: 0xac833ff4  sw          $v1, 0x3FF4($a0)
    ctx->pc = 0x2b9fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16372), GPR_U32(ctx, 3));
    // 0x2b9fd4: 0x0  nop
    ctx->pc = 0x2b9fd4u;
    // NOP
label_2b9fd8:
    // 0x2b9fd8: 0x92240002  lbu         $a0, 0x2($s1)
    ctx->pc = 0x2b9fd8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x2b9fdc: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x2b9fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x2b9fe0: 0x14830015  bne         $a0, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x2B9FE0u;
    {
        const bool branch_taken_0x2b9fe0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2b9fe0) {
            ctx->pc = 0x2BA038u;
            goto label_2ba038;
        }
    }
    ctx->pc = 0x2B9FE8u;
    // 0x2b9fe8: 0xc0d8d1c  jal         func_363470
    ctx->pc = 0x2B9FE8u;
    SET_GPR_U32(ctx, 31, 0x2B9FF0u);
    ctx->pc = 0x363470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363470u, 0x2B9FE8u, 0x2B9FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9FF0u;
label_2b9ff0:
    // 0x2b9ff0: 0x3c010014  lui         $at, 0x14
    ctx->pc = 0x2b9ff0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20 << 16));
    // 0x2b9ff4: 0x41082a  slt         $at, $v0, $at
    ctx->pc = 0x2b9ff4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x2b9ff8: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x2B9FF8u;
    {
        const bool branch_taken_0x2b9ff8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b9ff8) {
            ctx->pc = 0x2BA020u;
            goto label_2ba020;
        }
    }
    ctx->pc = 0x2BA000u;
    // 0x2ba000: 0x8e24004c  lw          $a0, 0x4C($s1)
    ctx->pc = 0x2ba000u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x2ba004: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2ba004u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2ba008: 0x8c85007c  lw          $a1, 0x7C($a0)
    ctx->pc = 0x2ba008u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
    // 0x2ba00c: 0x8ca422e4  lw          $a0, 0x22E4($a1)
    ctx->pc = 0x2ba00cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8932)));
    // 0x2ba010: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x2ba010u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2ba014: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2BA014u;
    {
        const bool branch_taken_0x2ba014 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA014u;
        // 0x2ba018: 0xaca322e4  sw          $v1, 0x22E4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8932), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba014) {
            ctx->pc = 0x2BA038u;
            goto label_2ba038;
        }
    }
    ctx->pc = 0x2BA01Cu;
    // 0x2ba01c: 0x0  nop
    ctx->pc = 0x2ba01cu;
    // NOP
label_2ba020:
    // 0x2ba020: 0x8e24004c  lw          $a0, 0x4C($s1)
    ctx->pc = 0x2ba020u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x2ba024: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2ba024u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2ba028: 0x8c85007c  lw          $a1, 0x7C($a0)
    ctx->pc = 0x2ba028u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
    // 0x2ba02c: 0x8ca40ba4  lw          $a0, 0xBA4($a1)
    ctx->pc = 0x2ba02cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 2980)));
    // 0x2ba030: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x2ba030u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2ba034: 0xaca30ba4  sw          $v1, 0xBA4($a1)
    ctx->pc = 0x2ba034u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 2980), GPR_U32(ctx, 3));
label_2ba038:
    // 0x2ba038: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2ba038u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ba03c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2ba03cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ba040: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ba040u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ba044: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ba044u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ba048: 0x3e00008  jr          $ra
    ctx->pc = 0x2BA048u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BA04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA048u;
        // 0x2ba04c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BA048u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BA050u;
}
