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

// Function: sub_00328ED0
// Address: 0x328ed0 - 0x329030
void sub_00328ED0_0x328ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00328ED0_0x328ed0");
#endif

    switch (ctx->pc) {
        case 0x328f10u: goto label_328f10;
        case 0x328f20u: goto label_328f20;
        case 0x328f3cu: goto label_328f3c;
        case 0x328f60u: goto label_328f60;
        case 0x328fb0u: goto label_328fb0;
        case 0x328fc0u: goto label_328fc0;
        case 0x328fd8u: goto label_328fd8;
        case 0x328fe8u: goto label_328fe8;
        case 0x328ff8u: goto label_328ff8;
        case 0x329008u: goto label_329008;
        case 0x329020u: goto label_329020;
        default: break;
    }

    ctx->pc = 0x328ed0u;

    // 0x328ed0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x328ed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x328ed4: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x328ed4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x328ed8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x328ed8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x328edc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x328edcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x328ee0: 0x9023ff2c  lbu         $v1, -0xD4($at)
    ctx->pc = 0x328ee0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x92FF2Cu));
    // 0x328ee4: 0x28630003  slti        $v1, $v1, 0x3
    ctx->pc = 0x328ee4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x328ee8: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x328ee8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x328eec: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x328eecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x328ef0: 0x1060004b  beqz        $v1, . + 4 + (0x4B << 2)
    ctx->pc = 0x328EF0u;
    {
        const bool branch_taken_0x328ef0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x328EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328EF0u;
        // 0x328ef4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328ef0) {
            ctx->pc = 0x329020u;
            goto label_329020;
        }
    }
    ctx->pc = 0x328EF8u;
    // 0x328ef8: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x328ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x328efc: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x328EFCu;
    {
        const bool branch_taken_0x328efc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x328F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328EFCu;
        // 0x328f00: 0x3c040082  lui         $a0, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328efc) {
            ctx->pc = 0x328F28u;
            goto label_328f28;
        }
    }
    ctx->pc = 0x328F04u;
    // 0x328f04: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x328f04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x328f08: 0xc04ca38  jal         func_1328E0
    ctx->pc = 0x328F08u;
    SET_GPR_U32(ctx, 31, 0x328F10u);
    ctx->pc = 0x328F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328F08u;
    // 0x328f0c: 0x2484fe40  addiu       $a0, $a0, -0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1328E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1328E0u, 0x328F08u, 0x328F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328F10u;
label_328f10:
    // 0x328f10: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x328f10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x328f14: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x328f14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x328f18: 0xc04ca14  jal         func_132850
    ctx->pc = 0x328F18u;
    SET_GPR_U32(ctx, 31, 0x328F20u);
    ctx->pc = 0x328F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328F18u;
    // 0x328f1c: 0x2484fe40  addiu       $a0, $a0, -0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132850u, 0x328F18u, 0x328F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328F20u;
label_328f20:
    // 0x328f20: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x328f20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x328f24: 0x0  nop
    ctx->pc = 0x328f24u;
    // NOP
label_328f28:
    // 0x328f28: 0x9202001c  lbu         $v0, 0x1C($s0)
    ctx->pc = 0x328f28u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x328f2c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x328F2Cu;
    {
        const bool branch_taken_0x328f2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x328F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328F2Cu;
        // 0x328f30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328f2c) {
            ctx->pc = 0x328F48u;
            goto label_328f48;
        }
    }
    ctx->pc = 0x328F34u;
    // 0x328f34: 0xc0ca308  jal         func_328C20
    ctx->pc = 0x328F34u;
    SET_GPR_U32(ctx, 31, 0x328F3Cu);
    ctx->pc = 0x328C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x328C20u, 0x328F34u, 0x328F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328F3Cu;
label_328f3c:
    // 0x328f3c: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x328F3Cu;
    {
        const bool branch_taken_0x328f3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x328f3c) {
            ctx->pc = 0x329020u;
            goto label_329020;
        }
    }
    ctx->pc = 0x328F44u;
    // 0x328f44: 0x0  nop
    ctx->pc = 0x328f44u;
    // NOP
label_328f48:
    // 0x328f48: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x328f48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x328f4c: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x328f4cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x328f50: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x328f50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x328f54: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x328f54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328f58: 0xc0d9040  jal         func_364100
    ctx->pc = 0x328F58u;
    SET_GPR_U32(ctx, 31, 0x328F60u);
    ctx->pc = 0x328F5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328F58u;
    // 0x328f5c: 0xac200e7c  sw          $zero, 0xE7C($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 3708), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x364100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x364100u, 0x328F58u, 0x328F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328F60u;
label_328f60:
    // 0x328f60: 0x8204002a  lb          $a0, 0x2A($s0)
    ctx->pc = 0x328f60u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 42)));
    // 0x328f64: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x328f64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x328f68: 0x10830029  beq         $a0, $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x328F68u;
    {
        const bool branch_taken_0x328f68 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x328F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328F68u;
        // 0x328f6c: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328f68) {
            ctx->pc = 0x329010u;
            goto label_329010;
        }
    }
    ctx->pc = 0x328F70u;
    // 0x328f70: 0x10830023  beq         $a0, $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x328F70u;
    {
        const bool branch_taken_0x328f70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x328f70) {
            ctx->pc = 0x329000u;
            goto label_329000;
        }
    }
    ctx->pc = 0x328F78u;
    // 0x328f78: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x328f78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x328f7c: 0x1083001c  beq         $a0, $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x328F7Cu;
    {
        const bool branch_taken_0x328f7c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x328F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328F7Cu;
        // 0x328f80: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328f7c) {
            ctx->pc = 0x328FF0u;
            goto label_328ff0;
        }
    }
    ctx->pc = 0x328F84u;
    // 0x328f84: 0x10830016  beq         $a0, $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x328F84u;
    {
        const bool branch_taken_0x328f84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x328f84) {
            ctx->pc = 0x328FE0u;
            goto label_328fe0;
        }
    }
    ctx->pc = 0x328F8Cu;
    // 0x328f8c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x328F8Cu;
    {
        const bool branch_taken_0x328f8c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x328f8c) {
            ctx->pc = 0x328FA0u;
            goto label_328fa0;
        }
    }
    ctx->pc = 0x328F94u;
    // 0x328f94: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x328F94u;
    {
        const bool branch_taken_0x328f94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x328f94) {
            ctx->pc = 0x329020u;
            goto label_329020;
        }
    }
    ctx->pc = 0x328F9Cu;
    // 0x328f9c: 0x0  nop
    ctx->pc = 0x328f9cu;
    // NOP
