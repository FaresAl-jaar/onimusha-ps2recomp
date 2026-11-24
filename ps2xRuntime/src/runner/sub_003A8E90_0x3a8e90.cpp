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

// Function: sub_003A8E90
// Address: 0x3a8e90 - 0x3a9078
void sub_003A8E90_0x3a8e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A8E90_0x3a8e90");
#endif

    switch (ctx->pc) {
        case 0x3a8ef4u: goto label_3a8ef4;
        case 0x3a8f04u: goto label_3a8f04;
        case 0x3a8f34u: goto label_3a8f34;
        case 0x3a8f44u: goto label_3a8f44;
        case 0x3a8f74u: goto label_3a8f74;
        case 0x3a8f84u: goto label_3a8f84;
        case 0x3a8f94u: goto label_3a8f94;
        case 0x3a8fd0u: goto label_3a8fd0;
        case 0x3a9018u: goto label_3a9018;
        case 0x3a9034u: goto label_3a9034;
        case 0x3a9040u: goto label_3a9040;
        default: break;
    }

    ctx->pc = 0x3a8e90u;

    // 0x3a8e90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3a8e90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3a8e94: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3a8e94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3a8e98: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3a8e98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3a8e9c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3a8e9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3a8ea0: 0x90850002  lbu         $a1, 0x2($a0)
    ctx->pc = 0x3a8ea0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x3a8ea4: 0x10a30068  beq         $a1, $v1, . + 4 + (0x68 << 2)
    ctx->pc = 0x3A8EA4u;
    {
        const bool branch_taken_0x3a8ea4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x3A8EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8EA4u;
        // 0x3a8ea8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8ea4) {
            ctx->pc = 0x3A9048u;
            goto label_3a9048;
        }
    }
    ctx->pc = 0x3A8EACu;
    // 0x3a8eac: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3a8eacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3a8eb0: 0x10a30057  beq         $a1, $v1, . + 4 + (0x57 << 2)
    ctx->pc = 0x3A8EB0u;
    {
        const bool branch_taken_0x3a8eb0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x3A8EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8EB0u;
        // 0x3a8eb4: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8eb0) {
            ctx->pc = 0x3A9010u;
            goto label_3a9010;
        }
    }
    ctx->pc = 0x3A8EB8u;
    // 0x3a8eb8: 0x10a30029  beq         $a1, $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x3A8EB8u;
    {
        const bool branch_taken_0x3a8eb8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3a8eb8) {
            ctx->pc = 0x3A8F60u;
            goto label_3a8f60;
        }
    }
    ctx->pc = 0x3A8EC0u;
    // 0x3a8ec0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3a8ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a8ec4: 0x10a30016  beq         $a1, $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x3A8EC4u;
    {
        const bool branch_taken_0x3a8ec4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3a8ec4) {
            ctx->pc = 0x3A8F20u;
            goto label_3a8f20;
        }
    }
    ctx->pc = 0x3A8ECCu;
    // 0x3a8ecc: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3A8ECCu;
    {
        const bool branch_taken_0x3a8ecc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a8ecc) {
            ctx->pc = 0x3A8EE0u;
            goto label_3a8ee0;
        }
    }
    ctx->pc = 0x3A8ED4u;
    // 0x3a8ed4: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x3A8ED4u;
    {
        const bool branch_taken_0x3a8ed4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a8ed4) {
            ctx->pc = 0x3A9068u;
            goto label_3a9068;
        }
    }
    ctx->pc = 0x3A8EDCu;
    // 0x3a8edc: 0x0  nop
    ctx->pc = 0x3a8edcu;
    // NOP
label_3a8ee0:
    // 0x3a8ee0: 0x82050007  lb          $a1, 0x7($s0)
    ctx->pc = 0x3a8ee0u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
    // 0x3a8ee4: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x3a8ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x3a8ee8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3a8ee8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a8eec: 0xc05277c  jal         func_149DF0
    ctx->pc = 0x3A8EECu;
    SET_GPR_U32(ctx, 31, 0x3A8EF4u);
    ctx->pc = 0x3A8EF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A8EECu;
    // 0x3a8ef0: 0x24848c10  addiu       $a0, $a0, -0x73F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149DF0u, 0x3A8EECu, 0x3A8EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8EF4u;
