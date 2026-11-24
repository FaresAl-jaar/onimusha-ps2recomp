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

// Function: sub_00388E80
// Address: 0x388e80 - 0x3890bc
void sub_00388E80_0x388e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00388E80_0x388e80");
#endif

    switch (ctx->pc) {
        case 0x388e98u: goto label_388e98;
        case 0x388eb0u: goto label_388eb0;
        case 0x388f5cu: goto label_388f5c;
        case 0x388f68u: goto label_388f68;
        case 0x388f74u: goto label_388f74;
        case 0x388f94u: goto label_388f94;
        case 0x388fa0u: goto label_388fa0;
        case 0x388facu: goto label_388fac;
        case 0x388fd4u: goto label_388fd4;
        case 0x388ff0u: goto label_388ff0;
        case 0x389014u: goto label_389014;
        case 0x389020u: goto label_389020;
        case 0x38902cu: goto label_38902c;
        case 0x389050u: goto label_389050;
        case 0x389068u: goto label_389068;
        case 0x389078u: goto label_389078;
        case 0x389088u: goto label_389088;
        case 0x3890a8u: goto label_3890a8;
        default: break;
    }

    ctx->pc = 0x388e80u;

    // 0x388e80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x388e80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x388e84: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x388e84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x388e88: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x388e88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x388e8c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x388e8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x388e90: 0xc0e22e4  jal         func_388B90
    ctx->pc = 0x388E90u;
    SET_GPR_U32(ctx, 31, 0x388E98u);
    ctx->pc = 0x388E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x388E90u;
    // 0x388e94: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x388B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x388B90u, 0x388E90u, 0x388E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x388E98u;
label_388e98:
    // 0x388e98: 0x8e0206ac  lw          $v0, 0x6AC($s0)
    ctx->pc = 0x388e98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1708)));
    // 0x388e9c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x388e9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x388ea0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x388EA0u;
    {
        const bool branch_taken_0x388ea0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x388EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388EA0u;
        // 0x388ea4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388ea0) {
            ctx->pc = 0x388EB0u;
            goto label_388eb0;
        }
    }
    ctx->pc = 0x388EA8u;
    // 0x388ea8: 0xc0e2308  jal         func_388C20
    ctx->pc = 0x388EA8u;
    SET_GPR_U32(ctx, 31, 0x388EB0u);
    ctx->pc = 0x388C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x388C20u, 0x388EA8u, 0x388EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x388EB0u;
label_388eb0:
    // 0x388eb0: 0x9203065c  lbu         $v1, 0x65C($s0)
    ctx->pc = 0x388eb0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1628)));
    // 0x388eb4: 0x2402002e  addiu       $v0, $zero, 0x2E
    ctx->pc = 0x388eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x388eb8: 0x10620075  beq         $v1, $v0, . + 4 + (0x75 << 2)
    ctx->pc = 0x388EB8u;
    {
        const bool branch_taken_0x388eb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x388EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388EB8u;
        // 0x388ebc: 0x24020022  addiu       $v0, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388eb8) {
            ctx->pc = 0x389090u;
            goto label_389090;
        }
    }
    ctx->pc = 0x388EC0u;
    // 0x388ec0: 0x10620073  beq         $v1, $v0, . + 4 + (0x73 << 2)
    ctx->pc = 0x388EC0u;
    {
        const bool branch_taken_0x388ec0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x388ec0) {
            ctx->pc = 0x389090u;
            goto label_389090;
        }
    }
    ctx->pc = 0x388EC8u;
    // 0x388ec8: 0x2402002b  addiu       $v0, $zero, 0x2B
    ctx->pc = 0x388ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x388ecc: 0x1062006c  beq         $v1, $v0, . + 4 + (0x6C << 2)
    ctx->pc = 0x388ECCu;
    {
        const bool branch_taken_0x388ecc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x388ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388ECCu;
        // 0x388ed0: 0x2402002a  addiu       $v0, $zero, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388ecc) {
            ctx->pc = 0x389080u;
            goto label_389080;
        }
    }
    ctx->pc = 0x388ED4u;
    // 0x388ed4: 0x10620066  beq         $v1, $v0, . + 4 + (0x66 << 2)
    ctx->pc = 0x388ED4u;
    {
        const bool branch_taken_0x388ed4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x388ed4) {
            ctx->pc = 0x389070u;
            goto label_389070;
        }
    }
    ctx->pc = 0x388EDCu;
    // 0x388edc: 0x24020029  addiu       $v0, $zero, 0x29
    ctx->pc = 0x388edcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x388ee0: 0x1062005d  beq         $v1, $v0, . + 4 + (0x5D << 2)
    ctx->pc = 0x388EE0u;
    {
        const bool branch_taken_0x388ee0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x388EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388EE0u;
        // 0x388ee4: 0x24020028  addiu       $v0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388ee0) {
            ctx->pc = 0x389058u;
            goto label_389058;
        }
    }
    ctx->pc = 0x388EE8u;
    // 0x388ee8: 0x10620055  beq         $v1, $v0, . + 4 + (0x55 << 2)
    ctx->pc = 0x388EE8u;
    {
        const bool branch_taken_0x388ee8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x388EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388EE8u;
        // 0x388eec: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388ee8) {
            ctx->pc = 0x389040u;
            goto label_389040;
        }
    }
    ctx->pc = 0x388EF0u;
    // 0x388ef0: 0x10640003  beq         $v1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x388EF0u;
    {
        const bool branch_taken_0x388ef0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x388ef0) {
            ctx->pc = 0x388F00u;
            goto label_388f00;
        }
    }
    ctx->pc = 0x388EF8u;
    // 0x388ef8: 0x10000069  b           . + 4 + (0x69 << 2)
    ctx->pc = 0x388EF8u;
    {
        const bool branch_taken_0x388ef8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x388ef8) {
            ctx->pc = 0x3890A0u;
            goto label_3890a0;
        }
    }
    ctx->pc = 0x388F00u;
