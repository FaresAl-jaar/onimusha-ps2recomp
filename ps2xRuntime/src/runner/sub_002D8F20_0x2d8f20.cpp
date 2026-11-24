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

// Function: sub_002D8F20
// Address: 0x2d8f20 - 0x2d9264
void sub_002D8F20_0x2d8f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D8F20_0x2d8f20");
#endif

    switch (ctx->pc) {
        case 0x2d8f70u: goto label_2d8f70;
        case 0x2d9018u: goto label_2d9018;
        case 0x2d9024u: goto label_2d9024;
        case 0x2d9030u: goto label_2d9030;
        case 0x2d9098u: goto label_2d9098;
        case 0x2d90f0u: goto label_2d90f0;
        case 0x2d9198u: goto label_2d9198;
        case 0x2d91a4u: goto label_2d91a4;
        case 0x2d91b0u: goto label_2d91b0;
        case 0x2d9218u: goto label_2d9218;
        default: break;
    }

    ctx->pc = 0x2d8f20u;

    // 0x2d8f20: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2d8f20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2d8f24: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2d8f24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2d8f28: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2d8f28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2d8f2c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2d8f2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2d8f30: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2d8f30u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8f34: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d8f34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2d8f38: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2d8f38u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8f3c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d8f3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2d8f40: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2d8f40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8f44: 0x12200060  beqz        $s1, . + 4 + (0x60 << 2)
    ctx->pc = 0x2D8F44u;
    {
        const bool branch_taken_0x2d8f44 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8F44u;
        // 0x2d8f48: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8f44) {
            ctx->pc = 0x2D90C8u;
            goto label_2d90c8;
        }
    }
    ctx->pc = 0x2D8F4Cu;
    // 0x2d8f4c: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2d8f4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2d8f50: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x2d8f50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x2d8f54: 0x8c226ccc  lw          $v0, 0x6CCC($at)
    ctx->pc = 0x2d8f54u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x8D6CCCu));
    // 0x2d8f58: 0x24846cc0  addiu       $a0, $a0, 0x6CC0
    ctx->pc = 0x2d8f58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27840));
    // 0x2d8f5c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2d8f5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8f60: 0x34422801  ori         $v0, $v0, 0x2801
    ctx->pc = 0x2d8f60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)10241);
    // 0x2d8f64: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2d8f64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2d8f68: 0xc0b63a4  jal         func_2D8E90
    ctx->pc = 0x2D8F68u;
    SET_GPR_U32(ctx, 31, 0x2D8F70u);
    ctx->pc = 0x2D8F6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8F68u;
    // 0x2d8f6c: 0xac226ccc  sw          $v0, 0x6CCC($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 27852), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8E90u, 0x2D8F68u, 0x2D8F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8F70u;