label_3a8ef4:
    // 0x3a8ef4: 0x1c40005c  bgtz        $v0, . + 4 + (0x5C << 2)
    ctx->pc = 0x3A8EF4u;
    {
        const bool branch_taken_0x3a8ef4 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x3A8EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8EF4u;
        // 0x3a8ef8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8ef4) {
            ctx->pc = 0x3A9068u;
            goto label_3a9068;
        }
    }
    ctx->pc = 0x3A8EFCu;
    // 0x3a8efc: 0xc0ea8f0  jal         func_3AA3C0
    ctx->pc = 0x3A8EFCu;
    SET_GPR_U32(ctx, 31, 0x3A8F04u);
    ctx->pc = 0x3AA3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AA3C0u, 0x3A8EFCu, 0x3A8F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8F04u;
label_3a8f04:
    // 0x3a8f04: 0x4400058  bltz        $v0, . + 4 + (0x58 << 2)
    ctx->pc = 0x3A8F04u;
    {
        const bool branch_taken_0x3a8f04 = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x3a8f04) {
            ctx->pc = 0x3A9068u;
            goto label_3a9068;
        }
    }
    ctx->pc = 0x3A8F0Cu;
    // 0x3a8f0c: 0x92030002  lbu         $v1, 0x2($s0)
    ctx->pc = 0x3a8f0cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x3a8f10: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3a8f10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3a8f14: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x3A8F14u;
    {
        const bool branch_taken_0x3a8f14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A8F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8F14u;
        // 0x3a8f18: 0xa2030002  sb          $v1, 0x2($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8f14) {
            ctx->pc = 0x3A9068u;
            goto label_3a9068;
        }
    }
    ctx->pc = 0x3A8F1Cu;
    // 0x3a8f1c: 0x0  nop
    ctx->pc = 0x3a8f1cu;
    // NOP
label_3a8f20:
    // 0x3a8f20: 0x82050007  lb          $a1, 0x7($s0)
    ctx->pc = 0x3a8f20u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
    // 0x3a8f24: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x3a8f24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x3a8f28: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3a8f28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a8f2c: 0xc052aa4  jal         func_14AA90
    ctx->pc = 0x3A8F2Cu;
    SET_GPR_U32(ctx, 31, 0x3A8F34u);
    ctx->pc = 0x3A8F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A8F2Cu;
    // 0x3a8f30: 0x24848c10  addiu       $a0, $a0, -0x73F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14AA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14AA90u, 0x3A8F2Cu, 0x3A8F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8F34u;
label_3a8f34:
    // 0x3a8f34: 0x1c40004c  bgtz        $v0, . + 4 + (0x4C << 2)
    ctx->pc = 0x3A8F34u;
    {
        const bool branch_taken_0x3a8f34 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x3A8F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8F34u;
        // 0x3a8f38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8f34) {
            ctx->pc = 0x3A9068u;
            goto label_3a9068;
        }
    }
    ctx->pc = 0x3A8F3Cu;
    // 0x3a8f3c: 0xc0ea8f0  jal         func_3AA3C0
    ctx->pc = 0x3A8F3Cu;
    SET_GPR_U32(ctx, 31, 0x3A8F44u);
    ctx->pc = 0x3AA3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AA3C0u, 0x3A8F3Cu, 0x3A8F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8F44u;
label_3a8f44:
    // 0x3a8f44: 0x4400048  bltz        $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x3A8F44u;
    {
        const bool branch_taken_0x3a8f44 = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x3a8f44) {
            ctx->pc = 0x3A9068u;
            goto label_3a9068;
        }
    }
    ctx->pc = 0x3A8F4Cu;
    // 0x3a8f4c: 0x92030002  lbu         $v1, 0x2($s0)
    ctx->pc = 0x3a8f4cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x3a8f50: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3a8f50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3a8f54: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x3A8F54u;
    {
        const bool branch_taken_0x3a8f54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A8F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8F54u;
        // 0x3a8f58: 0xa2030002  sb          $v1, 0x2($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8f54) {
            ctx->pc = 0x3A9068u;
            goto label_3a9068;
        }
    }
    ctx->pc = 0x3A8F5Cu;
    // 0x3a8f5c: 0x0  nop
    ctx->pc = 0x3a8f5cu;
    // NOP
label_3a8f60:
    // 0x3a8f60: 0x82050007  lb          $a1, 0x7($s0)
    ctx->pc = 0x3a8f60u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
    // 0x3a8f64: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x3a8f64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x3a8f68: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3a8f68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a8f6c: 0xc052a3c  jal         func_14A8F0
    ctx->pc = 0x3A8F6Cu;
    SET_GPR_U32(ctx, 31, 0x3A8F74u);
    ctx->pc = 0x3A8F70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A8F6Cu;
    // 0x3a8f70: 0x24848c10  addiu       $a0, $a0, -0x73F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A8F0u, 0x3A8F6Cu, 0x3A8F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8F74u;