label_388f00:
    // 0x388f00: 0x92022b62  lbu         $v0, 0x2B62($s0)
    ctx->pc = 0x388f00u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11106)));
    // 0x388f04: 0x14400066  bnez        $v0, . + 4 + (0x66 << 2)
    ctx->pc = 0x388F04u;
    {
        const bool branch_taken_0x388f04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x388f04) {
            ctx->pc = 0x3890A0u;
            goto label_3890a0;
        }
    }
    ctx->pc = 0x388F0Cu;
    // 0x388f0c: 0x92032b6e  lbu         $v1, 0x2B6E($s0)
    ctx->pc = 0x388f0cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11118)));
    // 0x388f10: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x388f10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x388f14: 0x1062003a  beq         $v1, $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x388F14u;
    {
        const bool branch_taken_0x388f14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x388F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388F14u;
        // 0x388f18: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388f14) {
            ctx->pc = 0x389000u;
            goto label_389000;
        }
    }
    ctx->pc = 0x388F1Cu;
    // 0x388f1c: 0x10650018  beq         $v1, $a1, . + 4 + (0x18 << 2)
    ctx->pc = 0x388F1Cu;
    {
        const bool branch_taken_0x388f1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x388F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388F1Cu;
        // 0x388f20: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388f1c) {
            ctx->pc = 0x388F80u;
            goto label_388f80;
        }
    }
    ctx->pc = 0x388F24u;
    // 0x388f24: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x388F24u;
    {
        const bool branch_taken_0x388f24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x388f24) {
            ctx->pc = 0x388F48u;
            goto label_388f48;
        }
    }
    ctx->pc = 0x388F2Cu;
    // 0x388f2c: 0x1064005c  beq         $v1, $a0, . + 4 + (0x5C << 2)
    ctx->pc = 0x388F2Cu;
    {
        const bool branch_taken_0x388f2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x388f2c) {
            ctx->pc = 0x3890A0u;
            goto label_3890a0;
        }
    }
    ctx->pc = 0x388F34u;
    // 0x388f34: 0x1060005a  beqz        $v1, . + 4 + (0x5A << 2)
    ctx->pc = 0x388F34u;
    {
        const bool branch_taken_0x388f34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x388f34) {
            ctx->pc = 0x3890A0u;
            goto label_3890a0;
        }
    }
    ctx->pc = 0x388F3Cu;
    // 0x388f3c: 0x10000058  b           . + 4 + (0x58 << 2)
    ctx->pc = 0x388F3Cu;
    {
        const bool branch_taken_0x388f3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x388f3c) {
            ctx->pc = 0x3890A0u;
            goto label_3890a0;
        }
    }
    ctx->pc = 0x388F44u;
    // 0x388f44: 0x0  nop
    ctx->pc = 0x388f44u;
    // NOP
