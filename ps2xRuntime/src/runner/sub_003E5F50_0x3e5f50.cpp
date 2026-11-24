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

// Function: sub_003E5F50
// Address: 0x3e5f50 - 0x3e6890
void sub_003E5F50_0x3e5f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E5F50_0x3e5f50");
#endif

    switch (ctx->pc) {
        case 0x3e5f78u: goto label_3e5f78;
        case 0x3e5fc8u: goto label_3e5fc8;
        case 0x3e5fd0u: goto label_3e5fd0;
        case 0x3e6034u: goto label_3e6034;
        case 0x3e604cu: goto label_3e604c;
        case 0x3e618cu: goto label_3e618c;
        case 0x3e61b0u: goto label_3e61b0;
        case 0x3e61dcu: goto label_3e61dc;
        case 0x3e61ecu: goto label_3e61ec;
        case 0x3e6230u: goto label_3e6230;
        case 0x3e6294u: goto label_3e6294;
        case 0x3e62c8u: goto label_3e62c8;
        case 0x3e62d4u: goto label_3e62d4;
        case 0x3e62f4u: goto label_3e62f4;
        case 0x3e632cu: goto label_3e632c;
        case 0x3e6340u: goto label_3e6340;
        case 0x3e634cu: goto label_3e634c;
        case 0x3e63b4u: goto label_3e63b4;
        case 0x3e63f4u: goto label_3e63f4;
        case 0x3e64ecu: goto label_3e64ec;
        case 0x3e6520u: goto label_3e6520;
        case 0x3e652cu: goto label_3e652c;
        case 0x3e654cu: goto label_3e654c;
        case 0x3e6584u: goto label_3e6584;
        case 0x3e65acu: goto label_3e65ac;
        case 0x3e65c0u: goto label_3e65c0;
        case 0x3e65f4u: goto label_3e65f4;
        case 0x3e6650u: goto label_3e6650;
        case 0x3e66a4u: goto label_3e66a4;
        case 0x3e66e4u: goto label_3e66e4;
        case 0x3e67e4u: goto label_3e67e4;
        case 0x3e6818u: goto label_3e6818;
        case 0x3e6824u: goto label_3e6824;
        case 0x3e6844u: goto label_3e6844;
        case 0x3e687cu: goto label_3e687c;
        default: break;
    }

    ctx->pc = 0x3e5f50u;

    // 0x3e5f50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3e5f50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3e5f54: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x3e5f54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x3e5f58: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3e5f58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3e5f5c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3e5f5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e5f60: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3e5f60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3e5f64: 0x24a5ef20  addiu       $a1, $a1, -0x10E0
    ctx->pc = 0x3e5f64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962976));
    // 0x3e5f68: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3e5f68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e5f6c: 0x3c038060  lui         $v1, 0x8060
    ctx->pc = 0x3e5f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32864 << 16));
    // 0x3e5f70: 0x34646060  ori         $a0, $v1, 0x6060
    ctx->pc = 0x3e5f70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)24672);
    // 0x3e5f74: 0x0  nop
    ctx->pc = 0x3e5f74u;
    // NOP
label_3e5f78:
    // 0x3e5f78: 0xaca40014  sw          $a0, 0x14($a1)
    ctx->pc = 0x3e5f78u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 4));
    // 0x3e5f7c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3e5f7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x3e5f80: 0xaca4002c  sw          $a0, 0x2C($a1)
    ctx->pc = 0x3e5f80u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 4));
    // 0x3e5f84: 0x2cc30005  sltiu       $v1, $a2, 0x5
    ctx->pc = 0x3e5f84u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x3e5f88: 0x24a50030  addiu       $a1, $a1, 0x30
    ctx->pc = 0x3e5f88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x3e5f8c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3E5F8Cu;
    {
        const bool branch_taken_0x3e5f8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e5f8c) {
            ctx->pc = 0x3E5F78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e5f78;
        }
    }
    ctx->pc = 0x3E5F94u;
    // 0x3e5f94: 0x92030054  lbu         $v1, 0x54($s0)
    ctx->pc = 0x3e5f94u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x3e5f98: 0x3063007f  andi        $v1, $v1, 0x7F
    ctx->pc = 0x3e5f98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
    // 0x3e5f9c: 0x2c61000b  sltiu       $at, $v1, 0xB
    ctx->pc = 0x3e5f9cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
    // 0x3e5fa0: 0x10200237  beqz        $at, . + 4 + (0x237 << 2)
    ctx->pc = 0x3E5FA0u;
    {
        const bool branch_taken_0x3e5fa0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E5FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5FA0u;
        // 0x3e5fa4: 0x3c040068  lui         $a0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e5fa0) {
            ctx->pc = 0x3E6880u;
            goto label_3e6880;
        }
    }
    ctx->pc = 0x3E5FA8u;
    // 0x3e5fa8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3e5fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3e5fac: 0x24844990  addiu       $a0, $a0, 0x4990
    ctx->pc = 0x3e5facu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18832));
    // 0x3e5fb0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3e5fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3e5fb4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3e5fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3e5fb8: 0x600008  jr          $v1
    ctx->pc = 0x3E5FB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3E5FC0u: goto label_3e5fc0;
            case 0x3E5FD8u: goto label_3e5fd8;
            case 0x3E6180u: goto label_3e6180;
            case 0x3E61D0u: goto label_3e61d0;
            case 0x3E61F8u: goto label_3e61f8;
            case 0x3E6590u: goto label_3e6590;
            case 0x3E65B8u: goto label_3e65b8;
            case 0x3E65C8u: goto label_3e65c8;
            case 0x3E6880u: goto label_3e6880;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E5FB8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3E5FC0u;
label_3e5fc0:
    // 0x3e5fc0: 0xc0f9114  jal         func_3E4450
    ctx->pc = 0x3E5FC0u;
    SET_GPR_U32(ctx, 31, 0x3E5FC8u);
    ctx->pc = 0x3E5FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E5FC0u;
    // 0x3e5fc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E4450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E4450u, 0x3E5FC0u, 0x3E5FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E5FC8u;
label_3e5fc8:
    // 0x3e5fc8: 0xc0f9fb4  jal         func_3E7ED0
    ctx->pc = 0x3E5FC8u;
    SET_GPR_U32(ctx, 31, 0x3E5FD0u);
    ctx->pc = 0x3E5FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E5FC8u;
    // 0x3e5fcc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E7ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E7ED0u, 0x3E5FC8u, 0x3E5FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E5FD0u;
label_3e5fd0:
    // 0x3e5fd0: 0x1000022b  b           . + 4 + (0x22B << 2)
    ctx->pc = 0x3E5FD0u;
    {
        const bool branch_taken_0x3e5fd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e5fd0) {
            ctx->pc = 0x3E6880u;
            goto label_3e6880;
        }
    }
    ctx->pc = 0x3E5FD8u;
label_3e5fd8:
    // 0x3e5fd8: 0x8203005d  lb          $v1, 0x5D($s0)
    ctx->pc = 0x3e5fd8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 93)));
    // 0x3e5fdc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3e5fdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3e5fe0: 0x10660059  beq         $v1, $a2, . + 4 + (0x59 << 2)
    ctx->pc = 0x3E5FE0u;
    {
        const bool branch_taken_0x3e5fe0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        if (branch_taken_0x3e5fe0) {
            ctx->pc = 0x3E6148u;
            goto label_3e6148;
        }
    }
    ctx->pc = 0x3E5FE8u;
    // 0x3e5fe8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3E5FE8u;
    {
        const bool branch_taken_0x3e5fe8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e5fe8) {
            ctx->pc = 0x3E5FF8u;
            goto label_3e5ff8;
        }
    }
    ctx->pc = 0x3E5FF0u;
    // 0x3e5ff0: 0x10000223  b           . + 4 + (0x223 << 2)
    ctx->pc = 0x3E5FF0u;
    {
        const bool branch_taken_0x3e5ff0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e5ff0) {
            ctx->pc = 0x3E6880u;
            goto label_3e6880;
        }
    }
    ctx->pc = 0x3E5FF8u;
