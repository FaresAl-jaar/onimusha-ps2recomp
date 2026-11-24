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

// Function: sub_002FFCA0
// Address: 0x2ffca0 - 0x2ffee0
void sub_002FFCA0_0x2ffca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FFCA0_0x2ffca0");
#endif

    switch (ctx->pc) {
        case 0x2ffcf4u: goto label_2ffcf4;
        case 0x2ffd08u: goto label_2ffd08;
        case 0x2ffd48u: goto label_2ffd48;
        case 0x2ffd58u: goto label_2ffd58;
        case 0x2ffe24u: goto label_2ffe24;
        case 0x2ffed0u: goto label_2ffed0;
        default: break;
    }

    ctx->pc = 0x2ffca0u;

    // 0x2ffca0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2ffca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2ffca4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2ffca4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ffca8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2ffca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2ffcac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ffcacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2ffcb0: 0x90860521  lbu         $a2, 0x521($a0)
    ctx->pc = 0x2ffcb0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1313)));
    // 0x2ffcb4: 0x10c30020  beq         $a2, $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x2FFCB4u;
    {
        const bool branch_taken_0x2ffcb4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x2FFCB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFCB4u;
        // 0x2ffcb8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffcb4) {
            ctx->pc = 0x2FFD38u;
            goto label_2ffd38;
        }
    }
    ctx->pc = 0x2FFCBCu;
    // 0x2ffcbc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ffcbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ffcc0: 0x10c30015  beq         $a2, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x2FFCC0u;
    {
        const bool branch_taken_0x2ffcc0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x2ffcc0) {
            ctx->pc = 0x2FFD18u;
            goto label_2ffd18;
        }
    }
    ctx->pc = 0x2FFCC8u;
    // 0x2ffcc8: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FFCC8u;
    {
        const bool branch_taken_0x2ffcc8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ffcc8) {
            ctx->pc = 0x2FFCD8u;
            goto label_2ffcd8;
        }
    }
    ctx->pc = 0x2FFCD0u;
    // 0x2ffcd0: 0x1000007f  b           . + 4 + (0x7F << 2)
    ctx->pc = 0x2FFCD0u;
    {
        const bool branch_taken_0x2ffcd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ffcd0) {
            ctx->pc = 0x2FFED0u;
            goto label_2ffed0;
        }
    }
    ctx->pc = 0x2FFCD8u;
label_2ffcd8:
    // 0x2ffcd8: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2FFCD8u;
    {
        const bool branch_taken_0x2ffcd8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ffcd8) {
            ctx->pc = 0x2FFD00u;
            goto label_2ffd00;
        }
    }
    ctx->pc = 0x2FFCE0u;
    // 0x2ffce0: 0x8ca6085c  lw          $a2, 0x85C($a1)
    ctx->pc = 0x2ffce0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 2140)));
    // 0x2ffce4: 0x9204053b  lbu         $a0, 0x53B($s0)
    ctx->pc = 0x2ffce4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1339)));
    // 0x2ffce8: 0x9205052e  lbu         $a1, 0x52E($s0)
    ctx->pc = 0x2ffce8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1326)));
    // 0x2ffcec: 0xc0aad50  jal         func_2AB540
    ctx->pc = 0x2FFCECu;
    SET_GPR_U32(ctx, 31, 0x2FFCF4u);
    ctx->pc = 0x2FFCF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FFCECu;
    // 0x2ffcf0: 0x26070020  addiu       $a3, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AB540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AB540u, 0x2FFCECu, 0x2FFCF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FFCF4u;
label_2ffcf4:
    // 0x2ffcf4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2FFCF4u;
    {
        const bool branch_taken_0x2ffcf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FFCF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFCF4u;
        // 0x2ffcf8: 0xae020550  sw          $v0, 0x550($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1360), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffcf4) {
            ctx->pc = 0x2FFD08u;
            goto label_2ffd08;
        }
    }
    ctx->pc = 0x2FFCFCu;
    // 0x2ffcfc: 0x0  nop
    ctx->pc = 0x2ffcfcu;
    // NOP