label_388f48:
    // 0x388f48: 0x92022b6f  lbu         $v0, 0x2B6F($s0)
    ctx->pc = 0x388f48u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11119)));
    // 0x388f4c: 0x14400054  bnez        $v0, . + 4 + (0x54 << 2)
    ctx->pc = 0x388F4Cu;
    {
        const bool branch_taken_0x388f4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x388F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388F4Cu;
        // 0x388f50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388f4c) {
            ctx->pc = 0x3890A0u;
            goto label_3890a0;
        }
    }
    ctx->pc = 0x388F54u;
    // 0x388f54: 0xc0bfae0  jal         func_2FEB80
    ctx->pc = 0x388F54u;
    SET_GPR_U32(ctx, 31, 0x388F5Cu);
    ctx->pc = 0x2FEB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FEB80u, 0x388F54u, 0x388F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x388F5Cu;
label_388f5c:
    // 0x388f5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x388f5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x388f60: 0xc0bfae0  jal         func_2FEB80
    ctx->pc = 0x388F60u;
    SET_GPR_U32(ctx, 31, 0x388F68u);
    ctx->pc = 0x388F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x388F60u;
    // 0x388f64: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FEB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FEB80u, 0x388F60u, 0x388F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x388F68u;
label_388f68:
    // 0x388f68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x388f68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x388f6c: 0xc0e1d20  jal         func_387480
    ctx->pc = 0x388F6Cu;
    SET_GPR_U32(ctx, 31, 0x388F74u);
    ctx->pc = 0x388F70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x388F6Cu;
    // 0x388f70: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x387480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x387480u, 0x388F6Cu, 0x388F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x388F74u;
label_388f74:
    // 0x388f74: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x388f74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x388f78: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x388F78u;
    {
        const bool branch_taken_0x388f78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x388F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388F78u;
        // 0x388f7c: 0xa2022b6f  sb          $v0, 0x2B6F($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 11119), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388f78) {
            ctx->pc = 0x3890A0u;
            goto label_3890a0;
        }
    }
    ctx->pc = 0x388F80u;
label_388f80:
    // 0x388f80: 0x92022b6f  lbu         $v0, 0x2B6F($s0)
    ctx->pc = 0x388f80u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11119)));
    // 0x388f84: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x388F84u;
    {
        const bool branch_taken_0x388f84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x388F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388F84u;
        // 0x388f88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388f84) {
            ctx->pc = 0x388FB8u;
            goto label_388fb8;
        }
    }
    ctx->pc = 0x388F8Cu;
    // 0x388f8c: 0xc0bfae0  jal         func_2FEB80
    ctx->pc = 0x388F8Cu;
    SET_GPR_U32(ctx, 31, 0x388F94u);
    ctx->pc = 0x2FEB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FEB80u, 0x388F8Cu, 0x388F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x388F94u;
label_388f94:
    // 0x388f94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x388f94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x388f98: 0xc0bfae0  jal         func_2FEB80
    ctx->pc = 0x388F98u;
    SET_GPR_U32(ctx, 31, 0x388FA0u);
    ctx->pc = 0x388F9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x388F98u;
    // 0x388f9c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FEB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FEB80u, 0x388F98u, 0x388FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x388FA0u;
label_388fa0:
    // 0x388fa0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x388fa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x388fa4: 0xc0e1d20  jal         func_387480
    ctx->pc = 0x388FA4u;
    SET_GPR_U32(ctx, 31, 0x388FACu);
    ctx->pc = 0x388FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x388FA4u;
    // 0x388fa8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x387480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x387480u, 0x388FA4u, 0x388FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x388FACu;
label_388fac:
    // 0x388fac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x388facu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x388fb0: 0xa2022b6f  sb          $v0, 0x2B6F($s0)
    ctx->pc = 0x388fb0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11119), (uint8_t)GPR_U32(ctx, 2));
    // 0x388fb4: 0x0  nop
    ctx->pc = 0x388fb4u;
    // NOP