label_3e5ff8:
    // 0x3e5ff8: 0x8e050068  lw          $a1, 0x68($s0)
    ctx->pc = 0x3e5ff8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x3e5ffc: 0x3c04e000  lui         $a0, 0xE000
    ctx->pc = 0x3e5ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57344 << 16));
    // 0x3e6000: 0x3c030090  lui         $v1, 0x90
    ctx->pc = 0x3e6000u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)144 << 16));
    // 0x3e6004: 0x34639090  ori         $v1, $v1, 0x9090
    ctx->pc = 0x3e6004u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)37008);
    // 0x3e6008: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x3e6008u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x3e600c: 0xae040068  sw          $a0, 0x68($s0)
    ctx->pc = 0x3e600cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 4));
    // 0x3e6010: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x3e6010u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x3e6014: 0x1483021a  bne         $a0, $v1, . + 4 + (0x21A << 2)
    ctx->pc = 0x3E6014u;
    {
        const bool branch_taken_0x3e6014 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3e6014) {
            ctx->pc = 0x3E6880u;
            goto label_3e6880;
        }
    }
    ctx->pc = 0x3E601Cu;
    // 0x3e601c: 0x82030058  lb          $v1, 0x58($s0)
    ctx->pc = 0x3e601cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x3e6020: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x3e6020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x3e6024: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3E6024u;
    {
        const bool branch_taken_0x3e6024 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3E6028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6024u;
        // 0x3e6028: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e6024) {
            ctx->pc = 0x3E6040u;
            goto label_3e6040;
        }
    }
    ctx->pc = 0x3E602Cu;
    // 0x3e602c: 0xc0f9e88  jal         func_3E7A20
    ctx->pc = 0x3E602Cu;
    SET_GPR_U32(ctx, 31, 0x3E6034u);
    ctx->pc = 0x3E6030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E602Cu;
    // 0x3e6030: 0x240500f0  addiu       $a1, $zero, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E7A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E7A20u, 0x3E602Cu, 0x3E6034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E6034u;
label_3e6034:
    // 0x3e6034: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3E6034u;
    {
        const bool branch_taken_0x3e6034 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e6034) {
            ctx->pc = 0x3E6050u;
            goto label_3e6050;
        }
    }
    ctx->pc = 0x3E603Cu;
    // 0x3e603c: 0x0  nop
    ctx->pc = 0x3e603cu;
    // NOP
label_3e6040:
    // 0x3e6040: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e6040u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e6044: 0xc0f9e88  jal         func_3E7A20
    ctx->pc = 0x3E6044u;
    SET_GPR_U32(ctx, 31, 0x3E604Cu);
    ctx->pc = 0x3E6048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E6044u;
    // 0x3e6048: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E7A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E7A20u, 0x3E6044u, 0x3E604Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E604Cu;
label_3e604c:
    // 0x3e604c: 0x0  nop
    ctx->pc = 0x3e604cu;
    // NOP
label_3e6050:
    // 0x3e6050: 0x82070058  lb          $a3, 0x58($s0)
    ctx->pc = 0x3e6050u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x3e6054: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x3e6054u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x3e6058: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x3e6058u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x3e605c: 0x24a5e924  addiu       $a1, $a1, -0x16DC
    ctx->pc = 0x3e605cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961444));
    // 0x3e6060: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3e6060u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3e6064: 0x2463e926  addiu       $v1, $v1, -0x16DA
    ctx->pc = 0x3e6064u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961446));
    // 0x3e6068: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3e6068u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3e606c: 0x73080  sll         $a2, $a3, 2
    ctx->pc = 0x3e606cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x3e6070: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x3e6070u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x3e6074: 0x63140  sll         $a2, $a2, 5
    ctx->pc = 0x3e6074u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
    // 0x3e6078: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x3e6078u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x3e607c: 0x84a50000  lh          $a1, 0x0($a1)
    ctx->pc = 0x3e607cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3e6080: 0x24a50007  addiu       $a1, $a1, 0x7
    ctx->pc = 0x3e6080u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7));
    // 0x3e6084: 0xa425edf4  sh          $a1, -0x120C($at)
    ctx->pc = 0x3e6084u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294962676), (uint16_t)GPR_U32(ctx, 5));
    // 0x3e6088: 0x82060058  lb          $a2, 0x58($s0)
    ctx->pc = 0x3e6088u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x3e608c: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3e608cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3e6090: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x3e6090u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x3e6094: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x3e6094u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x3e6098: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x3e6098u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x3e609c: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x3e609cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3e60a0: 0x84a50000  lh          $a1, 0x0($a1)
    ctx->pc = 0x3e60a0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3e60a4: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x3e60a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x3e60a8: 0xa425edf6  sh          $a1, -0x120A($at)
    ctx->pc = 0x3e60a8u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294962678), (uint16_t)GPR_U32(ctx, 5));
    // 0x3e60ac: 0x82060058  lb          $a2, 0x58($s0)
    ctx->pc = 0x3e60acu;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x3e60b0: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3e60b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3e60b4: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x3e60b4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x3e60b8: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x3e60b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x3e60bc: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x3e60bcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x3e60c0: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x3e60c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3e60c4: 0x84a50000  lh          $a1, 0x0($a1)
    ctx->pc = 0x3e60c4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3e60c8: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x3e60c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x3e60cc: 0xa425e806  sh          $a1, -0x17FA($at)
    ctx->pc = 0x3e60ccu;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294961158), (uint16_t)GPR_U32(ctx, 5));
    // 0x3e60d0: 0x82060058  lb          $a2, 0x58($s0)
    ctx->pc = 0x3e60d0u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x3e60d4: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3e60d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3e60d8: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x3e60d8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x3e60dc: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x3e60dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x3e60e0: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x3e60e0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x3e60e4: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x3e60e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3e60e8: 0x84a50000  lh          $a1, 0x0($a1)
    ctx->pc = 0x3e60e8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3e60ec: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x3e60ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x3e60f0: 0xa425e81e  sh          $a1, -0x17E2($at)
    ctx->pc = 0x3e60f0u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294961182), (uint16_t)GPR_U32(ctx, 5));
    // 0x3e60f4: 0x82060058  lb          $a2, 0x58($s0)
    ctx->pc = 0x3e60f4u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x3e60f8: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3e60f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3e60fc: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x3e60fcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x3e6100: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x3e6100u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x3e6104: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x3e6104u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x3e6108: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x3e6108u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3e610c: 0x84a50000  lh          $a1, 0x0($a1)
    ctx->pc = 0x3e610cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3e6110: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x3e6110u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x3e6114: 0xa425e836  sh          $a1, -0x17CA($at)
    ctx->pc = 0x3e6114u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294961206), (uint16_t)GPR_U32(ctx, 5));
    // 0x3e6118: 0x82060058  lb          $a2, 0x58($s0)
    ctx->pc = 0x3e6118u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x3e611c: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3e611cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3e6120: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x3e6120u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x3e6124: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x3e6124u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x3e6128: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x3e6128u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x3e612c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3e612cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3e6130: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x3e6130u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3e6134: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3e6134u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3e6138: 0xa423e84e  sh          $v1, -0x17B2($at)
    ctx->pc = 0x3e6138u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294961230), (uint16_t)GPR_U32(ctx, 3));
    // 0x3e613c: 0x100001d0  b           . + 4 + (0x1D0 << 2)
    ctx->pc = 0x3E613Cu;
    {
        const bool branch_taken_0x3e613c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E6140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E613Cu;
        // 0x3e6140: 0xa204005d  sb          $a0, 0x5D($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 93), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e613c) {
            ctx->pc = 0x3E6880u;
            goto label_3e6880;
        }
    }
    ctx->pc = 0x3E6144u;
    // 0x3e6144: 0x0  nop
    ctx->pc = 0x3e6144u;
    // NOP