label_2ffd00:
    // 0x2ffd00: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x2FFD00u;
    SET_GPR_U32(ctx, 31, 0x2FFD08u);
    ctx->pc = 0x2FFD04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FFD00u;
    // 0x2ffd04: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x2FFD00u, 0x2FFD08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FFD08u;
label_2ffd08:
    // 0x2ffd08: 0x92030521  lbu         $v1, 0x521($s0)
    ctx->pc = 0x2ffd08u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1313)));
    // 0x2ffd0c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2ffd0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2ffd10: 0x1000006f  b           . + 4 + (0x6F << 2)
    ctx->pc = 0x2FFD10u;
    {
        const bool branch_taken_0x2ffd10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FFD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFD10u;
        // 0x2ffd14: 0xa2030521  sb          $v1, 0x521($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffd10) {
            ctx->pc = 0x2FFED0u;
            goto label_2ffed0;
        }
    }
    ctx->pc = 0x2FFD18u;
label_2ffd18:
    // 0x2ffd18: 0x86020526  lh          $v0, 0x526($s0)
    ctx->pc = 0x2ffd18u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1318)));
    // 0x2ffd1c: 0xa6020512  sh          $v0, 0x512($s0)
    ctx->pc = 0x2ffd1cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1298), (uint16_t)GPR_U32(ctx, 2));
    // 0x2ffd20: 0xa6000510  sh          $zero, 0x510($s0)
    ctx->pc = 0x2ffd20u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 0));
    // 0x2ffd24: 0xa2000514  sb          $zero, 0x514($s0)
    ctx->pc = 0x2ffd24u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1300), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ffd28: 0xa2000515  sb          $zero, 0x515($s0)
    ctx->pc = 0x2ffd28u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1301), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ffd2c: 0x92020521  lbu         $v0, 0x521($s0)
    ctx->pc = 0x2ffd2cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1313)));
    // 0x2ffd30: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2ffd30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2ffd34: 0xa2020521  sb          $v0, 0x521($s0)
    ctx->pc = 0x2ffd34u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 2));
label_2ffd38:
    // 0x2ffd38: 0x8e060550  lw          $a2, 0x550($s0)
    ctx->pc = 0x2ffd38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1360)));
    // 0x2ffd3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ffd3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ffd40: 0xc0c08b4  jal         func_3022D0
    ctx->pc = 0x2FFD40u;
    SET_GPR_U32(ctx, 31, 0x2FFD48u);
    ctx->pc = 0x2FFD44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FFD40u;
    // 0x2ffd44: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022D0u, 0x2FFD40u, 0x2FFD48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FFD48u;
label_2ffd48:
    // 0x2ffd48: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FFD48u;
    {
        const bool branch_taken_0x2ffd48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FFD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFD48u;
        // 0x2ffd4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffd48) {
            ctx->pc = 0x2FFD58u;
            goto label_2ffd58;
        }
    }
    ctx->pc = 0x2FFD50u;
    // 0x2ffd50: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x2FFD50u;
    SET_GPR_U32(ctx, 31, 0x2FFD58u);
    ctx->pc = 0x2FFD54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FFD50u;
    // 0x2ffd54: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x2FFD50u, 0x2FFD58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FFD58u;
label_2ffd58:
    // 0x2ffd58: 0x86040510  lh          $a0, 0x510($s0)
    ctx->pc = 0x2ffd58u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x2ffd5c: 0x28830030  slti        $v1, $a0, 0x30
    ctx->pc = 0x2ffd5cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x2ffd60: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FFD60u;
    {
        const bool branch_taken_0x2ffd60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FFD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFD60u;
        // 0x2ffd64: 0x24030015  addiu       $v1, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffd60) {
            ctx->pc = 0x2FFD70u;
            goto label_2ffd70;
        }
    }
    ctx->pc = 0x2FFD68u;
    // 0x2ffd68: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2FFD68u;
    {
        const bool branch_taken_0x2ffd68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FFD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFD68u;
        // 0x2ffd6c: 0xa2030558  sb          $v1, 0x558($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1368), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffd68) {
            ctx->pc = 0x2FFDB8u;
            goto label_2ffdb8;
        }
    }
    ctx->pc = 0x2FFD70u;