label_2d8f70:
    // 0x2d8f70: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2d8f70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2d8f74: 0xa4336ce8  sh          $s3, 0x6CE8($at)
    ctx->pc = 0x2d8f74u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 19)); ps2TraceGuestWrite(rdram, 0x8D6CE8u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x8D6CE8u, _value); } while (0);
    // 0x2d8f78: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2d8f78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2d8f7c: 0xa4326cea  sh          $s2, 0x6CEA($at)
    ctx->pc = 0x2d8f7cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x8D6CEAu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x8D6CEAu, _value); } while (0);
    // 0x2d8f80: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2d8f80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2d8f84: 0x90236d2e  lbu         $v1, 0x6D2E($at)
    ctx->pc = 0x2d8f84u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x8D6D2Eu));
    // 0x2d8f88: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2d8f88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2d8f8c: 0x34630003  ori         $v1, $v1, 0x3
    ctx->pc = 0x2d8f8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3);
    // 0x2d8f90: 0x8c226ccc  lw          $v0, 0x6CCC($at)
    ctx->pc = 0x2d8f90u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x8D6CCCu));
    // 0x2d8f94: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2d8f94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2d8f98: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x2d8f98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x2d8f9c: 0xa0236d2e  sb          $v1, 0x6D2E($at)
    ctx->pc = 0x2d8f9cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x8D6D2Eu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x8D6D2Eu, _value); } while (0);
    // 0x2d8fa0: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2d8fa0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2d8fa4: 0xac226ccc  sw          $v0, 0x6CCC($at)
    ctx->pc = 0x2d8fa4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x8D6CCCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8D6CCCu, _value); } while (0);
    // 0x2d8fa8: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2d8fa8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2d8fac: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x2d8facu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2d8fb0: 0x8c226ccc  lw          $v0, 0x6CCC($at)
    ctx->pc = 0x2d8fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x8D6CCCu));
    // 0x2d8fb4: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2d8fb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2d8fb8: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x2d8fb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x2d8fbc: 0xa0236cd6  sb          $v1, 0x6CD6($at)
    ctx->pc = 0x2d8fbcu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x8D6CD6u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x8D6CD6u, _value); } while (0);
    // 0x2d8fc0: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2d8fc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2d8fc4: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x2D8FC4u;
    {
        const bool branch_taken_0x2d8fc4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8FC4u;
        // 0x2d8fc8: 0xac226ccc  sw          $v0, 0x6CCC($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 27852), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8fc4) {
            ctx->pc = 0x2D8FF0u;
            goto label_2d8ff0;
        }
    }
    ctx->pc = 0x2D8FCCu;
    // 0x2d8fcc: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2d8fccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2d8fd0: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x2d8fd0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d8fd4: 0x8c226ccc  lw          $v0, 0x6CCC($at)
    ctx->pc = 0x2d8fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x8D6CCCu));
    // 0x2d8fd8: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2d8fd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2d8fdc: 0x34420200  ori         $v0, $v0, 0x200
    ctx->pc = 0x2d8fdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)512);
    // 0x2d8fe0: 0xa0236cd7  sb          $v1, 0x6CD7($at)
    ctx->pc = 0x2d8fe0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x8D6CD7u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x8D6CD7u, _value); } while (0);
    // 0x2d8fe4: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2d8fe4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2d8fe8: 0xac226ccc  sw          $v0, 0x6CCC($at)
    ctx->pc = 0x2d8fe8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x8D6CCCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8D6CCCu, _value); } while (0);
    // 0x2d8fec: 0x0  nop
    ctx->pc = 0x2d8fecu;
    // NOP
label_2d8ff0:
    // 0x2d8ff0: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2d8ff0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2d8ff4: 0xa0206cd9  sb          $zero, 0x6CD9($at)
    ctx->pc = 0x2d8ff4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x8D6CD9u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x8D6CD9u, _value); } while (0);
    // 0x2d8ff8: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x2d8ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x2d8ffc: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2d8ffcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2d9000: 0x24846cc0  addiu       $a0, $a0, 0x6CC0
    ctx->pc = 0x2d9000u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27840));
    // 0x2d9004: 0x8c226ccc  lw          $v0, 0x6CCC($at)
    ctx->pc = 0x2d9004u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x8D6CCCu));
    // 0x2d9008: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x2d9008u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x2d900c: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2d900cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2d9010: 0xc0b4588  jal         func_2D1620
    ctx->pc = 0x2D9010u;
    SET_GPR_U32(ctx, 31, 0x2D9018u);
    ctx->pc = 0x2D9014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9010u;
    // 0x2d9014: 0xac226ccc  sw          $v0, 0x6CCC($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 27852), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D1620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D1620u, 0x2D9010u, 0x2D9018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9018u;
label_2d9018:
    // 0x2d9018: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x2d9018u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x2d901c: 0xc0b45a0  jal         func_2D1680
    ctx->pc = 0x2D901Cu;
    SET_GPR_U32(ctx, 31, 0x2D9024u);
    ctx->pc = 0x2D9020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D901Cu;
    // 0x2d9020: 0x24846cc0  addiu       $a0, $a0, 0x6CC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D1680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D1680u, 0x2D901Cu, 0x2D9024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9024u;