label_3e6148:
    // 0x3e6148: 0x8e050068  lw          $a1, 0x68($s0)
    ctx->pc = 0x3e6148u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x3e614c: 0x3c042000  lui         $a0, 0x2000
    ctx->pc = 0x3e614cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
    // 0x3e6150: 0x3c038090  lui         $v1, 0x8090
    ctx->pc = 0x3e6150u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32912 << 16));
    // 0x3e6154: 0x34639090  ori         $v1, $v1, 0x9090
    ctx->pc = 0x3e6154u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)37008);
    // 0x3e6158: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x3e6158u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x3e615c: 0xae040068  sw          $a0, 0x68($s0)
    ctx->pc = 0x3e615cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 4));
    // 0x3e6160: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x3e6160u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x3e6164: 0x148301c6  bne         $a0, $v1, . + 4 + (0x1C6 << 2)
    ctx->pc = 0x3E6164u;
    {
        const bool branch_taken_0x3e6164 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3e6164) {
            ctx->pc = 0x3E6880u;
            goto label_3e6880;
        }
    }
    ctx->pc = 0x3E616Cu;
    // 0x3e616c: 0xae030068  sw          $v1, 0x68($s0)
    ctx->pc = 0x3e616cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 3));
    // 0x3e6170: 0xa200005d  sb          $zero, 0x5D($s0)
    ctx->pc = 0x3e6170u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 93), (uint8_t)GPR_U32(ctx, 0));
    // 0x3e6174: 0x100001c2  b           . + 4 + (0x1C2 << 2)
    ctx->pc = 0x3E6174u;
    {
        const bool branch_taken_0x3e6174 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E6178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6174u;
        // 0x3e6178: 0xa2060054  sb          $a2, 0x54($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 84), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e6174) {
            ctx->pc = 0x3E6880u;
            goto label_3e6880;
        }
    }
    ctx->pc = 0x3E617Cu;
    // 0x3e617c: 0x0  nop
    ctx->pc = 0x3e617cu;
    // NOP
label_3e6180:
    // 0x3e6180: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3e6180u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3e6184: 0xc063d48  jal         func_18F520
    ctx->pc = 0x3E6184u;
    SET_GPR_U32(ctx, 31, 0x3E618Cu);
    ctx->pc = 0x3E6188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E6184u;
    // 0x3e6188: 0x2484cbe0  addiu       $a0, $a0, -0x3420 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F520u, 0x3E6184u, 0x3E618Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E618Cu;
label_3e618c:
    // 0x3e618c: 0x144001bc  bnez        $v0, . + 4 + (0x1BC << 2)
    ctx->pc = 0x3E618Cu;
    {
        const bool branch_taken_0x3e618c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E6190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E618Cu;
        // 0x3e6190: 0x3c040083  lui         $a0, 0x83 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e618c) {
            ctx->pc = 0x3E6880u;
            goto label_3e6880;
        }
    }
    ctx->pc = 0x3E6194u;
    // 0x3e6194: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x3e6194u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x3e6198: 0x2484cbe0  addiu       $a0, $a0, -0x3420
    ctx->pc = 0x3e6198u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
    // 0x3e619c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3e619cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e61a0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3e61a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e61a4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3e61a4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e61a8: 0xc063c70  jal         func_18F1C0
    ctx->pc = 0x3E61A8u;
    SET_GPR_U32(ctx, 31, 0x3E61B0u);
    ctx->pc = 0x3E61ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E61A8u;
    // 0x3e61ac: 0x2409ffff  addiu       $t1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F1C0u, 0x3E61A8u, 0x3E61B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E61B0u;
label_3e61b0:
    // 0x3e61b0: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x3e61b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x3e61b4: 0xa2030054  sb          $v1, 0x54($s0)
    ctx->pc = 0x3e61b4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 84), (uint8_t)GPR_U32(ctx, 3));
    // 0x3e61b8: 0x9203005b  lbu         $v1, 0x5B($s0)
    ctx->pc = 0x3e61b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 91)));
    // 0x3e61bc: 0xa2030055  sb          $v1, 0x55($s0)
    ctx->pc = 0x3e61bcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 85), (uint8_t)GPR_U32(ctx, 3));
    // 0x3e61c0: 0x9203005c  lbu         $v1, 0x5C($s0)
    ctx->pc = 0x3e61c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x3e61c4: 0x100001ae  b           . + 4 + (0x1AE << 2)
    ctx->pc = 0x3E61C4u;
    {
        const bool branch_taken_0x3e61c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E61C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E61C4u;
        // 0x3e61c8: 0xa2030056  sb          $v1, 0x56($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 86), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e61c4) {
            ctx->pc = 0x3E6880u;
            goto label_3e6880;
        }
    }
    ctx->pc = 0x3E61CCu;
    // 0x3e61cc: 0x0  nop
    ctx->pc = 0x3e61ccu;
    // NOP
label_3e61d0:
    // 0x3e61d0: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3e61d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3e61d4: 0xc063d48  jal         func_18F520
    ctx->pc = 0x3E61D4u;
    SET_GPR_U32(ctx, 31, 0x3E61DCu);
    ctx->pc = 0x3E61D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E61D4u;
    // 0x3e61d8: 0x2484cbe0  addiu       $a0, $a0, -0x3420 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F520u, 0x3E61D4u, 0x3E61DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E61DCu;
label_3e61dc:
    // 0x3e61dc: 0x144001a8  bnez        $v0, . + 4 + (0x1A8 << 2)
    ctx->pc = 0x3E61DCu;
    {
        const bool branch_taken_0x3e61dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E61E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E61DCu;
        // 0x3e61e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e61dc) {
            ctx->pc = 0x3E6880u;
            goto label_3e6880;
        }
    }
    ctx->pc = 0x3E61E4u;
    // 0x3e61e4: 0xc0f9e88  jal         func_3E7A20
    ctx->pc = 0x3E61E4u;
    SET_GPR_U32(ctx, 31, 0x3E61ECu);
    ctx->pc = 0x3E61E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E61E4u;
    // 0x3e61e8: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E7A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E7A20u, 0x3E61E4u, 0x3E61ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E61ECu;
label_3e61ec:
    // 0x3e61ec: 0x9203005a  lbu         $v1, 0x5A($s0)
    ctx->pc = 0x3e61ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 90)));
    // 0x3e61f0: 0x100001a3  b           . + 4 + (0x1A3 << 2)
    ctx->pc = 0x3E61F0u;
    {
        const bool branch_taken_0x3e61f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E61F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E61F0u;
        // 0x3e61f4: 0xa2030054  sb          $v1, 0x54($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 84), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e61f0) {
            ctx->pc = 0x3E6880u;
            goto label_3e6880;
        }
    }
    ctx->pc = 0x3E61F8u;
