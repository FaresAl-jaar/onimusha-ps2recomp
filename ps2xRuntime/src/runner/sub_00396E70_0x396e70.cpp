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

// Function: sub_00396E70
// Address: 0x396e70 - 0x396f90
void sub_00396E70_0x396e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00396E70_0x396e70");
#endif

    switch (ctx->pc) {
        case 0x396e70u: goto label_396e70;
        case 0x396e74u: goto label_396e74;
        case 0x396e78u: goto label_396e78;
        case 0x396e7cu: goto label_396e7c;
        case 0x396e80u: goto label_396e80;
        case 0x396e84u: goto label_396e84;
        case 0x396e88u: goto label_396e88;
        case 0x396e8cu: goto label_396e8c;
        case 0x396e90u: goto label_396e90;
        case 0x396e94u: goto label_396e94;
        case 0x396e98u: goto label_396e98;
        case 0x396e9cu: goto label_396e9c;
        case 0x396ea0u: goto label_396ea0;
        case 0x396ea4u: goto label_396ea4;
        case 0x396ea8u: goto label_396ea8;
        case 0x396eacu: goto label_396eac;
        case 0x396eb0u: goto label_396eb0;
        case 0x396eb4u: goto label_396eb4;
        case 0x396eb8u: goto label_396eb8;
        case 0x396ebcu: goto label_396ebc;
        case 0x396ec0u: goto label_396ec0;
        case 0x396ec4u: goto label_396ec4;
        case 0x396ec8u: goto label_396ec8;
        case 0x396eccu: goto label_396ecc;
        case 0x396ed0u: goto label_396ed0;
        case 0x396ed4u: goto label_396ed4;
        case 0x396ed8u: goto label_396ed8;
        case 0x396edcu: goto label_396edc;
        case 0x396ee0u: goto label_396ee0;
        case 0x396ee4u: goto label_396ee4;
        case 0x396ee8u: goto label_396ee8;
        case 0x396eecu: goto label_396eec;
        case 0x396ef0u: goto label_396ef0;
        case 0x396ef4u: goto label_396ef4;
        case 0x396ef8u: goto label_396ef8;
        case 0x396efcu: goto label_396efc;
        case 0x396f00u: goto label_396f00;
        case 0x396f04u: goto label_396f04;
        case 0x396f08u: goto label_396f08;
        case 0x396f0cu: goto label_396f0c;
        case 0x396f10u: goto label_396f10;
        case 0x396f14u: goto label_396f14;
        case 0x396f18u: goto label_396f18;
        case 0x396f1cu: goto label_396f1c;
        case 0x396f20u: goto label_396f20;
        case 0x396f24u: goto label_396f24;
        case 0x396f28u: goto label_396f28;
        case 0x396f2cu: goto label_396f2c;
        case 0x396f30u: goto label_396f30;
        case 0x396f34u: goto label_396f34;
        case 0x396f38u: goto label_396f38;
        case 0x396f3cu: goto label_396f3c;
        case 0x396f40u: goto label_396f40;
        case 0x396f44u: goto label_396f44;
        case 0x396f48u: goto label_396f48;
        case 0x396f4cu: goto label_396f4c;
        case 0x396f50u: goto label_396f50;
        case 0x396f54u: goto label_396f54;
        case 0x396f58u: goto label_396f58;
        case 0x396f5cu: goto label_396f5c;
        case 0x396f60u: goto label_396f60;
        case 0x396f64u: goto label_396f64;
        case 0x396f68u: goto label_396f68;
        case 0x396f6cu: goto label_396f6c;
        case 0x396f70u: goto label_396f70;
        case 0x396f74u: goto label_396f74;
        case 0x396f78u: goto label_396f78;
        case 0x396f7cu: goto label_396f7c;
        case 0x396f80u: goto label_396f80;
        case 0x396f84u: goto label_396f84;
        case 0x396f88u: goto label_396f88;
        case 0x396f8cu: goto label_396f8c;
        default: break;
    }

    ctx->pc = 0x396e70u;

label_396e70:
    // 0x396e70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x396e70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_396e74:
    // 0x396e74: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x396e74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
label_396e78:
    // 0x396e78: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x396e78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_396e7c:
    // 0x396e7c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x396e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_396e80:
    // 0x396e80: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x396e80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_396e84:
    // 0x396e84: 0x8c8506cc  lw          $a1, 0x6CC($a0)
    ctx->pc = 0x396e84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1740)));