label_2ffd70:
    // 0x2ffd70: 0x4810004  bgez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2FFD70u;
    {
        const bool branch_taken_0x2ffd70 = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x2FFD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFD70u;
        // 0x2ffd74: 0x30830007  andi        $v1, $a0, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffd70) {
            ctx->pc = 0x2FFD84u;
            goto label_2ffd84;
        }
    }
    ctx->pc = 0x2FFD78u;
    // 0x2ffd78: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2FFD78u;
    {
        const bool branch_taken_0x2ffd78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ffd78) {
            ctx->pc = 0x2FFD84u;
            goto label_2ffd84;
        }
    }
    ctx->pc = 0x2FFD80u;
    // 0x2ffd80: 0x2463fff8  addiu       $v1, $v1, -0x8
    ctx->pc = 0x2ffd80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
label_2ffd84:
    // 0x2ffd84: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x2FFD84u;
    {
        const bool branch_taken_0x2ffd84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ffd84) {
            ctx->pc = 0x2FFDB8u;
            goto label_2ffdb8;
        }
    }
    ctx->pc = 0x2FFD8Cu;
    // 0x2ffd8c: 0x92050558  lbu         $a1, 0x558($s0)
    ctx->pc = 0x2ffd8cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1368)));
    // 0x2ffd90: 0x24040013  addiu       $a0, $zero, 0x13
    ctx->pc = 0x2ffd90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x2ffd94: 0x14a40004  bne         $a1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2FFD94u;
    {
        const bool branch_taken_0x2ffd94 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        ctx->pc = 0x2FFD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFD94u;
        // 0x2ffd98: 0x24030014  addiu       $v1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffd94) {
            ctx->pc = 0x2FFDA8u;
            goto label_2ffda8;
        }
    }
    ctx->pc = 0x2FFD9Cu;
    // 0x2ffd9c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2FFD9Cu;
    {
        const bool branch_taken_0x2ffd9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FFDA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFD9Cu;
        // 0x2ffda0: 0xa2030558  sb          $v1, 0x558($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1368), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffd9c) {
            ctx->pc = 0x2FFDB8u;
            goto label_2ffdb8;
        }
    }
    ctx->pc = 0x2FFDA4u;
    // 0x2ffda4: 0x0  nop
    ctx->pc = 0x2ffda4u;
    // NOP
label_2ffda8:
    // 0x2ffda8: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x2ffda8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2ffdac: 0x14a30002  bne         $a1, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2FFDACu;
    {
        const bool branch_taken_0x2ffdac = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x2ffdac) {
            ctx->pc = 0x2FFDB8u;
            goto label_2ffdb8;
        }
    }
    ctx->pc = 0x2FFDB4u;
    // 0x2ffdb4: 0xa2040558  sb          $a0, 0x558($s0)
    ctx->pc = 0x2ffdb4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1368), (uint8_t)GPR_U32(ctx, 4));