label_3e61f8:
    // 0x3e61f8: 0x3c010069  lui         $at, 0x69
    ctx->pc = 0x3e61f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)105 << 16));
    // 0x3e61fc: 0x902364ca  lbu         $v1, 0x64CA($at)
    ctx->pc = 0x3e61fcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x6964CAu));
    // 0x3e6200: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x3E6200u;
    {
        const bool branch_taken_0x3e6200 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e6200) {
            ctx->pc = 0x3E6240u;
            goto label_3e6240;
        }
    }
    ctx->pc = 0x3E6208u;
    // 0x3e6208: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x3e6208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x3e620c: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3e620cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3e6210: 0xa2020054  sb          $v0, 0x54($s0)
    ctx->pc = 0x3e6210u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 84), (uint8_t)GPR_U32(ctx, 2));
    // 0x3e6214: 0x2484cbe0  addiu       $a0, $a0, -0x3420
    ctx->pc = 0x3e6214u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
    // 0x3e6218: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3e6218u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e621c: 0xa202005a  sb          $v0, 0x5A($s0)
    ctx->pc = 0x3e621cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 90), (uint8_t)GPR_U32(ctx, 2));
    // 0x3e6220: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3e6220u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e6224: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3e6224u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e6228: 0xc063d30  jal         func_18F4C0
    ctx->pc = 0x3E6228u;
    SET_GPR_U32(ctx, 31, 0x3E6230u);
    ctx->pc = 0x3E622Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E6228u;
    // 0x3e622c: 0x24080030  addiu       $t0, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F4C0u, 0x3E6228u, 0x3E6230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E6230u;
label_3e6230:
    // 0x3e6230: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3e6230u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3e6234: 0x10000192  b           . + 4 + (0x192 << 2)
    ctx->pc = 0x3E6234u;
    {
        const bool branch_taken_0x3e6234 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E6238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6234u;
        // 0x3e6238: 0xa2030055  sb          $v1, 0x55($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 85), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e6234) {
            ctx->pc = 0x3E6880u;
            goto label_3e6880;
        }
    }
    ctx->pc = 0x3E623Cu;
    // 0x3e623c: 0x0  nop
    ctx->pc = 0x3e623cu;
    // NOP
label_3e6240:
    // 0x3e6240: 0x3c01008f  lui         $at, 0x8F
    ctx->pc = 0x3e6240u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)143 << 16));
    // 0x3e6244: 0x8c24ea28  lw          $a0, -0x15D8($at)
    ctx->pc = 0x3e6244u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x8EEA28u));
    // 0x3e6248: 0x3c01008f  lui         $at, 0x8F
    ctx->pc = 0x3e6248u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)143 << 16));
    // 0x3e624c: 0x8c23ea34  lw          $v1, -0x15CC($at)
    ctx->pc = 0x3e624cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x8EEA34u));
    // 0x3e6250: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3e6250u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3e6254: 0x30832008  andi        $v1, $a0, 0x2008
    ctx->pc = 0x3e6254u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8200);
    // 0x3e6258: 0x10600043  beqz        $v1, . + 4 + (0x43 << 2)
    ctx->pc = 0x3E6258u;
    {
        const bool branch_taken_0x3e6258 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e6258) {
            ctx->pc = 0x3E6368u;
            goto label_3e6368;
        }
    }
    ctx->pc = 0x3E6260u;
    // 0x3e6260: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3e6260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3e6264: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3e6264u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3e6268: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x3e6268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x3e626c: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3e626cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3e6270: 0x3c020200  lui         $v0, 0x200
    ctx->pc = 0x3e6270u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
    // 0x3e6274: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3e6274u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e6278: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x3e6278u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x3e627c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3e627cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e6280: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3e6280u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e6284: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3e6284u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e6288: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3e6288u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e628c: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3E628Cu;
    SET_GPR_U32(ctx, 31, 0x3E6294u);
    ctx->pc = 0x3E6290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E628Cu;
    // 0x3e6290: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3E628Cu, 0x3E6294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E6294u;
label_3e6294:
    // 0x3e6294: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3e6294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3e6298: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3e6298u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3e629c: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x3e629cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x3e62a0: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3e62a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3e62a4: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x3e62a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x3e62a8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3e62a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e62ac: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x3e62acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x3e62b0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3e62b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e62b4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3e62b4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e62b8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3e62b8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e62bc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3e62bcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e62c0: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3E62C0u;
    SET_GPR_U32(ctx, 31, 0x3E62C8u);
    ctx->pc = 0x3E62C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E62C0u;
    // 0x3e62c4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3E62C0u, 0x3E62C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E62C8u;
label_3e62c8:
    // 0x3e62c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e62c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e62cc: 0xc0f9e88  jal         func_3E7A20
    ctx->pc = 0x3E62CCu;
    SET_GPR_U32(ctx, 31, 0x3E62D4u);
    ctx->pc = 0x3E62D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E62CCu;
    // 0x3e62d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E7A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E7A20u, 0x3E62CCu, 0x3E62D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E62D4u;
label_3e62d4:
    // 0x3e62d4: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3e62d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3e62d8: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x3e62d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3e62dc: 0x2484cbe0  addiu       $a0, $a0, -0x3420
    ctx->pc = 0x3e62dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
    // 0x3e62e0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3e62e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e62e4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3e62e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e62e8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3e62e8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e62ec: 0xc063cd0  jal         func_18F340
    ctx->pc = 0x3E62ECu;
    SET_GPR_U32(ctx, 31, 0x3E62F4u);
    ctx->pc = 0x3E62F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E62ECu;
    // 0x3e62f0: 0x2409ffff  addiu       $t1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F340u, 0x3E62ECu, 0x3E62F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E62F4u;
label_3e62f4:
    // 0x3e62f4: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x3e62f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3e62f8: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x3e62f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x3e62fc: 0xa2030054  sb          $v1, 0x54($s0)
    ctx->pc = 0x3e62fcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 84), (uint8_t)GPR_U32(ctx, 3));
    // 0x3e6300: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3e6300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3e6304: 0xa202005a  sb          $v0, 0x5A($s0)
    ctx->pc = 0x3e6304u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 90), (uint8_t)GPR_U32(ctx, 2));
    // 0x3e6308: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3e6308u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3e630c: 0xa203005c  sb          $v1, 0x5C($s0)
    ctx->pc = 0x3e630cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 92), (uint8_t)GPR_U32(ctx, 3));
    // 0x3e6310: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3e6310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3e6314: 0xa203005b  sb          $v1, 0x5B($s0)
    ctx->pc = 0x3e6314u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 91), (uint8_t)GPR_U32(ctx, 3));
    // 0x3e6318: 0x24844060  addiu       $a0, $a0, 0x4060
    ctx->pc = 0x3e6318u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16480));
    // 0x3e631c: 0x24050024  addiu       $a1, $zero, 0x24
    ctx->pc = 0x3e631cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x3e6320: 0xa2020080  sb          $v0, 0x80($s0)
    ctx->pc = 0x3e6320u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 128), (uint8_t)GPR_U32(ctx, 2));
    // 0x3e6324: 0xc0ce5d0  jal         func_339740
    ctx->pc = 0x3E6324u;
    SET_GPR_U32(ctx, 31, 0x3E632Cu);
    ctx->pc = 0x3E6328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E6324u;
    // 0x3e6328: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x339740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x339740u, 0x3E6324u, 0x3E632Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E632Cu;
label_3e632c:
    // 0x3e632c: 0xa2000079  sb          $zero, 0x79($s0)
    ctx->pc = 0x3e632cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 121), (uint8_t)GPR_U32(ctx, 0));
    // 0x3e6330: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e6330u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e6334: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3e6334u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e6338: 0xc0f936c  jal         func_3E4DB0
    ctx->pc = 0x3E6338u;
    SET_GPR_U32(ctx, 31, 0x3E6340u);
    ctx->pc = 0x3E633Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E6338u;
    // 0x3e633c: 0xa200007d  sb          $zero, 0x7D($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 125), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E4DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E4DB0u, 0x3E6338u, 0x3E6340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E6340u;