label_396e88:
    // 0x396e88: 0xa31825  or          $v1, $a1, $v1
    ctx->pc = 0x396e88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_396e8c:
    // 0x396e8c: 0xac8306cc  sw          $v1, 0x6CC($a0)
    ctx->pc = 0x396e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1740), GPR_U32(ctx, 3));
label_396e90:
    // 0x396e90: 0x8c830148  lw          $v1, 0x148($a0)
    ctx->pc = 0x396e90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
label_396e94:
    // 0x396e94: 0x34630080  ori         $v1, $v1, 0x80
    ctx->pc = 0x396e94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
label_396e98:
    // 0x396e98: 0xac830148  sw          $v1, 0x148($a0)
    ctx->pc = 0x396e98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 328), GPR_U32(ctx, 3));
label_396e9c:
    // 0x396e9c: 0x8c830148  lw          $v1, 0x148($a0)
    ctx->pc = 0x396e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
label_396ea0:
    // 0x396ea0: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x396ea0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
label_396ea4:
    // 0x396ea4: 0xac830148  sw          $v1, 0x148($a0)
    ctx->pc = 0x396ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 328), GPR_U32(ctx, 3));
label_396ea8:
    // 0x396ea8: 0x8c830148  lw          $v1, 0x148($a0)
    ctx->pc = 0x396ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
label_396eac:
    // 0x396eac: 0x34630800  ori         $v1, $v1, 0x800
    ctx->pc = 0x396eacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2048);
label_396eb0:
    // 0x396eb0: 0xac830148  sw          $v1, 0x148($a0)
    ctx->pc = 0x396eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 328), GPR_U32(ctx, 3));
label_396eb4:
    // 0x396eb4: 0x8c830148  lw          $v1, 0x148($a0)
    ctx->pc = 0x396eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
label_396eb8:
    // 0x396eb8: 0x34631000  ori         $v1, $v1, 0x1000
    ctx->pc = 0x396eb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4096);
label_396ebc:
    // 0x396ebc: 0xac830148  sw          $v1, 0x148($a0)
    ctx->pc = 0x396ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 328), GPR_U32(ctx, 3));
label_396ec0:
    // 0x396ec0: 0x8c830148  lw          $v1, 0x148($a0)
    ctx->pc = 0x396ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
label_396ec4:
    // 0x396ec4: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x396ec4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
label_396ec8:
    // 0x396ec8: 0xac830148  sw          $v1, 0x148($a0)
    ctx->pc = 0x396ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 328), GPR_U32(ctx, 3));
label_396ecc:
    // 0x396ecc: 0x8c830148  lw          $v1, 0x148($a0)
    ctx->pc = 0x396eccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
label_396ed0:
    // 0x396ed0: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x396ed0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_396ed4:
    // 0x396ed4: 0xac820148  sw          $v0, 0x148($a0)
    ctx->pc = 0x396ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 328), GPR_U32(ctx, 2));
label_396ed8:
    // 0x396ed8: 0x8c8229c0  lw          $v0, 0x29C0($a0)
    ctx->pc = 0x396ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 10688)));
label_396edc:
    // 0x396edc: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x396edcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_396ee0:
    // 0x396ee0: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_396ee4:
    if (ctx->pc == 0x396EE4u) {
        ctx->pc = 0x396EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396EE0u;
        // 0x396ee4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396EE8u;
        goto label_396ee8;
    }
    ctx->pc = 0x396EE0u;
    {
        const bool branch_taken_0x396ee0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x396EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396EE0u;
        // 0x396ee4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x396ee0) {
            ctx->pc = 0x396F08u;
            goto label_396f08;
        }
    }
    ctx->pc = 0x396EE8u;
label_396ee8:
    // 0x396ee8: 0xc0e5900  jal         func_396400
label_396eec:
    if (ctx->pc == 0x396EECu) {
        ctx->pc = 0x396EF0u;
        goto label_396ef0;
    }
    ctx->pc = 0x396EE8u;
    SET_GPR_U32(ctx, 31, 0x396EF0u);
    ctx->pc = 0x396400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x396400u, 0x396EE8u, 0x396EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396EF0u;
label_396ef0:
    // 0x396ef0: 0x8e1904d4  lw          $t9, 0x4D4($s0)
    ctx->pc = 0x396ef0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1236)));
label_396ef4:
    // 0x396ef4: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x396ef4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_396ef8:
    // 0x396ef8: 0x320f809  jalr        $t9