label_2d9024:
    // 0x2d9024: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x2d9024u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x2d9028: 0xc0b5c48  jal         func_2D7120
    ctx->pc = 0x2D9028u;
    SET_GPR_U32(ctx, 31, 0x2D9030u);
    ctx->pc = 0x2D902Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9028u;
    // 0x2d902c: 0x24846cc0  addiu       $a0, $a0, 0x6CC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7120u, 0x2D9028u, 0x2D9030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9030u;
label_2d9030:
    // 0x2d9030: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2d9030u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2d9034: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x2d9034u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x2d9038: 0x8c266ccc  lw          $a2, 0x6CCC($at)
    ctx->pc = 0x2d9038u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x8D6CCCu));
    // 0x2d903c: 0x2405feff  addiu       $a1, $zero, -0x101
    ctx->pc = 0x2d903cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967039));
    // 0x2d9040: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x2d9040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2d9044: 0x2403fdff  addiu       $v1, $zero, -0x201
    ctx->pc = 0x2d9044u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966783));
    // 0x2d9048: 0x24846cc0  addiu       $a0, $a0, 0x6CC0
    ctx->pc = 0x2d9048u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27840));
    // 0x2d904c: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2d904cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2d9050: 0xc52824  and         $a1, $a2, $a1
    ctx->pc = 0x2d9050u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
    // 0x2d9054: 0xa4226ce8  sh          $v0, 0x6CE8($at)
    ctx->pc = 0x2d9054u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 27880), (uint16_t)GPR_U32(ctx, 2));
    // 0x2d9058: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2d9058u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2d905c: 0xa4226cea  sh          $v0, 0x6CEA($at)
    ctx->pc = 0x2d905cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x8D6CEAu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x8D6CEAu, _value); } while (0);
    // 0x2d9060: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2d9060u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2d9064: 0x2402ff7f  addiu       $v0, $zero, -0x81
    ctx->pc = 0x2d9064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x2d9068: 0xac256ccc  sw          $a1, 0x6CCC($at)
    ctx->pc = 0x2d9068u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x8D6CCCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8D6CCCu, _value); } while (0);
    // 0x2d906c: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2d906cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2d9070: 0x8c256ccc  lw          $a1, 0x6CCC($at)
    ctx->pc = 0x2d9070u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x8D6CCCu));
    // 0x2d9074: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x2d9074u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x2d9078: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2d9078u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2d907c: 0xac236ccc  sw          $v1, 0x6CCC($at)
    ctx->pc = 0x2d907cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x8D6CCCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8D6CCCu, _value); } while (0);
    // 0x2d9080: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2d9080u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2d9084: 0x8c236ccc  lw          $v1, 0x6CCC($at)
    ctx->pc = 0x2d9084u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x8D6CCCu));
    // 0x2d9088: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2d9088u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2d908c: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2d908cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2d9090: 0xc0b4588  jal         func_2D1620
    ctx->pc = 0x2D9090u;
    SET_GPR_U32(ctx, 31, 0x2D9098u);
    ctx->pc = 0x2D9094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9090u;
    // 0x2d9094: 0xac226ccc  sw          $v0, 0x6CCC($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 27852), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D1620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D1620u, 0x2D9090u, 0x2D9098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9098u;