label_3e6340:
    // 0x3e6340: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e6340u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e6344: 0xc0f936c  jal         func_3E4DB0
    ctx->pc = 0x3E6344u;
    SET_GPR_U32(ctx, 31, 0x3E634Cu);
    ctx->pc = 0x3E6348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E6344u;
    // 0x3e6348: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E4DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E4DB0u, 0x3E6344u, 0x3E634Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E634Cu;
label_3e634c:
    // 0x3e634c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3e634cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3e6350: 0x2403bfff  addiu       $v1, $zero, -0x4001
    ctx->pc = 0x3e6350u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950911));
    // 0x3e6354: 0x8c24ceb8  lw          $a0, -0x3148($at)
    ctx->pc = 0x3e6354u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x81CEB8u));
    // 0x3e6358: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x3e6358u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x3e635c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3e635cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3e6360: 0x10000147  b           . + 4 + (0x147 << 2)
    ctx->pc = 0x3E6360u;
    {
        const bool branch_taken_0x3e6360 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E6364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6360u;
        // 0x3e6364: 0xac23ceb8  sw          $v1, -0x3148($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294954680), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e6360) {
            ctx->pc = 0x3E6880u;
            goto label_3e6880;
        }
    }
    ctx->pc = 0x3E6368u;
label_3e6368:
    // 0x3e6368: 0x30834000  andi        $v1, $a0, 0x4000
    ctx->pc = 0x3e6368u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16384);
    // 0x3e636c: 0x10600144  beqz        $v1, . + 4 + (0x144 << 2)
    ctx->pc = 0x3E636Cu;
    {
        const bool branch_taken_0x3e636c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E6370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E636Cu;
        // 0x3e6370: 0x3c01008f  lui         $at, 0x8F (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)143 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e636c) {
            ctx->pc = 0x3E6880u;
            goto label_3e6880;
        }
    }
    ctx->pc = 0x3E6374u;
    // 0x3e6374: 0x8c22ea20  lw          $v0, -0x15E0($at)
    ctx->pc = 0x3e6374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961696)));
    // 0x3e6378: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x3e6378u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x3e637c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x3E637Cu;
    {
        const bool branch_taken_0x3e637c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E6380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E637Cu;
        // 0x3e6380: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e637c) {
            ctx->pc = 0x3E63C0u;
            goto label_3e63c0;
        }
    }
    ctx->pc = 0x3E6384u;
    // 0x3e6384: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3e6384u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3e6388: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x3e6388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x3e638c: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3e638cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3e6390: 0x3c020200  lui         $v0, 0x200
    ctx->pc = 0x3e6390u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
    // 0x3e6394: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3e6394u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e6398: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x3e6398u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x3e639c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3e639cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e63a0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3e63a0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e63a4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3e63a4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e63a8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3e63a8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e63ac: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3E63ACu;
    SET_GPR_U32(ctx, 31, 0x3E63B4u);
    ctx->pc = 0x3E63B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E63ACu;
    // 0x3e63b0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3E63ACu, 0x3E63B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E63B4u;
label_3e63b4:
    // 0x3e63b4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x3E63B4u;
    {
        const bool branch_taken_0x3e63b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e63b4) {
            ctx->pc = 0x3E63F8u;
            goto label_3e63f8;
        }
    }
    ctx->pc = 0x3E63BCu;
    // 0x3e63bc: 0x0  nop
    ctx->pc = 0x3e63bcu;
    // NOP
label_3e63c0:
    // 0x3e63c0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3e63c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3e63c4: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x3e63c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x3e63c8: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3e63c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3e63cc: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x3e63ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x3e63d0: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3e63d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3e63d4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3e63d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e63d8: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x3e63d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x3e63dc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3e63dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e63e0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3e63e0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e63e4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3e63e4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e63e8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3e63e8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e63ec: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3E63ECu;
    SET_GPR_U32(ctx, 31, 0x3E63F4u);
    ctx->pc = 0x3E63F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E63ECu;
    // 0x3e63f0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3E63ECu, 0x3E63F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E63F4u;
label_3e63f4:
    // 0x3e63f4: 0x0  nop
    ctx->pc = 0x3e63f4u;
    // NOP
label_3e63f8:
    // 0x3e63f8: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x3e63f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3e63fc: 0xa2020058  sb          $v0, 0x58($s0)
    ctx->pc = 0x3e63fcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 88), (uint8_t)GPR_U32(ctx, 2));
    // 0x3e6400: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x3e6400u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x3e6404: 0x82050058  lb          $a1, 0x58($s0)
    ctx->pc = 0x3e6404u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x3e6408: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3e6408u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x3e640c: 0x2463e924  addiu       $v1, $v1, -0x16DC
    ctx->pc = 0x3e640cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961444));
    // 0x3e6410: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3e6410u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3e6414: 0x2442e926  addiu       $v0, $v0, -0x16DA
    ctx->pc = 0x3e6414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961446));
    // 0x3e6418: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x3e6418u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x3e641c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x3e641cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x3e6420: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x3e6420u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x3e6424: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3e6424u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3e6428: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x3e6428u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3e642c: 0x24630007  addiu       $v1, $v1, 0x7
    ctx->pc = 0x3e642cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7));
    // 0x3e6430: 0xa423edf4  sh          $v1, -0x120C($at)
    ctx->pc = 0x3e6430u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294962676), (uint16_t)GPR_U32(ctx, 3));
    // 0x3e6434: 0x82040058  lb          $a0, 0x58($s0)
    ctx->pc = 0x3e6434u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x3e6438: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3e6438u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3e643c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x3e643cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3e6440: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3e6440u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3e6444: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x3e6444u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x3e6448: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x3e6448u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3e644c: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x3e644cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3e6450: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x3e6450u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x3e6454: 0xa423edf6  sh          $v1, -0x120A($at)
    ctx->pc = 0x3e6454u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294962678), (uint16_t)GPR_U32(ctx, 3));
    // 0x3e6458: 0x82040058  lb          $a0, 0x58($s0)
    ctx->pc = 0x3e6458u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x3e645c: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3e645cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3e6460: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x3e6460u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3e6464: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3e6464u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3e6468: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x3e6468u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x3e646c: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x3e646cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3e6470: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x3e6470u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3e6474: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3e6474u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3e6478: 0xa423e806  sh          $v1, -0x17FA($at)
    ctx->pc = 0x3e6478u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294961158), (uint16_t)GPR_U32(ctx, 3));
    // 0x3e647c: 0x82040058  lb          $a0, 0x58($s0)
    ctx->pc = 0x3e647cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x3e6480: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3e6480u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3e6484: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x3e6484u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3e6488: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3e6488u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3e648c: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x3e648cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x3e6490: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x3e6490u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3e6494: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x3e6494u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3e6498: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3e6498u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3e649c: 0xa423e81e  sh          $v1, -0x17E2($at)
    ctx->pc = 0x3e649cu;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294961182), (uint16_t)GPR_U32(ctx, 3));
    // 0x3e64a0: 0x82040058  lb          $a0, 0x58($s0)
    ctx->pc = 0x3e64a0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x3e64a4: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3e64a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3e64a8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x3e64a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3e64ac: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3e64acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3e64b0: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x3e64b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x3e64b4: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x3e64b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3e64b8: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x3e64b8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3e64bc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3e64bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3e64c0: 0xa423e836  sh          $v1, -0x17CA($at)
    ctx->pc = 0x3e64c0u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294961206), (uint16_t)GPR_U32(ctx, 3));
    // 0x3e64c4: 0x82040058  lb          $a0, 0x58($s0)
    ctx->pc = 0x3e64c4u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x3e64c8: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3e64c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3e64cc: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x3e64ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3e64d0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3e64d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3e64d4: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x3e64d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x3e64d8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3e64d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3e64dc: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x3e64dcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3e64e0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3e64e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3e64e4: 0xc0fa10c  jal         func_3E8430
    ctx->pc = 0x3E64E4u;
    SET_GPR_U32(ctx, 31, 0x3E64ECu);
    ctx->pc = 0x3E64E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E64E4u;
    // 0x3e64e8: 0xa422e84e  sh          $v0, -0x17B2($at) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294961230), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E8430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E8430u, 0x3E64E4u, 0x3E64ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E64ECu;