label_396efc:
    if (ctx->pc == 0x396EFCu) {
        ctx->pc = 0x396EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396EF8u;
        // 0x396efc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396F00u;
        goto label_396f00;
    }
    ctx->pc = 0x396EF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x396F00u);
        ctx->pc = 0x396EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396EF8u;
        // 0x396efc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x396EF8u, 0x396F00u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x396F00u;
label_396f00:
    // 0x396f00: 0x1000001f  b           . + 4 + (0x1F << 2)
label_396f04:
    if (ctx->pc == 0x396F04u) {
        ctx->pc = 0x396F08u;
        goto label_396f08;
    }
    ctx->pc = 0x396F00u;
    {
        const bool branch_taken_0x396f00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x396f00) {
            ctx->pc = 0x396F80u;
            goto label_396f80;
        }
    }
    ctx->pc = 0x396F08u;
label_396f08:
    // 0x396f08: 0x9205065c  lbu         $a1, 0x65C($s0)
    ctx->pc = 0x396f08u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1628)));
label_396f0c:
    // 0x396f0c: 0x24020042  addiu       $v0, $zero, 0x42
    ctx->pc = 0x396f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
label_396f10:
    // 0x396f10: 0x10a20017  beq         $a1, $v0, . + 4 + (0x17 << 2)
label_396f14:
    if (ctx->pc == 0x396F14u) {
        ctx->pc = 0x396F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396F10u;
        // 0x396f14: 0x24020041  addiu       $v0, $zero, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396F18u;
        goto label_396f18;
    }
    ctx->pc = 0x396F10u;
    {
        const bool branch_taken_0x396f10 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x396F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396F10u;
        // 0x396f14: 0x24020041  addiu       $v0, $zero, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
        ctx->in_delay_slot = false;
        if (branch_taken_0x396f10) {
            ctx->pc = 0x396F70u;
            goto label_396f70;
        }
    }
    ctx->pc = 0x396F18u;
label_396f18:
    // 0x396f18: 0x10a2000f  beq         $a1, $v0, . + 4 + (0xF << 2)
label_396f1c:
    if (ctx->pc == 0x396F1Cu) {
        ctx->pc = 0x396F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396F18u;
        // 0x396f1c: 0x24030040  addiu       $v1, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396F20u;
        goto label_396f20;
    }
    ctx->pc = 0x396F18u;
    {
        const bool branch_taken_0x396f18 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x396F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396F18u;
        // 0x396f1c: 0x24030040  addiu       $v1, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x396f18) {
            ctx->pc = 0x396F58u;
            goto label_396f58;
        }
    }
    ctx->pc = 0x396F20u;
label_396f20:
    // 0x396f20: 0x10a30007  beq         $a1, $v1, . + 4 + (0x7 << 2)
label_396f24:
    if (ctx->pc == 0x396F24u) {
        ctx->pc = 0x396F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396F20u;
        // 0x396f24: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396F28u;
        goto label_396f28;
    }
    ctx->pc = 0x396F20u;
    {
        const bool branch_taken_0x396f20 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x396F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396F20u;
        // 0x396f24: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x396f20) {
            ctx->pc = 0x396F40u;
            goto label_396f40;
        }
    }
    ctx->pc = 0x396F28u;
label_396f28:
    // 0x396f28: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
label_396f2c:
    if (ctx->pc == 0x396F2Cu) {
        ctx->pc = 0x396F30u;
        goto label_396f30;
    }
    ctx->pc = 0x396F28u;
    {
        const bool branch_taken_0x396f28 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x396f28) {
            ctx->pc = 0x396F38u;
            goto label_396f38;
        }
    }
    ctx->pc = 0x396F30u;
label_396f30:
    // 0x396f30: 0x10000011  b           . + 4 + (0x11 << 2)
label_396f34:
    if (ctx->pc == 0x396F34u) {
        ctx->pc = 0x396F38u;
        goto label_396f38;
    }
    ctx->pc = 0x396F30u;
    {
        const bool branch_taken_0x396f30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x396f30) {
            ctx->pc = 0x396F78u;
            goto label_396f78;
        }
    }
    ctx->pc = 0x396F38u;
label_396f38:
    // 0x396f38: 0x1000000f  b           . + 4 + (0xF << 2)
label_396f3c:
    if (ctx->pc == 0x396F3Cu) {
        ctx->pc = 0x396F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396F38u;
        // 0x396f3c: 0xa2030780  sb          $v1, 0x780($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396F40u;
        goto label_396f40;
    }
    ctx->pc = 0x396F38u;
    {
        const bool branch_taken_0x396f38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x396F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396F38u;
        // 0x396f3c: 0xa2030780  sb          $v1, 0x780($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x396f38) {
            ctx->pc = 0x396F78u;
            goto label_396f78;
        }
    }
    ctx->pc = 0x396F40u;