label_388fb8:
    // 0x388fb8: 0x92022b71  lbu         $v0, 0x2B71($s0)
    ctx->pc = 0x388fb8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11121)));
    // 0x388fbc: 0x14400038  bnez        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x388FBCu;
    {
        const bool branch_taken_0x388fbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x388fbc) {
            ctx->pc = 0x3890A0u;
            goto label_3890a0;
        }
    }
    ctx->pc = 0x388FC4u;
    // 0x388fc4: 0x8e0229c0  lw          $v0, 0x29C0($s0)
    ctx->pc = 0x388fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10688)));
    // 0x388fc8: 0x94510000  lhu         $s1, 0x0($v0)
    ctx->pc = 0x388fc8u;
    SET_GPR_ZE32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x388fcc: 0xc0a6998  jal         func_29A660
    ctx->pc = 0x388FCCu;
    SET_GPR_U32(ctx, 31, 0x388FD4u);
    ctx->pc = 0x388FD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x388FCCu;
    // 0x388fd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A660u, 0x388FCCu, 0x388FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x388FD4u;
label_388fd4:
    // 0x388fd4: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x388fd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x388fd8: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x388fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x388fdc: 0x51082a  slt         $at, $v0, $s1
    ctx->pc = 0x388fdcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x388fe0: 0x1420002f  bnez        $at, . + 4 + (0x2F << 2)
    ctx->pc = 0x388FE0u;
    {
        const bool branch_taken_0x388fe0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x388FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388FE0u;
        // 0x388fe4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388fe0) {
            ctx->pc = 0x3890A0u;
            goto label_3890a0;
        }
    }
    ctx->pc = 0x388FE8u;
    // 0x388fe8: 0xc0e1d20  jal         func_387480
    ctx->pc = 0x388FE8u;
    SET_GPR_U32(ctx, 31, 0x388FF0u);
    ctx->pc = 0x388FECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x388FE8u;
    // 0x388fec: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x387480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x387480u, 0x388FE8u, 0x388FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x388FF0u;
label_388ff0:
    // 0x388ff0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x388ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x388ff4: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x388FF4u;
    {
        const bool branch_taken_0x388ff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x388FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388FF4u;
        // 0x388ff8: 0xa2022b71  sb          $v0, 0x2B71($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 11121), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388ff4) {
            ctx->pc = 0x3890A0u;
            goto label_3890a0;
        }
    }
    ctx->pc = 0x388FFCu;
    // 0x388ffc: 0x0  nop
    ctx->pc = 0x388ffcu;
    // NOP
label_389000:
    // 0x389000: 0x92022b6f  lbu         $v0, 0x2B6F($s0)
    ctx->pc = 0x389000u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11119)));
    // 0x389004: 0x14400026  bnez        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x389004u;
    {
        const bool branch_taken_0x389004 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x389008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389004u;
        // 0x389008: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x389004) {
            ctx->pc = 0x3890A0u;
            goto label_3890a0;
        }
    }
    ctx->pc = 0x38900Cu;
    // 0x38900c: 0xc0bfae0  jal         func_2FEB80
    ctx->pc = 0x38900Cu;
    SET_GPR_U32(ctx, 31, 0x389014u);
    ctx->pc = 0x389010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38900Cu;
    // 0x389010: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FEB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FEB80u, 0x38900Cu, 0x389014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x389014u;
label_389014:
    // 0x389014: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x389014u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x389018: 0xc0bfae0  jal         func_2FEB80
    ctx->pc = 0x389018u;
    SET_GPR_U32(ctx, 31, 0x389020u);
    ctx->pc = 0x38901Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x389018u;
    // 0x38901c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FEB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FEB80u, 0x389018u, 0x389020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x389020u;
label_389020:
    // 0x389020: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x389020u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x389024: 0xc0e1d20  jal         func_387480
    ctx->pc = 0x389024u;
    SET_GPR_U32(ctx, 31, 0x38902Cu);
    ctx->pc = 0x389028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x389024u;
    // 0x389028: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x387480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x387480u, 0x389024u, 0x38902Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38902Cu;