label_3e64ec:
    // 0x3e64ec: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3e64ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3e64f0: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3e64f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3e64f4: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x3e64f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x3e64f8: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3e64f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3e64fc: 0x3c020500  lui         $v0, 0x500
    ctx->pc = 0x3e64fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1280 << 16));
    // 0x3e6500: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3e6500u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e6504: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x3e6504u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x3e6508: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3e6508u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e650c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3e650cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e6510: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3e6510u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e6514: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3e6514u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e6518: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3E6518u;
    SET_GPR_U32(ctx, 31, 0x3E6520u);
    ctx->pc = 0x3E651Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E6518u;
    // 0x3e651c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3E6518u, 0x3E6520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E6520u;
label_3e6520:
    // 0x3e6520: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e6520u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e6524: 0xc0f9e88  jal         func_3E7A20
    ctx->pc = 0x3E6524u;
    SET_GPR_U32(ctx, 31, 0x3E652Cu);
    ctx->pc = 0x3E6528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E6524u;
    // 0x3e6528: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E7A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E7A20u, 0x3E6524u, 0x3E652Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E652Cu;
label_3e652c:
    // 0x3e652c: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3e652cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3e6530: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x3e6530u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3e6534: 0x2484cbe0  addiu       $a0, $a0, -0x3420
    ctx->pc = 0x3e6534u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
    // 0x3e6538: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3e6538u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e653c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3e653cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e6540: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3e6540u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e6544: 0xc063cd0  jal         func_18F340
    ctx->pc = 0x3E6544u;
    SET_GPR_U32(ctx, 31, 0x3E654Cu);
    ctx->pc = 0x3E6548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E6544u;
    // 0x3e6548: 0x2409ffff  addiu       $t1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F340u, 0x3E6544u, 0x3E654Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E654Cu;
label_3e654c:
    // 0x3e654c: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x3e654cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3e6550: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x3e6550u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x3e6554: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3e6554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3e6558: 0xa2030054  sb          $v1, 0x54($s0)
    ctx->pc = 0x3e6558u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 84), (uint8_t)GPR_U32(ctx, 3));
    // 0x3e655c: 0xa202005a  sb          $v0, 0x5A($s0)
    ctx->pc = 0x3e655cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 90), (uint8_t)GPR_U32(ctx, 2));
    // 0x3e6560: 0x3c010091  lui         $at, 0x91
    ctx->pc = 0x3e6560u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)145 << 16));
    // 0x3e6564: 0xa200005c  sb          $zero, 0x5C($s0)
    ctx->pc = 0x3e6564u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 92), (uint8_t)GPR_U32(ctx, 0));
    // 0x3e6568: 0x24843fb0  addiu       $a0, $a0, 0x3FB0
    ctx->pc = 0x3e6568u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16304));
    // 0x3e656c: 0xa200005b  sb          $zero, 0x5B($s0)
    ctx->pc = 0x3e656cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 91), (uint8_t)GPR_U32(ctx, 0));
    // 0x3e6570: 0xac2040b4  sw          $zero, 0x40B4($at)
    ctx->pc = 0x3e6570u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x9140B4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x9140B4u, _value); } while (0);
    // 0x3e6574: 0x3c010091  lui         $at, 0x91
    ctx->pc = 0x3e6574u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)145 << 16));
    // 0x3e6578: 0x8c2540b8  lw          $a1, 0x40B8($at)
    ctx->pc = 0x3e6578u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x9140B8u));
    // 0x3e657c: 0xc0ce438  jal         func_3390E0
    ctx->pc = 0x3E657Cu;
    SET_GPR_U32(ctx, 31, 0x3E6584u);
    ctx->pc = 0x3E6580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E657Cu;
    // 0x3e6580: 0x2406fffb  addiu       $a2, $zero, -0x5 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3390E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3390E0u, 0x3E657Cu, 0x3E6584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E6584u;
label_3e6584:
    // 0x3e6584: 0x100000be  b           . + 4 + (0xBE << 2)
    ctx->pc = 0x3E6584u;
    {
        const bool branch_taken_0x3e6584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e6584) {
            ctx->pc = 0x3E6880u;
            goto label_3e6880;
        }
    }
    ctx->pc = 0x3E658Cu;
    // 0x3e658c: 0x0  nop
    ctx->pc = 0x3e658cu;
    // NOP
label_3e6590:
    // 0x3e6590: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3e6590u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3e6594: 0x9024fc8c  lbu         $a0, -0x374($at)
    ctx->pc = 0x3e6594u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x81FC8Cu));
    // 0x3e6598: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3e6598u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3e659c: 0x108300b8  beq         $a0, $v1, . + 4 + (0xB8 << 2)
    ctx->pc = 0x3E659Cu;
    {
        const bool branch_taken_0x3e659c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x3E65A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E659Cu;
        // 0x3e65a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e659c) {
            ctx->pc = 0x3E6880u;
            goto label_3e6880;
        }
    }
    ctx->pc = 0x3E65A4u;
    // 0x3e65a4: 0xc0f94d8  jal         func_3E5360
    ctx->pc = 0x3E65A4u;
    SET_GPR_U32(ctx, 31, 0x3E65ACu);
    ctx->pc = 0x3E5360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E5360u, 0x3E65A4u, 0x3E65ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E65ACu;
label_3e65ac:
    // 0x3e65ac: 0x100000b4  b           . + 4 + (0xB4 << 2)
    ctx->pc = 0x3E65ACu;
    {
        const bool branch_taken_0x3e65ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e65ac) {
            ctx->pc = 0x3E6880u;
            goto label_3e6880;
        }
    }
    ctx->pc = 0x3E65B4u;
    // 0x3e65b4: 0x0  nop
    ctx->pc = 0x3e65b4u;
    // NOP
label_3e65b8:
    // 0x3e65b8: 0xc0f952c  jal         func_3E54B0
    ctx->pc = 0x3E65B8u;
    SET_GPR_U32(ctx, 31, 0x3E65C0u);
    ctx->pc = 0x3E65BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E65B8u;
    // 0x3e65bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E54B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E54B0u, 0x3E65B8u, 0x3E65C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E65C0u;
label_3e65c0:
    // 0x3e65c0: 0x100000af  b           . + 4 + (0xAF << 2)
    ctx->pc = 0x3E65C0u;
    {
        const bool branch_taken_0x3e65c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e65c0) {
            ctx->pc = 0x3E6880u;
            goto label_3e6880;
        }
    }
    ctx->pc = 0x3E65C8u;