label_2ffdb8:
    // 0x2ffdb8: 0x86030510  lh          $v1, 0x510($s0)
    ctx->pc = 0x2ffdb8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x2ffdbc: 0x460001a  bltz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x2FFDBCu;
    {
        const bool branch_taken_0x2ffdbc = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x2FFDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFDBCu;
        // 0x2ffdc0: 0x28610065  slti        $at, $v1, 0x65 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)101) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffdbc) {
            ctx->pc = 0x2FFE28u;
            goto label_2ffe28;
        }
    }
    ctx->pc = 0x2FFDC4u;
    // 0x2ffdc4: 0x10200018  beqz        $at, . + 4 + (0x18 << 2)
    ctx->pc = 0x2FFDC4u;
    {
        const bool branch_taken_0x2ffdc4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ffdc4) {
            ctx->pc = 0x2FFE28u;
            goto label_2ffe28;
        }
    }
    ctx->pc = 0x2FFDCCu;
    // 0x2ffdcc: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x2ffdccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x2ffdd0: 0x27aa0050  addiu       $t2, $sp, 0x50
    ctx->pc = 0x2ffdd0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2ffdd4: 0x78295c20  lq          $t1, 0x5C20($at)
    ctx->pc = 0x2ffdd4u;
    SET_GPR_VEC(ctx, 9, FAST_READ128(0x665C20u));
    // 0x2ffdd8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ffdd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ffddc: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x2ffddcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2ffde0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2ffde0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ffde4: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x2ffde4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x2ffde8: 0x7fa90020  sq          $t1, 0x20($sp)
    ctx->pc = 0x2ffde8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 9));
    // 0x2ffdec: 0x78265c30  lq          $a2, 0x5C30($at)
    ctx->pc = 0x2ffdecu;
    SET_GPR_VEC(ctx, 6, FAST_READ128(0x665C30u));
    // 0x2ffdf0: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x2ffdf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x2ffdf4: 0x7fa60030  sq          $a2, 0x30($sp)
    ctx->pc = 0x2ffdf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 6));
    // 0x2ffdf8: 0x78235c40  lq          $v1, 0x5C40($at)
    ctx->pc = 0x2ffdf8u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x665C40u));
    // 0x2ffdfc: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x2ffdfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x2ffe00: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x2ffe00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
    // 0x2ffe04: 0x78225c50  lq          $v0, 0x5C50($at)
    ctx->pc = 0x2ffe04u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x665C50u));
    // 0x2ffe08: 0x7d420000  sq          $v0, 0x0($t2)
    ctx->pc = 0x2ffe08u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
    // 0x2ffe0c: 0x7a020020  lq          $v0, 0x20($s0)
    ctx->pc = 0x2ffe0cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2ffe10: 0x7d420000  sq          $v0, 0x0($t2)
    ctx->pc = 0x2ffe10u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
    // 0x2ffe14: 0x92060558  lbu         $a2, 0x558($s0)
    ctx->pc = 0x2ffe14u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1368)));
    // 0x2ffe18: 0xc60c0554  lwc1        $f12, 0x554($s0)
    ctx->pc = 0x2ffe18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2ffe1c: 0xc0c0900  jal         func_302400
    ctx->pc = 0x2FFE1Cu;
    SET_GPR_U32(ctx, 31, 0x2FFE24u);
    ctx->pc = 0x2FFE20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FFE1Cu;
    // 0x2ffe20: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302400u, 0x2FFE1Cu, 0x2FFE24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FFE24u;
label_2ffe24:
    // 0x2ffe24: 0x0  nop
    ctx->pc = 0x2ffe24u;
    // NOP
label_2ffe28:
    // 0x2ffe28: 0x92030515  lbu         $v1, 0x515($s0)
    ctx->pc = 0x2ffe28u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1301)));
    // 0x2ffe2c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2FFE2Cu;
    {
        const bool branch_taken_0x2ffe2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FFE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFE2Cu;
        // 0x2ffe30: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffe2c) {
            ctx->pc = 0x2FFE40u;
            goto label_2ffe40;
        }
    }
    ctx->pc = 0x2FFE34u;
    // 0x2ffe34: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x2FFE34u;
    {
        const bool branch_taken_0x2ffe34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ffe34) {
            ctx->pc = 0x2FFEC0u;
            goto label_2ffec0;
        }
    }
    ctx->pc = 0x2FFE3Cu;
    // 0x2ffe3c: 0x0  nop
    ctx->pc = 0x2ffe3cu;
    // NOP