label_2d9098:
    // 0x2d9098: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2d9098u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2d909c: 0x2404fffd  addiu       $a0, $zero, -0x3
    ctx->pc = 0x2d909cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x2d90a0: 0x8c256ccc  lw          $a1, 0x6CCC($at)
    ctx->pc = 0x2d90a0u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x8D6CCCu));
    // 0x2d90a4: 0x2403d7fe  addiu       $v1, $zero, -0x2802
    ctx->pc = 0x2d90a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294957054));
    // 0x2d90a8: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x2d90a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x2d90ac: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2d90acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2d90b0: 0xac246ccc  sw          $a0, 0x6CCC($at)
    ctx->pc = 0x2d90b0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x8D6CCCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8D6CCCu, _value); } while (0);
    // 0x2d90b4: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2d90b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2d90b8: 0x8c246ccc  lw          $a0, 0x6CCC($at)
    ctx->pc = 0x2d90b8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x8D6CCCu));
    // 0x2d90bc: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2d90bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2d90c0: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2d90c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2d90c4: 0xac236ccc  sw          $v1, 0x6CCC($at)
    ctx->pc = 0x2d90c4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x8D6CCCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8D6CCCu, _value); } while (0);
label_2d90c8:
    // 0x2d90c8: 0x1200005f  beqz        $s0, . + 4 + (0x5F << 2)
    ctx->pc = 0x2D90C8u;
    {
        const bool branch_taken_0x2d90c8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D90CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D90C8u;
        // 0x2d90cc: 0x3c01008d  lui         $at, 0x8D (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d90c8) {
            ctx->pc = 0x2D9248u;
            goto label_2d9248;
        }
    }
    ctx->pc = 0x2D90D0u;
    // 0x2d90d0: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x2d90d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x2d90d4: 0x8c226eec  lw          $v0, 0x6EEC($at)
    ctx->pc = 0x2d90d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 28396)));
    // 0x2d90d8: 0x24846ee0  addiu       $a0, $a0, 0x6EE0
    ctx->pc = 0x2d90d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28384));
    // 0x2d90dc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2d90dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d90e0: 0x34422801  ori         $v0, $v0, 0x2801
    ctx->pc = 0x2d90e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)10241);
    // 0x2d90e4: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2d90e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2d90e8: 0xc0b63a4  jal         func_2D8E90
    ctx->pc = 0x2D90E8u;
    SET_GPR_U32(ctx, 31, 0x2D90F0u);
    ctx->pc = 0x2D90ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D90E8u;
    // 0x2d90ec: 0xac226eec  sw          $v0, 0x6EEC($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 28396), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8E90u, 0x2D90E8u, 0x2D90F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D90F0u;
label_2d90f0:
    // 0x2d90f0: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2d90f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2d90f4: 0xa4336f08  sh          $s3, 0x6F08($at)
    ctx->pc = 0x2d90f4u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 19)); ps2TraceGuestWrite(rdram, 0x8D6F08u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x8D6F08u, _value); } while (0);
    // 0x2d90f8: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2d90f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2d90fc: 0xa4326f0a  sh          $s2, 0x6F0A($at)
    ctx->pc = 0x2d90fcu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x8D6F0Au, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x8D6F0Au, _value); } while (0);
    // 0x2d9100: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2d9100u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2d9104: 0x90236f4e  lbu         $v1, 0x6F4E($at)
    ctx->pc = 0x2d9104u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x8D6F4Eu));
    // 0x2d9108: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2d9108u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2d910c: 0x34630003  ori         $v1, $v1, 0x3
    ctx->pc = 0x2d910cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3);
    // 0x2d9110: 0x8c226eec  lw          $v0, 0x6EEC($at)
    ctx->pc = 0x2d9110u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x8D6EECu));
    // 0x2d9114: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2d9114u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2d9118: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x2d9118u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x2d911c: 0xa0236f4e  sb          $v1, 0x6F4E($at)
    ctx->pc = 0x2d911cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x8D6F4Eu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x8D6F4Eu, _value); } while (0);
    // 0x2d9120: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2d9120u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2d9124: 0xac226eec  sw          $v0, 0x6EEC($at)
    ctx->pc = 0x2d9124u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x8D6EECu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8D6EECu, _value); } while (0);
    // 0x2d9128: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2d9128u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2d912c: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x2d912cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d9130: 0x8c226eec  lw          $v0, 0x6EEC($at)
    ctx->pc = 0x2d9130u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x8D6EECu));
    // 0x2d9134: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2d9134u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2d9138: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x2d9138u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x2d913c: 0xa0236ef6  sb          $v1, 0x6EF6($at)
    ctx->pc = 0x2d913cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x8D6EF6u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x8D6EF6u, _value); } while (0);
    // 0x2d9140: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2d9140u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2d9144: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x2D9144u;
    {
        const bool branch_taken_0x2d9144 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9144u;
        // 0x2d9148: 0xac226eec  sw          $v0, 0x6EEC($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 28396), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9144) {
            ctx->pc = 0x2D9170u;
            goto label_2d9170;
        }
    }
    ctx->pc = 0x2D914Cu;
    // 0x2d914c: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2d914cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2d9150: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x2d9150u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2d9154: 0x8c226eec  lw          $v0, 0x6EEC($at)
    ctx->pc = 0x2d9154u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x8D6EECu));
    // 0x2d9158: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2d9158u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2d915c: 0x34420200  ori         $v0, $v0, 0x200
    ctx->pc = 0x2d915cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)512);
    // 0x2d9160: 0xa0236ef7  sb          $v1, 0x6EF7($at)
    ctx->pc = 0x2d9160u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x8D6EF7u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x8D6EF7u, _value); } while (0);
    // 0x2d9164: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2d9164u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2d9168: 0xac226eec  sw          $v0, 0x6EEC($at)
    ctx->pc = 0x2d9168u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x8D6EECu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8D6EECu, _value); } while (0);
    // 0x2d916c: 0x0  nop
    ctx->pc = 0x2d916cu;
    // NOP
