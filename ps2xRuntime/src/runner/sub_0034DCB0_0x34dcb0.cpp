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

// Function: sub_0034DCB0
// Address: 0x34dcb0 - 0x34ddf0
void sub_0034DCB0_0x34dcb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034DCB0_0x34dcb0");
#endif

    switch (ctx->pc) {
        case 0x34dcc4u: goto label_34dcc4;
        case 0x34dcd0u: goto label_34dcd0;
        case 0x34dd9cu: goto label_34dd9c;
        case 0x34dda4u: goto label_34dda4;
        case 0x34ddacu: goto label_34ddac;
        case 0x34ddb8u: goto label_34ddb8;
        case 0x34ddc4u: goto label_34ddc4;
        case 0x34ddd0u: goto label_34ddd0;
        case 0x34dddcu: goto label_34dddc;
        default: break;
    }

    ctx->pc = 0x34dcb0u;

    // 0x34dcb0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x34dcb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x34dcb4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x34dcb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x34dcb8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x34dcb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x34dcbc: 0xc0d3704  jal         func_34DC10
    ctx->pc = 0x34DCBCu;
    SET_GPR_U32(ctx, 31, 0x34DCC4u);
    ctx->pc = 0x34DCC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34DCBCu;
    // 0x34dcc0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DC10u, 0x34DCBCu, 0x34DCC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34DCC4u;
label_34dcc4:
    // 0x34dcc4: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x34dcc4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
    // 0x34dcc8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x34dcc8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34dccc: 0x24a57ab0  addiu       $a1, $a1, 0x7AB0
    ctx->pc = 0x34dcccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31408));
label_34dcd0:
    // 0x34dcd0: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x34dcd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x34dcd4: 0x94246ac4  lhu         $a0, 0x6AC4($at)
    ctx->pc = 0x34dcd4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)FAST_READ16(0x7E6AC4u));
    // 0x34dcd8: 0x94a30002  lhu         $v1, 0x2($a1)
    ctx->pc = 0x34dcd8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x34dcdc: 0x14830002  bne         $a0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x34DCDCu;
    {
        const bool branch_taken_0x34dcdc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x34dcdc) {
            ctx->pc = 0x34DCE8u;
            goto label_34dce8;
        }
    }
    ctx->pc = 0x34DCE4u;
    // 0x34dce4: 0xae05000c  sw          $a1, 0xC($s0)
    ctx->pc = 0x34dce4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 5));
label_34dce8:
    // 0x34dce8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x34dce8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x34dcec: 0x2cc3000e  sltiu       $v1, $a2, 0xE
    ctx->pc = 0x34dcecu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)14) ? 1 : 0);
    // 0x34dcf0: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x34DCF0u;
    {
        const bool branch_taken_0x34dcf0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x34DCF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34DCF0u;
        // 0x34dcf4: 0x24a5001c  addiu       $a1, $a1, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34dcf0) {
            ctx->pc = 0x34DCD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_34dcd0;
        }
    }
    ctx->pc = 0x34DCF8u;
    // 0x34dcf8: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x34dcf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x34dcfc: 0x10800038  beqz        $a0, . + 4 + (0x38 << 2)
    ctx->pc = 0x34DCFCu;
    {
        const bool branch_taken_0x34dcfc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x34dcfc) {
            ctx->pc = 0x34DDE0u;
            goto label_34dde0;
        }
    }
    ctx->pc = 0x34DD04u;
    // 0x34dd04: 0x90830014  lbu         $v1, 0x14($a0)
    ctx->pc = 0x34dd04u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x34dd08: 0x3c010092  lui         $at, 0x92
    ctx->pc = 0x34dd08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)146 << 16));
    // 0x34dd0c: 0x306300a0  andi        $v1, $v1, 0xA0
    ctx->pc = 0x34dd0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)160);
    // 0x34dd10: 0xa0830014  sb          $v1, 0x14($a0)
    ctx->pc = 0x34dd10u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 20), (uint8_t)GPR_U32(ctx, 3));
    // 0x34dd14: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x34dd14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x34dd18: 0x90660014  lbu         $a2, 0x14($v1)
    ctx->pc = 0x34dd18u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x34dd1c: 0x30c40002  andi        $a0, $a2, 0x2
    ctx->pc = 0x34dd1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)2);
    // 0x34dd20: 0x30c30004  andi        $v1, $a2, 0x4
    ctx->pc = 0x34dd20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)4);
    // 0x34dd24: 0x42042  srl         $a0, $a0, 1
    ctx->pc = 0x34dd24u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x34dd28: 0x31882  srl         $v1, $v1, 2
    ctx->pc = 0x34dd28u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 2));
    // 0x34dd2c: 0x832821  addu        $a1, $a0, $v1
    ctx->pc = 0x34dd2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x34dd30: 0x30c30008  andi        $v1, $a2, 0x8
    ctx->pc = 0x34dd30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)8);
    // 0x34dd34: 0x320c2  srl         $a0, $v1, 3
    ctx->pc = 0x34dd34u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 3));
    // 0x34dd38: 0x30c30010  andi        $v1, $a2, 0x10
    ctx->pc = 0x34dd38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16);
    // 0x34dd3c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x34dd3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x34dd40: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x34dd40u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x34dd44: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x34dd44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x34dd48: 0xa2030027  sb          $v1, 0x27($s0)
    ctx->pc = 0x34dd48u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 39), (uint8_t)GPR_U32(ctx, 3));
    // 0x34dd4c: 0x8c23a09c  lw          $v1, -0x5F64($at)
    ctx->pc = 0x34dd4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294942876)));
    // 0x34dd50: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x34dd50u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x34dd54: 0x10600022  beqz        $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x34DD54u;
    {
        const bool branch_taken_0x34dd54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x34dd54) {
            ctx->pc = 0x34DDE0u;
            goto label_34dde0;
        }
    }
    ctx->pc = 0x34DD5Cu;
    // 0x34dd5c: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x34dd5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x34dd60: 0x3c04007e  lui         $a0, 0x7E
    ctx->pc = 0x34dd60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
    // 0x34dd64: 0x24428030  addiu       $v0, $v0, -0x7FD0
    ctx->pc = 0x34dd64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934576));
    // 0x34dd68: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x34dd68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x34dd6c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x34dd6cu;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x658030u));
    // 0x34dd70: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x34dd70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x34dd74: 0x24842620  addiu       $a0, $a0, 0x2620
    ctx->pc = 0x34dd74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9760));
    // 0x34dd78: 0x84420010  lh          $v0, 0x10($v0)
    ctx->pc = 0x34dd78u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x658040u));
    // 0x34dd7c: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x34dd7cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    // 0x34dd80: 0xa4a20010  sh          $v0, 0x10($a1)
    ctx->pc = 0x34dd80u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 16), (uint16_t)GPR_U32(ctx, 2));
    // 0x34dd84: 0x9022fc8d  lbu         $v0, -0x373($at)
    ctx->pc = 0x34dd84u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x81FC8Du));
    // 0x34dd88: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x34dd88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x34dd8c: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x34dd8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x34dd90: 0x94450020  lhu         $a1, 0x20($v0)
    ctx->pc = 0x34dd90u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x34dd94: 0xc052d94  jal         func_14B650
    ctx->pc = 0x34DD94u;
    SET_GPR_U32(ctx, 31, 0x34DD9Cu);
    ctx->pc = 0x34DD98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34DD94u;
    // 0x34dd98: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B650u, 0x34DD94u, 0x34DD9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34DD9Cu;