label_328fa0:
    // 0x328fa0: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x328fa0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x328fa4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x328fa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328fa8: 0xc0e1314  jal         func_384C50
    ctx->pc = 0x328FA8u;
    SET_GPR_U32(ctx, 31, 0x328FB0u);
    ctx->pc = 0x328FACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328FA8u;
    // 0x328fac: 0xa0200e70  sb          $zero, 0xE70($at) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 1), 3696), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x384C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x384C50u, 0x328FA8u, 0x328FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328FB0u;
label_328fb0:
    // 0x328fb0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x328FB0u;
    {
        const bool branch_taken_0x328fb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x328fb0) {
            ctx->pc = 0x328FC8u;
            goto label_328fc8;
        }
    }
    ctx->pc = 0x328FB8u;
    // 0x328fb8: 0xc0b34a0  jal         func_2CD280
    ctx->pc = 0x328FB8u;
    SET_GPR_U32(ctx, 31, 0x328FC0u);
    ctx->pc = 0x328FBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328FB8u;
    // 0x328fbc: 0x9204002f  lbu         $a0, 0x2F($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 47)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CD280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CD280u, 0x328FB8u, 0x328FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328FC0u;
label_328fc0:
    // 0x328fc0: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x328FC0u;
    {
        const bool branch_taken_0x328fc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x328fc0) {
            ctx->pc = 0x329020u;
            goto label_329020;
        }
    }
    ctx->pc = 0x328FC8u;
label_328fc8:
    // 0x328fc8: 0x8202002f  lb          $v0, 0x2F($s0)
    ctx->pc = 0x328fc8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 47)));
    // 0x328fcc: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x328fccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x328fd0: 0xc0b34a0  jal         func_2CD280
    ctx->pc = 0x328FD0u;
    SET_GPR_U32(ctx, 31, 0x328FD8u);
    ctx->pc = 0x328FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328FD0u;
    // 0x328fd4: 0x304400ff  andi        $a0, $v0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CD280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CD280u, 0x328FD0u, 0x328FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328FD8u;
label_328fd8:
    // 0x328fd8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x328FD8u;
    {
        const bool branch_taken_0x328fd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x328fd8) {
            ctx->pc = 0x329020u;
            goto label_329020;
        }
    }
    ctx->pc = 0x328FE0u;
label_328fe0:
    // 0x328fe0: 0xc0ca40c  jal         func_329030
    ctx->pc = 0x328FE0u;
    SET_GPR_U32(ctx, 31, 0x328FE8u);
    ctx->pc = 0x328FE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328FE0u;
    // 0x328fe4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x329030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329030u, 0x328FE0u, 0x328FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328FE8u;
label_328fe8:
    // 0x328fe8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x328FE8u;
    {
        const bool branch_taken_0x328fe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x328fe8) {
            ctx->pc = 0x329020u;
            goto label_329020;
        }
    }
    ctx->pc = 0x328FF0u;
label_328ff0:
    // 0x328ff0: 0xc0ca440  jal         func_329100
    ctx->pc = 0x328FF0u;
    SET_GPR_U32(ctx, 31, 0x328FF8u);
    ctx->pc = 0x328FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328FF0u;
    // 0x328ff4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x329100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329100u, 0x328FF0u, 0x328FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328FF8u;
label_328ff8:
    // 0x328ff8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x328FF8u;
    {
        const bool branch_taken_0x328ff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x328ff8) {
            ctx->pc = 0x329020u;
            goto label_329020;
        }
    }
    ctx->pc = 0x329000u;
label_329000:
    // 0x329000: 0xc0ca4a4  jal         func_329290
    ctx->pc = 0x329000u;
    SET_GPR_U32(ctx, 31, 0x329008u);
    ctx->pc = 0x329004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329000u;
    // 0x329004: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x329290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329290u, 0x329000u, 0x329008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329008u;
label_329008:
    // 0x329008: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x329008u;
    {
        const bool branch_taken_0x329008 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x329008) {
            ctx->pc = 0x329020u;
            goto label_329020;
        }
    }
    ctx->pc = 0x329010u;
label_329010:
    // 0x329010: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x329010u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x329014: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x329014u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x329018: 0xc0d9040  jal         func_364100
    ctx->pc = 0x329018u;
    SET_GPR_U32(ctx, 31, 0x329020u);
    ctx->pc = 0x32901Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329018u;
    // 0x32901c: 0xa0200e70  sb          $zero, 0xE70($at) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 1), 3696), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x364100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x364100u, 0x329018u, 0x329020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329020u;
label_329020:
    // 0x329020: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x329020u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x329024: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x329024u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x329028: 0x3e00008  jr          $ra
    ctx->pc = 0x329028u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32902Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329028u;
        // 0x32902c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x329028u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x329030u;
}