label_2ffe40:
    // 0x2ffe40: 0x86040510  lh          $a0, 0x510($s0)
    ctx->pc = 0x2ffe40u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x2ffe44: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x2ffe44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x2ffe48: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2ffe48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2ffe4c: 0xa6040510  sh          $a0, 0x510($s0)
    ctx->pc = 0x2ffe4cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x2ffe50: 0x86040512  lh          $a0, 0x512($s0)
    ctx->pc = 0x2ffe50u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1298)));
    // 0x2ffe54: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x2FFE54u;
    {
        const bool branch_taken_0x2ffe54 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2ffe54) {
            ctx->pc = 0x2FFE90u;
            goto label_2ffe90;
        }
    }
    ctx->pc = 0x2FFE5Cu;
    // 0x2ffe5c: 0x86050510  lh          $a1, 0x510($s0)
    ctx->pc = 0x2ffe5cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x2ffe60: 0x28a37ff0  slti        $v1, $a1, 0x7FF0
    ctx->pc = 0x2ffe60u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32752) ? 1 : 0);
    // 0x2ffe64: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x2FFE64u;
    {
        const bool branch_taken_0x2ffe64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FFE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFE64u;
        // 0x2ffe68: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffe64) {
            ctx->pc = 0x2FFEB8u;
            goto label_2ffeb8;
        }
    }
    ctx->pc = 0x2FFE6Cu;
    // 0x2ffe6c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ffe6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ffe70: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x2ffe70u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2ffe74: 0x0  nop
    ctx->pc = 0x2ffe74u;
    // NOP
    // 0x2ffe78: 0x0  nop
    ctx->pc = 0x2ffe78u;
    // NOP
    // 0x2ffe7c: 0x2010  mfhi        $a0
    ctx->pc = 0x2ffe7cu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x2ffe80: 0xa6040510  sh          $a0, 0x510($s0)
    ctx->pc = 0x2ffe80u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x2ffe84: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2FFE84u;
    {
        const bool branch_taken_0x2ffe84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FFE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFE84u;
        // 0x2ffe88: 0xa2030514  sb          $v1, 0x514($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffe84) {
            ctx->pc = 0x2FFEB8u;
            goto label_2ffeb8;
        }
    }
    ctx->pc = 0x2FFE8Cu;
    // 0x2ffe8c: 0x0  nop
    ctx->pc = 0x2ffe8cu;
    // NOP
label_2ffe90:
    // 0x2ffe90: 0x86030510  lh          $v1, 0x510($s0)
    ctx->pc = 0x2ffe90u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x2ffe94: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x2ffe94u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2ffe98: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2FFE98u;
    {
        const bool branch_taken_0x2ffe98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ffe98) {
            ctx->pc = 0x2FFEB8u;
            goto label_2ffeb8;
        }
    }
    ctx->pc = 0x2FFEA0u;
    // 0x2ffea0: 0xa6040510  sh          $a0, 0x510($s0)
    ctx->pc = 0x2ffea0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x2ffea4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ffea4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ffea8: 0xa2030515  sb          $v1, 0x515($s0)
    ctx->pc = 0x2ffea8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1301), (uint8_t)GPR_U32(ctx, 3));
    // 0x2ffeac: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2FFEACu;
    {
        const bool branch_taken_0x2ffeac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FFEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFEACu;
        // 0x2ffeb0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffeac) {
            ctx->pc = 0x2FFEC0u;
            goto label_2ffec0;
        }
    }
    ctx->pc = 0x2FFEB4u;
    // 0x2ffeb4: 0x0  nop
    ctx->pc = 0x2ffeb4u;
    // NOP
label_2ffeb8:
    // 0x2ffeb8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ffeb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ffebc: 0x0  nop
    ctx->pc = 0x2ffebcu;
    // NOP
label_2ffec0:
    // 0x2ffec0: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FFEC0u;
    {
        const bool branch_taken_0x2ffec0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FFEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFEC0u;
        // 0x2ffec4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffec0) {
            ctx->pc = 0x2FFED0u;
            goto label_2ffed0;
        }
    }
    ctx->pc = 0x2FFEC8u;
    // 0x2ffec8: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x2FFEC8u;
    SET_GPR_U32(ctx, 31, 0x2FFED0u);
    ctx->pc = 0x2FFECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FFEC8u;
    // 0x2ffecc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x2FFEC8u, 0x2FFED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FFED0u;
label_2ffed0:
    // 0x2ffed0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2ffed0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ffed4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ffed4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ffed8: 0x3e00008  jr          $ra
    ctx->pc = 0x2FFED8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FFEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFED8u;
        // 0x2ffedc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FFED8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FFEE0u;
}