label_34dd9c:
    // 0x34dd9c: 0xc0d377c  jal         func_34DDF0
    ctx->pc = 0x34DD9Cu;
    SET_GPR_U32(ctx, 31, 0x34DDA4u);
    ctx->pc = 0x34DDA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34DD9Cu;
    // 0x34dda0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DDF0u, 0x34DD9Cu, 0x34DDA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34DDA4u;
label_34dda4:
    // 0x34dda4: 0xc0d2500  jal         func_349400
    ctx->pc = 0x34DDA4u;
    SET_GPR_U32(ctx, 31, 0x34DDACu);
    ctx->pc = 0x349400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349400u, 0x34DDA4u, 0x34DDACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34DDACu;
label_34ddac:
    // 0x34ddac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x34ddacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34ddb0: 0xc0d3860  jal         func_34E180
    ctx->pc = 0x34DDB0u;
    SET_GPR_U32(ctx, 31, 0x34DDB8u);
    ctx->pc = 0x34DDB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34DDB0u;
    // 0x34ddb4: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34E180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34E180u, 0x34DDB0u, 0x34DDB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34DDB8u;
label_34ddb8:
    // 0x34ddb8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x34ddb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34ddbc: 0xc0d3860  jal         func_34E180
    ctx->pc = 0x34DDBCu;
    SET_GPR_U32(ctx, 31, 0x34DDC4u);
    ctx->pc = 0x34DDC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34DDBCu;
    // 0x34ddc0: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34E180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34E180u, 0x34DDBCu, 0x34DDC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34DDC4u;
label_34ddc4:
    // 0x34ddc4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x34ddc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34ddc8: 0xc0d3860  jal         func_34E180
    ctx->pc = 0x34DDC8u;
    SET_GPR_U32(ctx, 31, 0x34DDD0u);
    ctx->pc = 0x34DDCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34DDC8u;
    // 0x34ddcc: 0x24050011  addiu       $a1, $zero, 0x11 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34E180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34E180u, 0x34DDC8u, 0x34DDD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34DDD0u;
label_34ddd0:
    // 0x34ddd0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x34ddd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34ddd4: 0xc0d3aa4  jal         func_34EA90
    ctx->pc = 0x34DDD4u;
    SET_GPR_U32(ctx, 31, 0x34DDDCu);
    ctx->pc = 0x34DDD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34DDD4u;
    // 0x34ddd8: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34EA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34EA90u, 0x34DDD4u, 0x34DDDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34DDDCu;
label_34dddc:
    // 0x34dddc: 0x0  nop
    ctx->pc = 0x34dddcu;
    // NOP
label_34dde0:
    // 0x34dde0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x34dde0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34dde4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x34dde4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34dde8: 0x3e00008  jr          $ra
    ctx->pc = 0x34DDE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34DDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34DDE8u;
        // 0x34ddec: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34DDE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34DDF0u;
}