label_3a8f74:
    // 0x3a8f74: 0x1440003c  bnez        $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x3A8F74u;
    {
        const bool branch_taken_0x3a8f74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A8F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8F74u;
        // 0x3a8f78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8f74) {
            ctx->pc = 0x3A9068u;
            goto label_3a9068;
        }
    }
    ctx->pc = 0x3A8F7Cu;
    // 0x3a8f7c: 0xc0ea8f0  jal         func_3AA3C0
    ctx->pc = 0x3A8F7Cu;
    SET_GPR_U32(ctx, 31, 0x3A8F84u);
    ctx->pc = 0x3AA3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AA3C0u, 0x3A8F7Cu, 0x3A8F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8F84u;
label_3a8f84:
    // 0x3a8f84: 0x4400038  bltz        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x3A8F84u;
    {
        const bool branch_taken_0x3a8f84 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x3A8F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8F84u;
        // 0x3a8f88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8f84) {
            ctx->pc = 0x3A9068u;
            goto label_3a9068;
        }
    }
    ctx->pc = 0x3A8F8Cu;
    // 0x3a8f8c: 0xc0eb678  jal         func_3AD9E0
    ctx->pc = 0x3A8F8Cu;
    SET_GPR_U32(ctx, 31, 0x3A8F94u);
    ctx->pc = 0x3AD9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AD9E0u, 0x3A8F8Cu, 0x3A8F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8F94u;
label_3a8f94:
    // 0x3a8f94: 0x4410008  bgez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3A8F94u;
    {
        const bool branch_taken_0x3a8f94 = (GPR_S64(ctx, 2) >= 0);
        if (branch_taken_0x3a8f94) {
            ctx->pc = 0x3A8FB8u;
            goto label_3a8fb8;
        }
    }
    ctx->pc = 0x3A8F9Cu;
    // 0x3a8f9c: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x3a8f9cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a8fa0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3a8fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a8fa4: 0xa203000a  sb          $v1, 0xA($s0)
    ctx->pc = 0x3a8fa4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10), (uint8_t)GPR_U32(ctx, 3));
    // 0x3a8fa8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3a8fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3a8fac: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x3A8FACu;
    {
        const bool branch_taken_0x3a8fac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A8FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8FACu;
        // 0x3a8fb0: 0xa6030014  sh          $v1, 0x14($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 20), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8fac) {
            ctx->pc = 0x3A9068u;
            goto label_3a9068;
        }
    }
    ctx->pc = 0x3A8FB4u;
    // 0x3a8fb4: 0x0  nop
    ctx->pc = 0x3a8fb4u;
    // NOP
label_3a8fb8:
    // 0x3a8fb8: 0x82050007  lb          $a1, 0x7($s0)
    ctx->pc = 0x3a8fb8u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
    // 0x3a8fbc: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x3a8fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x3a8fc0: 0x3c060068  lui         $a2, 0x68
    ctx->pc = 0x3a8fc0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)104 << 16));
    // 0x3a8fc4: 0x24848c10  addiu       $a0, $a0, -0x73F0
    ctx->pc = 0x3a8fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937616));
    // 0x3a8fc8: 0xc052ba0  jal         func_14AE80
    ctx->pc = 0x3A8FC8u;
    SET_GPR_U32(ctx, 31, 0x3A8FD0u);
    ctx->pc = 0x3A8FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A8FC8u;
    // 0x3a8fcc: 0x24c628b8  addiu       $a2, $a2, 0x28B8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 10424));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14AE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14AE80u, 0x3A8FC8u, 0x3A8FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8FD0u;