label_2d9170:
    // 0x2d9170: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2d9170u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2d9174: 0xa0206ef9  sb          $zero, 0x6EF9($at)
    ctx->pc = 0x2d9174u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x8D6EF9u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x8D6EF9u, _value); } while (0);
    // 0x2d9178: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x2d9178u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x2d917c: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2d917cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2d9180: 0x24846ee0  addiu       $a0, $a0, 0x6EE0
    ctx->pc = 0x2d9180u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28384));
    // 0x2d9184: 0x8c226eec  lw          $v0, 0x6EEC($at)
    ctx->pc = 0x2d9184u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x8D6EECu));
    // 0x2d9188: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x2d9188u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x2d918c: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2d918cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2d9190: 0xc0b4588  jal         func_2D1620
    ctx->pc = 0x2D9190u;
    SET_GPR_U32(ctx, 31, 0x2D9198u);
    ctx->pc = 0x2D9194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9190u;
    // 0x2d9194: 0xac226eec  sw          $v0, 0x6EEC($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 28396), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D1620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D1620u, 0x2D9190u, 0x2D9198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9198u;
label_2d9198:
    // 0x2d9198: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x2d9198u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x2d919c: 0xc0b45a0  jal         func_2D1680
    ctx->pc = 0x2D919Cu;
    SET_GPR_U32(ctx, 31, 0x2D91A4u);
    ctx->pc = 0x2D91A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D919Cu;
    // 0x2d91a0: 0x24846ee0  addiu       $a0, $a0, 0x6EE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D1680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D1680u, 0x2D919Cu, 0x2D91A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D91A4u;
label_2d91a4:
    // 0x2d91a4: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x2d91a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x2d91a8: 0xc0b5c48  jal         func_2D7120
    ctx->pc = 0x2D91A8u;
    SET_GPR_U32(ctx, 31, 0x2D91B0u);
    ctx->pc = 0x2D91ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D91A8u;
    // 0x2d91ac: 0x24846ee0  addiu       $a0, $a0, 0x6EE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7120u, 0x2D91A8u, 0x2D91B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D91B0u;