label_38902c:
    // 0x38902c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x38902cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x389030: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x389030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x389034: 0xa6030570  sh          $v1, 0x570($s0)
    ctx->pc = 0x389034u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1392), (uint16_t)GPR_U32(ctx, 3));
    // 0x389038: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x389038u;
    {
        const bool branch_taken_0x389038 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38903Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389038u;
        // 0x38903c: 0xa2022b6f  sb          $v0, 0x2B6F($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 11119), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x389038) {
            ctx->pc = 0x3890A0u;
            goto label_3890a0;
        }
    }
    ctx->pc = 0x389040u;
label_389040:
    // 0x389040: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x389040u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x389044: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x389044u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x389048: 0xc0e1f70  jal         func_387DC0
    ctx->pc = 0x389048u;
    SET_GPR_U32(ctx, 31, 0x389050u);
    ctx->pc = 0x38904Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x389048u;
    // 0x38904c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x387DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x387DC0u, 0x389048u, 0x389050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x389050u;
label_389050:
    // 0x389050: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x389050u;
    {
        const bool branch_taken_0x389050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x389050) {
            ctx->pc = 0x3890A0u;
            goto label_3890a0;
        }
    }
    ctx->pc = 0x389058u;
label_389058:
    // 0x389058: 0x3c02442f  lui         $v0, 0x442F
    ctx->pc = 0x389058u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17455 << 16));
    // 0x38905c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x38905cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x389060: 0xc0e1f70  jal         func_387DC0
    ctx->pc = 0x389060u;
    SET_GPR_U32(ctx, 31, 0x389068u);
    ctx->pc = 0x389064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x389060u;
    // 0x389064: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x387DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x387DC0u, 0x389060u, 0x389068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x389068u;
label_389068:
    // 0x389068: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x389068u;
    {
        const bool branch_taken_0x389068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x389068) {
            ctx->pc = 0x3890A0u;
            goto label_3890a0;
        }
    }
    ctx->pc = 0x389070u;
label_389070:
    // 0x389070: 0xc0e207c  jal         func_3881F0
    ctx->pc = 0x389070u;
    SET_GPR_U32(ctx, 31, 0x389078u);
    ctx->pc = 0x389074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x389070u;
    // 0x389074: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3881F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3881F0u, 0x389070u, 0x389078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x389078u;
label_389078:
    // 0x389078: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x389078u;
    {
        const bool branch_taken_0x389078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x389078) {
            ctx->pc = 0x3890A0u;
            goto label_3890a0;
        }
    }
    ctx->pc = 0x389080u;
label_389080:
    // 0x389080: 0xc0e2164  jal         func_388590
    ctx->pc = 0x389080u;
    SET_GPR_U32(ctx, 31, 0x389088u);
    ctx->pc = 0x389084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x389080u;
    // 0x389084: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x388590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x388590u, 0x389080u, 0x389088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x389088u;
label_389088:
    // 0x389088: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x389088u;
    {
        const bool branch_taken_0x389088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x389088) {
            ctx->pc = 0x3890A0u;
            goto label_3890a0;
        }
    }
    ctx->pc = 0x389090u;
label_389090:
    // 0x389090: 0x8e020148  lw          $v0, 0x148($s0)
    ctx->pc = 0x389090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x389094: 0x34420200  ori         $v0, $v0, 0x200
    ctx->pc = 0x389094u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)512);
    // 0x389098: 0xae020148  sw          $v0, 0x148($s0)
    ctx->pc = 0x389098u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 328), GPR_U32(ctx, 2));
    // 0x38909c: 0x0  nop
    ctx->pc = 0x38909cu;
    // NOP
label_3890a0:
    // 0x3890a0: 0xc0a4d3c  jal         func_2934F0
    ctx->pc = 0x3890A0u;
    SET_GPR_U32(ctx, 31, 0x3890A8u);
    ctx->pc = 0x3890A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3890A0u;
    // 0x3890a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2934F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2934F0u, 0x3890A0u, 0x3890A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3890A8u;
label_3890a8:
    // 0x3890a8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3890a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3890ac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3890acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3890b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3890b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3890b4: 0x3e00008  jr          $ra
    ctx->pc = 0x3890B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3890B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3890B4u;
        // 0x3890b8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3890B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3890BCu;
}