label_3a8fd0:
    // 0x3a8fd0: 0x240303c4  addiu       $v1, $zero, 0x3C4
    ctx->pc = 0x3a8fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 964));
    // 0x3a8fd4: 0x1043000a  beq         $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x3A8FD4u;
    {
        const bool branch_taken_0x3a8fd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x3a8fd4) {
            ctx->pc = 0x3A9000u;
            goto label_3a9000;
        }
    }
    ctx->pc = 0x3A8FDCu;
    // 0x3a8fdc: 0xa2000004  sb          $zero, 0x4($s0)
    ctx->pc = 0x3a8fdcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a8fe0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3a8fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a8fe4: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x3a8fe4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a8fe8: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x3a8fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3a8fec: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x3a8fecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a8ff0: 0xa204000a  sb          $a0, 0xA($s0)
    ctx->pc = 0x3a8ff0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10), (uint8_t)GPR_U32(ctx, 4));
    // 0x3a8ff4: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x3A8FF4u;
    {
        const bool branch_taken_0x3a8ff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A8FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8FF4u;
        // 0x3a8ff8: 0xa6030014  sh          $v1, 0x14($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 20), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8ff4) {
            ctx->pc = 0x3A9068u;
            goto label_3a9068;
        }
    }
    ctx->pc = 0x3A8FFCu;
    // 0x3a8ffc: 0x0  nop
    ctx->pc = 0x3a8ffcu;
    // NOP
label_3a9000:
    // 0x3a9000: 0x92030002  lbu         $v1, 0x2($s0)
    ctx->pc = 0x3a9000u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x3a9004: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3a9004u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3a9008: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x3A9008u;
    {
        const bool branch_taken_0x3a9008 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A900Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9008u;
        // 0x3a900c: 0xa2030002  sb          $v1, 0x2($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9008) {
            ctx->pc = 0x3A9068u;
            goto label_3a9068;
        }
    }
    ctx->pc = 0x3A9010u;
label_3a9010:
    // 0x3a9010: 0xc0eab50  jal         func_3AAD40
    ctx->pc = 0x3A9010u;
    SET_GPR_U32(ctx, 31, 0x3A9018u);
    ctx->pc = 0x3AAD40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AAD40u, 0x3A9010u, 0x3A9018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A9018u;
label_3a9018:
    // 0x3a9018: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x3A9018u;
    {
        const bool branch_taken_0x3a9018 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a9018) {
            ctx->pc = 0x3A9068u;
            goto label_3a9068;
        }
    }
    ctx->pc = 0x3A9020u;
    // 0x3a9020: 0x92020002  lbu         $v0, 0x2($s0)
    ctx->pc = 0x3a9020u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x3a9024: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a9024u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a9028: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3a9028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3a902c: 0xc0eaf18  jal         func_3ABC60
    ctx->pc = 0x3A902Cu;
    SET_GPR_U32(ctx, 31, 0x3A9034u);
    ctx->pc = 0x3A9030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A902Cu;
    // 0x3a9030: 0xa2020002  sb          $v0, 0x2($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3ABC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3ABC60u, 0x3A902Cu, 0x3A9034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A9034u;
label_3a9034:
    // 0x3a9034: 0x82050008  lb          $a1, 0x8($s0)
    ctx->pc = 0x3a9034u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3a9038: 0xc0eaf7c  jal         func_3ABDF0
    ctx->pc = 0x3A9038u;
    SET_GPR_U32(ctx, 31, 0x3A9040u);
    ctx->pc = 0x3A903Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A9038u;
    // 0x3a903c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3ABDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3ABDF0u, 0x3A9038u, 0x3A9040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A9040u;
label_3a9040:
    // 0x3a9040: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x3A9040u;
    {
        const bool branch_taken_0x3a9040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a9040) {
            ctx->pc = 0x3A9068u;
            goto label_3a9068;
        }
    }
    ctx->pc = 0x3A9048u;
label_3a9048:
    // 0x3a9048: 0x86030016  lh          $v1, 0x16($s0)
    ctx->pc = 0x3a9048u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
    // 0x3a904c: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3A904Cu;
    {
        const bool branch_taken_0x3a904c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A9050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A904Cu;
        // 0x3a9050: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a904c) {
            ctx->pc = 0x3A9068u;
            goto label_3a9068;
        }
    }
    ctx->pc = 0x3A9054u;
    // 0x3a9054: 0xa2030001  sb          $v1, 0x1($s0)
    ctx->pc = 0x3a9054u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x3a9058: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x3a9058u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a905c: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x3a905cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a9060: 0xa200000a  sb          $zero, 0xA($s0)
    ctx->pc = 0x3a9060u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a9064: 0x0  nop
    ctx->pc = 0x3a9064u;
    // NOP
label_3a9068:
    // 0x3a9068: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3a9068u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a906c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3a906cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a9070: 0x3e00008  jr          $ra
    ctx->pc = 0x3A9070u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A9074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9070u;
        // 0x3a9074: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A9070u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A9078u;
}