label_2d91b0:
    // 0x2d91b0: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2d91b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2d91b4: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x2d91b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x2d91b8: 0x8c266eec  lw          $a2, 0x6EEC($at)
    ctx->pc = 0x2d91b8u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x8D6EECu));
    // 0x2d91bc: 0x2405feff  addiu       $a1, $zero, -0x101
    ctx->pc = 0x2d91bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967039));
    // 0x2d91c0: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x2d91c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2d91c4: 0x2403fdff  addiu       $v1, $zero, -0x201
    ctx->pc = 0x2d91c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966783));
    // 0x2d91c8: 0x24846ee0  addiu       $a0, $a0, 0x6EE0
    ctx->pc = 0x2d91c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28384));
    // 0x2d91cc: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2d91ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2d91d0: 0xc52824  and         $a1, $a2, $a1
    ctx->pc = 0x2d91d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
    // 0x2d91d4: 0xa4226f08  sh          $v0, 0x6F08($at)
    ctx->pc = 0x2d91d4u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 28424), (uint16_t)GPR_U32(ctx, 2));
    // 0x2d91d8: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2d91d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2d91dc: 0xa4226f0a  sh          $v0, 0x6F0A($at)
    ctx->pc = 0x2d91dcu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x8D6F0Au, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x8D6F0Au, _value); } while (0);
    // 0x2d91e0: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2d91e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2d91e4: 0x2402ff7f  addiu       $v0, $zero, -0x81
    ctx->pc = 0x2d91e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x2d91e8: 0xac256eec  sw          $a1, 0x6EEC($at)
    ctx->pc = 0x2d91e8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x8D6EECu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8D6EECu, _value); } while (0);
    // 0x2d91ec: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2d91ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2d91f0: 0x8c256eec  lw          $a1, 0x6EEC($at)
    ctx->pc = 0x2d91f0u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x8D6EECu));
    // 0x2d91f4: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x2d91f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x2d91f8: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2d91f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2d91fc: 0xac236eec  sw          $v1, 0x6EEC($at)
    ctx->pc = 0x2d91fcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x8D6EECu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8D6EECu, _value); } while (0);
    // 0x2d9200: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2d9200u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2d9204: 0x8c236eec  lw          $v1, 0x6EEC($at)
    ctx->pc = 0x2d9204u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x8D6EECu));
    // 0x2d9208: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2d9208u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2d920c: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2d920cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2d9210: 0xc0b4588  jal         func_2D1620
    ctx->pc = 0x2D9210u;
    SET_GPR_U32(ctx, 31, 0x2D9218u);
    ctx->pc = 0x2D9214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9210u;
    // 0x2d9214: 0xac226eec  sw          $v0, 0x6EEC($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 28396), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D1620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D1620u, 0x2D9210u, 0x2D9218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9218u;
label_2d9218:
    // 0x2d9218: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2d9218u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2d921c: 0x2404fffd  addiu       $a0, $zero, -0x3
    ctx->pc = 0x2d921cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x2d9220: 0x8c256eec  lw          $a1, 0x6EEC($at)
    ctx->pc = 0x2d9220u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x8D6EECu));
    // 0x2d9224: 0x2403d7fe  addiu       $v1, $zero, -0x2802
    ctx->pc = 0x2d9224u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294957054));
    // 0x2d9228: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x2d9228u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x2d922c: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2d922cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2d9230: 0xac246eec  sw          $a0, 0x6EEC($at)
    ctx->pc = 0x2d9230u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x8D6EECu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8D6EECu, _value); } while (0);
    // 0x2d9234: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2d9234u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2d9238: 0x8c246eec  lw          $a0, 0x6EEC($at)
    ctx->pc = 0x2d9238u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x8D6EECu));
    // 0x2d923c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2d923cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2d9240: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2d9240u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2d9244: 0xac236eec  sw          $v1, 0x6EEC($at)
    ctx->pc = 0x2d9244u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x8D6EECu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8D6EECu, _value); } while (0);
label_2d9248:
    // 0x2d9248: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2d9248u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d924c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2d924cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d9250: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2d9250u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d9254: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d9254u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d9258: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d9258u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d925c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D925Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D9260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D925Cu;
        // 0x2d9260: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D925Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D9264u;
}