label_3e65c8:
    // 0x3e65c8: 0x3c010069  lui         $at, 0x69
    ctx->pc = 0x3e65c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)105 << 16));
    // 0x3e65cc: 0x902364ca  lbu         $v1, 0x64CA($at)
    ctx->pc = 0x3e65ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x6964CAu));
    // 0x3e65d0: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x3E65D0u;
    {
        const bool branch_taken_0x3e65d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E65D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E65D0u;
        // 0x3e65d4: 0x3c040083  lui         $a0, 0x83 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e65d0) {
            ctx->pc = 0x3E6608u;
            goto label_3e6608;
        }
    }
    ctx->pc = 0x3E65D8u;
    // 0x3e65d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3e65d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e65dc: 0x2484cbe0  addiu       $a0, $a0, -0x3420
    ctx->pc = 0x3e65dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
    // 0x3e65e0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3e65e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e65e4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3e65e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e65e8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3e65e8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e65ec: 0xc063c70  jal         func_18F1C0
    ctx->pc = 0x3E65ECu;
    SET_GPR_U32(ctx, 31, 0x3E65F4u);
    ctx->pc = 0x3E65F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E65ECu;
    // 0x3e65f0: 0x2409ffff  addiu       $t1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F1C0u, 0x3E65ECu, 0x3E65F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E65F4u;
label_3e65f4:
    // 0x3e65f4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3e65f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3e65f8: 0xa2030054  sb          $v1, 0x54($s0)
    ctx->pc = 0x3e65f8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 84), (uint8_t)GPR_U32(ctx, 3));
    // 0x3e65fc: 0xa203005a  sb          $v1, 0x5A($s0)
    ctx->pc = 0x3e65fcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 90), (uint8_t)GPR_U32(ctx, 3));
    // 0x3e6600: 0x1000009f  b           . + 4 + (0x9F << 2)
    ctx->pc = 0x3E6600u;
    {
        const bool branch_taken_0x3e6600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E6604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6600u;
        // 0x3e6604: 0xa2030055  sb          $v1, 0x55($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 85), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e6600) {
            ctx->pc = 0x3E6880u;
            goto label_3e6880;
        }
    }
    ctx->pc = 0x3E6608u;
label_3e6608:
    // 0x3e6608: 0x3c01008f  lui         $at, 0x8F
    ctx->pc = 0x3e6608u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)143 << 16));
    // 0x3e660c: 0x8c24ea28  lw          $a0, -0x15D8($at)
    ctx->pc = 0x3e660cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x8EEA28u));
    // 0x3e6610: 0x30832008  andi        $v1, $a0, 0x2008
    ctx->pc = 0x3e6610u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8200);
    // 0x3e6614: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x3E6614u;
    {
        const bool branch_taken_0x3e6614 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e6614) {
            ctx->pc = 0x3E6658u;
            goto label_3e6658;
        }
    }
    ctx->pc = 0x3E661Cu;
    // 0x3e661c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3e661cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3e6620: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3e6620u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3e6624: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x3e6624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x3e6628: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3e6628u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3e662c: 0x3c020300  lui         $v0, 0x300
    ctx->pc = 0x3e662cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)768 << 16));
    // 0x3e6630: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3e6630u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e6634: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x3e6634u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x3e6638: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3e6638u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e663c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3e663cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e6640: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3e6640u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e6644: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3e6644u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e6648: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3E6648u;
    SET_GPR_U32(ctx, 31, 0x3E6650u);
    ctx->pc = 0x3E664Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E6648u;
    // 0x3e664c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3E6648u, 0x3E6650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E6650u;
label_3e6650:
    // 0x3e6650: 0x1000008b  b           . + 4 + (0x8B << 2)
    ctx->pc = 0x3E6650u;
    {
        const bool branch_taken_0x3e6650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e6650) {
            ctx->pc = 0x3E6880u;
            goto label_3e6880;
        }
    }
    ctx->pc = 0x3E6658u;
label_3e6658:
    // 0x3e6658: 0x30834000  andi        $v1, $a0, 0x4000
    ctx->pc = 0x3e6658u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16384);
    // 0x3e665c: 0x10600088  beqz        $v1, . + 4 + (0x88 << 2)
    ctx->pc = 0x3E665Cu;
    {
        const bool branch_taken_0x3e665c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E6660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E665Cu;
        // 0x3e6660: 0x3c01008f  lui         $at, 0x8F (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)143 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e665c) {
            ctx->pc = 0x3E6880u;
            goto label_3e6880;
        }
    }
    ctx->pc = 0x3E6664u;
    // 0x3e6664: 0x8c22ea20  lw          $v0, -0x15E0($at)
    ctx->pc = 0x3e6664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961696)));
    // 0x3e6668: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x3e6668u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x3e666c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x3E666Cu;
    {
        const bool branch_taken_0x3e666c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E6670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E666Cu;
        // 0x3e6670: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e666c) {
            ctx->pc = 0x3E66B0u;
            goto label_3e66b0;
        }
    }
    ctx->pc = 0x3E6674u;
    // 0x3e6674: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3e6674u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3e6678: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x3e6678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x3e667c: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3e667cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3e6680: 0x3c020200  lui         $v0, 0x200
    ctx->pc = 0x3e6680u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
    // 0x3e6684: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3e6684u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e6688: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x3e6688u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x3e668c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3e668cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e6690: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3e6690u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e6694: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3e6694u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e6698: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3e6698u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e669c: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3E669Cu;
    SET_GPR_U32(ctx, 31, 0x3E66A4u);
    ctx->pc = 0x3E66A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E669Cu;
    // 0x3e66a0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3E669Cu, 0x3E66A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E66A4u;
label_3e66a4:
    // 0x3e66a4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x3E66A4u;
    {
        const bool branch_taken_0x3e66a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e66a4) {
            ctx->pc = 0x3E66E8u;
            goto label_3e66e8;
        }
    }
    ctx->pc = 0x3E66ACu;
    // 0x3e66ac: 0x0  nop
    ctx->pc = 0x3e66acu;
    // NOP
label_3e66b0:
    // 0x3e66b0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3e66b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3e66b4: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x3e66b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x3e66b8: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3e66b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3e66bc: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x3e66bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x3e66c0: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3e66c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3e66c4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3e66c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e66c8: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x3e66c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x3e66cc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3e66ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e66d0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3e66d0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e66d4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3e66d4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e66d8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3e66d8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e66dc: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3E66DCu;
    SET_GPR_U32(ctx, 31, 0x3E66E4u);
    ctx->pc = 0x3E66E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E66DCu;
    // 0x3e66e0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3E66DCu, 0x3E66E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E66E4u;
label_3e66e4:
    // 0x3e66e4: 0x0  nop
    ctx->pc = 0x3e66e4u;
    // NOP