label_396f40:
    // 0x396f40: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x396f40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_396f44:
    // 0x396f44: 0xc0e5940  jal         func_396500
label_396f48:
    if (ctx->pc == 0x396F48u) {
        ctx->pc = 0x396F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396F44u;
        // 0x396f48: 0xae0207b8  sw          $v0, 0x7B8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1976), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396F4Cu;
        goto label_396f4c;
    }
    ctx->pc = 0x396F44u;
    SET_GPR_U32(ctx, 31, 0x396F4Cu);
    ctx->pc = 0x396F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x396F44u;
    // 0x396f48: 0xae0207b8  sw          $v0, 0x7B8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1976), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x396500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x396500u, 0x396F44u, 0x396F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396F4Cu;
label_396f4c:
    // 0x396f4c: 0x1000000a  b           . + 4 + (0xA << 2)
label_396f50:
    if (ctx->pc == 0x396F50u) {
        ctx->pc = 0x396F54u;
        goto label_396f54;
    }
    ctx->pc = 0x396F4Cu;
    {
        const bool branch_taken_0x396f4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x396f4c) {
            ctx->pc = 0x396F78u;
            goto label_396f78;
        }
    }
    ctx->pc = 0x396F54u;
label_396f54:
    // 0x396f54: 0x0  nop
    ctx->pc = 0x396f54u;
    // NOP
label_396f58:
    // 0x396f58: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x396f58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_396f5c:
    // 0x396f5c: 0xc0e5a10  jal         func_396840
label_396f60:
    if (ctx->pc == 0x396F60u) {
        ctx->pc = 0x396F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396F5Cu;
        // 0x396f60: 0xae0207b8  sw          $v0, 0x7B8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1976), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396F64u;
        goto label_396f64;
    }
    ctx->pc = 0x396F5Cu;
    SET_GPR_U32(ctx, 31, 0x396F64u);
    ctx->pc = 0x396F60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x396F5Cu;
    // 0x396f60: 0xae0207b8  sw          $v0, 0x7B8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1976), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x396840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x396840u, 0x396F5Cu, 0x396F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396F64u;
label_396f64:
    // 0x396f64: 0x10000004  b           . + 4 + (0x4 << 2)
label_396f68:
    if (ctx->pc == 0x396F68u) {
        ctx->pc = 0x396F6Cu;
        goto label_396f6c;
    }
    ctx->pc = 0x396F64u;
    {
        const bool branch_taken_0x396f64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x396f64) {
            ctx->pc = 0x396F78u;
            goto label_396f78;
        }
    }
    ctx->pc = 0x396F6Cu;
label_396f6c:
    // 0x396f6c: 0x0  nop
    ctx->pc = 0x396f6cu;
    // NOP
label_396f70:
    // 0x396f70: 0xc0e5a80  jal         func_396A00
label_396f74:
    if (ctx->pc == 0x396F74u) {
        ctx->pc = 0x396F78u;
        goto label_396f78;
    }
    ctx->pc = 0x396F70u;
    SET_GPR_U32(ctx, 31, 0x396F78u);
    ctx->pc = 0x396A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x396A00u, 0x396F70u, 0x396F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396F78u;
label_396f78:
    // 0x396f78: 0xc0a4d3c  jal         func_2934F0
label_396f7c:
    if (ctx->pc == 0x396F7Cu) {
        ctx->pc = 0x396F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396F78u;
        // 0x396f7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396F80u;
        goto label_396f80;
    }
    ctx->pc = 0x396F78u;
    SET_GPR_U32(ctx, 31, 0x396F80u);
    ctx->pc = 0x396F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x396F78u;
    // 0x396f7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2934F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2934F0u, 0x396F78u, 0x396F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396F80u;
label_396f80:
    // 0x396f80: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x396f80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_396f84:
    // 0x396f84: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x396f84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_396f88:
    // 0x396f88: 0x3e00008  jr          $ra
label_396f8c:
    if (ctx->pc == 0x396F8Cu) {
        ctx->pc = 0x396F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396F88u;
        // 0x396f8c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396F90u;
        goto label_fallthrough_0x396f88;
    }
    ctx->pc = 0x396F88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x396F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396F88u;
        // 0x396f8c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x396F88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x396f88:
    ctx->pc = 0x396F90u;
}