label_3e66e8:
    // 0x3e66e8: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x3e66e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3e66ec: 0xa2020058  sb          $v0, 0x58($s0)
    ctx->pc = 0x3e66ecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 88), (uint8_t)GPR_U32(ctx, 2));
    // 0x3e66f0: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x3e66f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x3e66f4: 0x82060058  lb          $a2, 0x58($s0)
    ctx->pc = 0x3e66f4u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x3e66f8: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3e66f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x3e66fc: 0x2484e924  addiu       $a0, $a0, -0x16DC
    ctx->pc = 0x3e66fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961444));
    // 0x3e6700: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3e6700u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3e6704: 0x2442e926  addiu       $v0, $v0, -0x16DA
    ctx->pc = 0x3e6704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961446));
    // 0x3e6708: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3e6708u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3e670c: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x3e670cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x3e6710: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x3e6710u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x3e6714: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x3e6714u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x3e6718: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x3e6718u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x3e671c: 0x84840000  lh          $a0, 0x0($a0)
    ctx->pc = 0x3e671cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3e6720: 0x24840007  addiu       $a0, $a0, 0x7
    ctx->pc = 0x3e6720u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7));
    // 0x3e6724: 0xa424edf4  sh          $a0, -0x120C($at)
    ctx->pc = 0x3e6724u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294962676), (uint16_t)GPR_U32(ctx, 4));
    // 0x3e6728: 0x82050058  lb          $a1, 0x58($s0)
    ctx->pc = 0x3e6728u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x3e672c: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3e672cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3e6730: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x3e6730u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x3e6734: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x3e6734u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x3e6738: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x3e6738u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x3e673c: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x3e673cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3e6740: 0x84840000  lh          $a0, 0x0($a0)
    ctx->pc = 0x3e6740u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3e6744: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x3e6744u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x3e6748: 0xa424edf6  sh          $a0, -0x120A($at)
    ctx->pc = 0x3e6748u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294962678), (uint16_t)GPR_U32(ctx, 4));
    // 0x3e674c: 0x82050058  lb          $a1, 0x58($s0)
    ctx->pc = 0x3e674cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x3e6750: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3e6750u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3e6754: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x3e6754u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x3e6758: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x3e6758u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x3e675c: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x3e675cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x3e6760: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x3e6760u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3e6764: 0x84840000  lh          $a0, 0x0($a0)
    ctx->pc = 0x3e6764u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3e6768: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3e6768u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3e676c: 0xa424e806  sh          $a0, -0x17FA($at)
    ctx->pc = 0x3e676cu;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294961158), (uint16_t)GPR_U32(ctx, 4));
    // 0x3e6770: 0x82050058  lb          $a1, 0x58($s0)
    ctx->pc = 0x3e6770u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x3e6774: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3e6774u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3e6778: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x3e6778u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x3e677c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x3e677cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x3e6780: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x3e6780u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x3e6784: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x3e6784u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3e6788: 0x84840000  lh          $a0, 0x0($a0)
    ctx->pc = 0x3e6788u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3e678c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3e678cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3e6790: 0xa424e81e  sh          $a0, -0x17E2($at)
    ctx->pc = 0x3e6790u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294961182), (uint16_t)GPR_U32(ctx, 4));
    // 0x3e6794: 0x82050058  lb          $a1, 0x58($s0)
    ctx->pc = 0x3e6794u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x3e6798: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3e6798u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3e679c: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x3e679cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x3e67a0: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x3e67a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x3e67a4: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x3e67a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x3e67a8: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x3e67a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3e67ac: 0x84840000  lh          $a0, 0x0($a0)
    ctx->pc = 0x3e67acu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3e67b0: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3e67b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3e67b4: 0xa424e836  sh          $a0, -0x17CA($at)
    ctx->pc = 0x3e67b4u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294961206), (uint16_t)GPR_U32(ctx, 4));
    // 0x3e67b8: 0x82050058  lb          $a1, 0x58($s0)
    ctx->pc = 0x3e67b8u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x3e67bc: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3e67bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3e67c0: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x3e67c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x3e67c4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x3e67c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x3e67c8: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x3e67c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x3e67cc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3e67ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3e67d0: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x3e67d0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3e67d4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3e67d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3e67d8: 0xa422e84e  sh          $v0, -0x17B2($at)
    ctx->pc = 0x3e67d8u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294961230), (uint16_t)GPR_U32(ctx, 2));
    // 0x3e67dc: 0xc0fa10c  jal         func_3E8430
    ctx->pc = 0x3E67DCu;
    SET_GPR_U32(ctx, 31, 0x3E67E4u);
    ctx->pc = 0x3E67E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E67DCu;
    // 0x3e67e0: 0xa2030055  sb          $v1, 0x55($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 85), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E8430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E8430u, 0x3E67DCu, 0x3E67E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E67E4u;
label_3e67e4:
    // 0x3e67e4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3e67e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3e67e8: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3e67e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3e67ec: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x3e67ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x3e67f0: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3e67f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3e67f4: 0x3c020500  lui         $v0, 0x500
    ctx->pc = 0x3e67f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1280 << 16));
    // 0x3e67f8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3e67f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e67fc: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x3e67fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x3e6800: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3e6800u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e6804: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3e6804u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e6808: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3e6808u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e680c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3e680cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e6810: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3E6810u;
    SET_GPR_U32(ctx, 31, 0x3E6818u);
    ctx->pc = 0x3E6814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E6810u;
    // 0x3e6814: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3E6810u, 0x3E6818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E6818u;
label_3e6818:
    // 0x3e6818: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e6818u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e681c: 0xc0f9e88  jal         func_3E7A20
    ctx->pc = 0x3E681Cu;
    SET_GPR_U32(ctx, 31, 0x3E6824u);
    ctx->pc = 0x3E6820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E681Cu;
    // 0x3e6820: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E7A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E7A20u, 0x3E681Cu, 0x3E6824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E6824u;
label_3e6824:
    // 0x3e6824: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3e6824u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3e6828: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x3e6828u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3e682c: 0x2484cbe0  addiu       $a0, $a0, -0x3420
    ctx->pc = 0x3e682cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
    // 0x3e6830: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3e6830u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e6834: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3e6834u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e6838: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3e6838u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e683c: 0xc063cd0  jal         func_18F340
    ctx->pc = 0x3E683Cu;
    SET_GPR_U32(ctx, 31, 0x3E6844u);
    ctx->pc = 0x3E6840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E683Cu;
    // 0x3e6840: 0x2409ffff  addiu       $t1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F340u, 0x3E683Cu, 0x3E6844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E6844u;
label_3e6844:
    // 0x3e6844: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x3e6844u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3e6848: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x3e6848u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x3e684c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3e684cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3e6850: 0xa2030054  sb          $v1, 0x54($s0)
    ctx->pc = 0x3e6850u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 84), (uint8_t)GPR_U32(ctx, 3));
    // 0x3e6854: 0xa202005a  sb          $v0, 0x5A($s0)
    ctx->pc = 0x3e6854u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 90), (uint8_t)GPR_U32(ctx, 2));
    // 0x3e6858: 0x3c010091  lui         $at, 0x91
    ctx->pc = 0x3e6858u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)145 << 16));
    // 0x3e685c: 0xa200005c  sb          $zero, 0x5C($s0)
    ctx->pc = 0x3e685cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 92), (uint8_t)GPR_U32(ctx, 0));
    // 0x3e6860: 0x24843fb0  addiu       $a0, $a0, 0x3FB0
    ctx->pc = 0x3e6860u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16304));
    // 0x3e6864: 0xa200005b  sb          $zero, 0x5B($s0)
    ctx->pc = 0x3e6864u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 91), (uint8_t)GPR_U32(ctx, 0));
    // 0x3e6868: 0xac2040b4  sw          $zero, 0x40B4($at)
    ctx->pc = 0x3e6868u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x9140B4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x9140B4u, _value); } while (0);
    // 0x3e686c: 0x3c010091  lui         $at, 0x91
    ctx->pc = 0x3e686cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)145 << 16));
    // 0x3e6870: 0x8c2540b8  lw          $a1, 0x40B8($at)
    ctx->pc = 0x3e6870u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x9140B8u));
    // 0x3e6874: 0xc0ce438  jal         func_3390E0
    ctx->pc = 0x3E6874u;
    SET_GPR_U32(ctx, 31, 0x3E687Cu);
    ctx->pc = 0x3E6878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E6874u;
    // 0x3e6878: 0x2406fffb  addiu       $a2, $zero, -0x5 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3390E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3390E0u, 0x3E6874u, 0x3E687Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E687Cu;
label_3e687c:
    // 0x3e687c: 0x0  nop
    ctx->pc = 0x3e687cu;
    // NOP
label_3e6880:
    // 0x3e6880: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3e6880u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3e6884: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3e6884u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e6888: 0x3e00008  jr          $ra
    ctx->pc = 0x3E6888u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E688Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6888u;
        // 0x3e688c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E6888u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E6890u;
}
