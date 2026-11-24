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

// Function: sub_0022FC30
// Address: 0x22fc30 - 0x230054
void sub_0022FC30_0x22fc30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022FC30_0x22fc30");
#endif

    switch (ctx->pc) {
        case 0x22fc88u: goto label_22fc88;
        case 0x22fcc4u: goto label_22fcc4;
        case 0x22fd34u: goto label_22fd34;
        case 0x22fda0u: goto label_22fda0;
        case 0x22fe88u: goto label_22fe88;
        case 0x22fe90u: goto label_22fe90;
        case 0x22fec0u: goto label_22fec0;
        case 0x22ff54u: goto label_22ff54;
        case 0x22ffccu: goto label_22ffcc;
        case 0x22ffe0u: goto label_22ffe0;
        case 0x22fffcu: goto label_22fffc;
        case 0x23000cu: goto label_23000c;
        default: break;
    }

    ctx->pc = 0x22fc30u;

    // 0x22fc30: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x22fc30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x22fc34: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x22fc34u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x22fc38: 0x8c43cdec  lw          $v1, -0x3214($v0)
    ctx->pc = 0x22fc38u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4BCDECu));
    // 0x22fc3c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x22fc3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x22fc40: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x22fc40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22fc44: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x22fc44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x22fc48: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x22fc48u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22fc4c: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x22fc4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x22fc50: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x22fc50u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22fc54: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x22fc54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x22fc58: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x22fc58u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22fc5c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x22fc5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x22fc60: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x22fc60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x22fc64: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x22fc64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x22fc68: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x22fc68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x22fc6c: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x22fc6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x22fc70: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x22fc70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x22fc74: 0x12030006  beq         $s0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x22FC74u;
    {
        const bool branch_taken_0x22fc74 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x22FC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FC74u;
        // 0x22fc78: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fc74) {
            ctx->pc = 0x22FC90u;
            goto label_22fc90;
        }
    }
    ctx->pc = 0x22FC7Cu;
    // 0x22fc7c: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x22fc7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x22fc80: 0xc08baa4  jal         func_22EA90
    ctx->pc = 0x22FC80u;
    SET_GPR_U32(ctx, 31, 0x22FC88u);
    ctx->pc = 0x22FC84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FC80u;
    // 0x22fc84: 0x2484a468  addiu       $a0, $a0, -0x5B98 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22EA90u, 0x22FC80u, 0x22FC88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FC88u;
label_22fc88:
    // 0x22fc88: 0x100000e6  b           . + 4 + (0xE6 << 2)
    ctx->pc = 0x22FC88u;
    {
        const bool branch_taken_0x22fc88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FC88u;
        // 0x22fc8c: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fc88) {
            ctx->pc = 0x230024u;
            goto label_230024;
        }
    }
    ctx->pc = 0x22FC90u;
label_22fc90:
    // 0x22fc90: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x22fc90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
    // 0x22fc94: 0x8c62cde8  lw          $v0, -0x3218($v1)
    ctx->pc = 0x22fc94u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4BCDE8u));
    // 0x22fc98: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x22FC98u;
    {
        const bool branch_taken_0x22fc98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22FC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FC98u;
        // 0x22fc9c: 0x3c05004c  lui         $a1, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fc98) {
            ctx->pc = 0x22FCB8u;
            goto label_22fcb8;
        }
    }
    ctx->pc = 0x22FCA0u;
    // 0x22fca0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x22fca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x22fca4: 0x12020004  beq         $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x22FCA4u;
    {
        const bool branch_taken_0x22fca4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x22FCA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FCA4u;
        // 0x22fca8: 0x3c03004c  lui         $v1, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fca4) {
            ctx->pc = 0x22FCB8u;
            goto label_22fcb8;
        }
    }
    ctx->pc = 0x22FCACu;
    // 0x22fcac: 0x100000dd  b           . + 4 + (0xDD << 2)
    ctx->pc = 0x22FCACu;
    {
        const bool branch_taken_0x22fcac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FCB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FCACu;
        // 0x22fcb0: 0x8c62cdf0  lw          $v0, -0x3210($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294954480)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fcac) {
            ctx->pc = 0x230024u;
            goto label_230024;
        }
    }
    ctx->pc = 0x22FCB4u;
    // 0x22fcb4: 0x0  nop
    ctx->pc = 0x22fcb4u;
    // NOP
label_22fcb8:
    // 0x22fcb8: 0x3c16004c  lui         $s6, 0x4C
    ctx->pc = 0x22fcb8u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)76 << 16));
    // 0x22fcbc: 0xc08c55e  jal         func_231578
    ctx->pc = 0x22FCBCu;
    SET_GPR_U32(ctx, 31, 0x22FCC4u);
    ctx->pc = 0x22FCC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FCBCu;
    // 0x22fcc0: 0x8ca4cde8  lw          $a0, -0x3218($a1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294954472)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231578u, 0x22FCBCu, 0x22FCC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FCC4u;
label_22fcc4:
    // 0x22fcc4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x22fcc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x22fcc8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x22fcc8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22fccc: 0x146400d5  bne         $v1, $a0, . + 4 + (0xD5 << 2)
    ctx->pc = 0x22FCCCu;
    {
        const bool branch_taken_0x22fccc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x22FCD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FCCCu;
        // 0x22fcd0: 0xaec3cdf0  sw          $v1, -0x3210($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 4294954480), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fccc) {
            ctx->pc = 0x230024u;
            goto label_230024;
        }
    }
    ctx->pc = 0x22FCD4u;
    // 0x22fcd4: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x22fcd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x22fcd8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x22fcd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22fcdc: 0x3c10004c  lui         $s0, 0x4C
    ctx->pc = 0x22fcdcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)76 << 16));
    // 0x22fce0: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x22fce0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x22fce4: 0x8e10c8b8  lw          $s0, -0x3748($s0)
    ctx->pc = 0x22fce4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294953144)));
    // 0x22fce8: 0x8203000f  lb          $v1, 0xF($s0)
    ctx->pc = 0x22fce8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 15)));
    // 0x22fcec: 0x14640004  bne         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x22FCECu;
    {
        const bool branch_taken_0x22fcec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x22FCF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FCECu;
        // 0x22fcf0: 0x2602011a  addiu       $v0, $s0, 0x11A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 282));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fcec) {
            ctx->pc = 0x22FD00u;
            goto label_22fd00;
        }
    }
    ctx->pc = 0x22FCF4u;
    // 0x22fcf4: 0x26140118  addiu       $s4, $s0, 0x118
    ctx->pc = 0x22fcf4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 280));
    // 0x22fcf8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x22FCF8u;
    {
        const bool branch_taken_0x22fcf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FCFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FCF8u;
        // 0x22fcfc: 0x261e011c  addiu       $fp, $s0, 0x11C (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 16), 284));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fcf8) {
            ctx->pc = 0x22FD08u;
            goto label_22fd08;
        }
    }
    ctx->pc = 0x22FD00u;
label_22fd00:
    // 0x22fd00: 0x26150118  addiu       $s5, $s0, 0x118
    ctx->pc = 0x22fd00u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), 280));
    // 0x22fd04: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x22fd04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_22fd08:
    // 0x22fd08: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x22fd08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x22fd0c: 0x14400062  bnez        $v0, . + 4 + (0x62 << 2)
    ctx->pc = 0x22FD0Cu;
    {
        const bool branch_taken_0x22fd0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22FD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FD0Cu;
        // 0x22fd10: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fd0c) {
            ctx->pc = 0x22FE98u;
            goto label_22fe98;
        }
    }
    ctx->pc = 0x22FD14u;
    // 0x22fd14: 0x3c17004c  lui         $s7, 0x4C
    ctx->pc = 0x22fd14u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)76 << 16));
    // 0x22fd18: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x22fd18u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
    // 0x22fd1c: 0x26f1cdf8  addiu       $s1, $s7, -0x3208
    ctx->pc = 0x22fd1cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 23), 4294954488));
    // 0x22fd20: 0x24a5a4a0  addiu       $a1, $a1, -0x5B60
    ctx->pc = 0x22fd20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943904));
    // 0x22fd24: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x22fd24u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x4BCDF8u));
    // 0x22fd28: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x22fd28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x22fd2c: 0xc0494fc  jal         func_1253F0
    ctx->pc = 0x22FD2Cu;
    SET_GPR_U32(ctx, 31, 0x22FD34u);
    ctx->pc = 0x22FD30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FD2Cu;
    // 0x22fd30: 0x2e0982d  daddu       $s3, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1253F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1253F0u, 0x22FD2Cu, 0x22FD34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FD34u;
label_22fd34:
    // 0x22fd34: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x22FD34u;
    {
        const bool branch_taken_0x22fd34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FD34u;
        // 0x22fd38: 0x3c040067  lui         $a0, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fd34) {
            ctx->pc = 0x22FD48u;
            goto label_22fd48;
        }
    }
    ctx->pc = 0x22FD3Cu;
    // 0x22fd3c: 0x26d0cdf0  addiu       $s0, $s6, -0x3210
    ctx->pc = 0x22fd3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 4294954480));
    // 0x22fd40: 0x100000ac  b           . + 4 + (0xAC << 2)
    ctx->pc = 0x22FD40u;
    {
        const bool branch_taken_0x22fd40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FD40u;
        // 0x22fd44: 0x2484a4a8  addiu       $a0, $a0, -0x5B58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943912));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fd40) {
            ctx->pc = 0x22FFF4u;
            goto label_22fff4;
        }
    }
    ctx->pc = 0x22FD48u;
label_22fd48:
    // 0x22fd48: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x22fd48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x22fd4c: 0x24120004  addiu       $s2, $zero, 0x4
    ctx->pc = 0x22fd4cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x22fd50: 0x3c060001  lui         $a2, 0x1
    ctx->pc = 0x22fd50u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1 << 16));
    // 0x22fd54: 0x24480005  addiu       $t0, $v0, 0x5
    ctx->pc = 0x22fd54u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 5));
    // 0x22fd58: 0x90450007  lbu         $a1, 0x7($v0)
    ctx->pc = 0x22fd58u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 7)));
    // 0x22fd5c: 0x90430006  lbu         $v1, 0x6($v0)
    ctx->pc = 0x22fd5cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x22fd60: 0x523821  addu        $a3, $v0, $s2
    ctx->pc = 0x22fd60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x22fd64: 0x91040000  lbu         $a0, 0x0($t0)
    ctx->pc = 0x22fd64u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x22fd68: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x22fd68u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x22fd6c: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x22fd6cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x22fd70: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x22fd70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x22fd74: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x22fd74u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x22fd78: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x22fd78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x22fd7c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x22fd7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x22fd80: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x22fd80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x22fd84: 0xc2302a  slt         $a2, $a2, $v0
    ctx->pc = 0x22fd84u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x22fd88: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x22FD88u;
    {
        const bool branch_taken_0x22fd88 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FD88u;
        // 0x22fd8c: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fd88) {
            ctx->pc = 0x22FDA8u;
            goto label_22fda8;
        }
    }
    ctx->pc = 0x22FD90u;
    // 0x22fd90: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x22fd90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x22fd94: 0x26d0cdf0  addiu       $s0, $s6, -0x3210
    ctx->pc = 0x22fd94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 4294954480));
    // 0x22fd98: 0xc08baa4  jal         func_22EA90
    ctx->pc = 0x22FD98u;
    SET_GPR_U32(ctx, 31, 0x22FDA0u);
    ctx->pc = 0x22FD9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FD98u;
    // 0x22fd9c: 0x2484a4e0  addiu       $a0, $a0, -0x5B20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22EA90u, 0x22FD98u, 0x22FDA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FDA0u;
label_22fda0:
    // 0x22fda0: 0x10000098  b           . + 4 + (0x98 << 2)
    ctx->pc = 0x22FDA0u;
    {
        const bool branch_taken_0x22fda0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FDA0u;
        // 0x22fda4: 0xae120000  sw          $s2, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fda0) {
            ctx->pc = 0x230004u;
            goto label_230004;
        }
    }
    ctx->pc = 0x22FDA8u;
label_22fda8:
    // 0x22fda8: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x22fda8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x22fdac: 0x90e30000  lbu         $v1, 0x0($a3)
    ctx->pc = 0x22fdacu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x22fdb0: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x22fdb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x22fdb4: 0x8204000f  lb          $a0, 0xF($s0)
    ctx->pc = 0x22fdb4u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 15)));
    // 0x22fdb8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x22fdb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x22fdbc: 0x9205000f  lbu         $a1, 0xF($s0)
    ctx->pc = 0x22fdbcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 15)));
    // 0x22fdc0: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x22fdc0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22fdc4: 0xa603000c  sh          $v1, 0xC($s0)
    ctx->pc = 0x22fdc4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x22fdc8: 0x14910005  bne         $a0, $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x22FDC8u;
    {
        const bool branch_taken_0x22fdc8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 17));
        ctx->pc = 0x22FDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FDC8u;
        // 0x22fdcc: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fdc8) {
            ctx->pc = 0x22FDE0u;
            goto label_22fde0;
        }
    }
    ctx->pc = 0x22FDD0u;
    // 0x22fdd0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x22fdd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x22fdd4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x22FDD4u;
    {
        const bool branch_taken_0x22fdd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FDD4u;
        // 0x22fdd8: 0x24420120  addiu       $v0, $v0, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fdd4) {
            ctx->pc = 0x22FDF0u;
            goto label_22fdf0;
        }
    }
    ctx->pc = 0x22FDDCu;
    // 0x22fddc: 0x0  nop
    ctx->pc = 0x22fddcu;
    // NOP
label_22fde0:
    // 0x22fde0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x22fde0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x22fde4: 0x2442011c  addiu       $v0, $v0, 0x11C
    ctx->pc = 0x22fde4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 284));
    // 0x22fde8: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x22fde8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x22fdec: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x22fdecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_22fdf0:
    // 0x22fdf0: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x22fdf0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x22fdf4: 0x51600  sll         $v0, $a1, 24
    ctx->pc = 0x22fdf4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x22fdf8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x22fdf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22fdfc: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x22fdfcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x22fe00: 0x1443000f  bne         $v0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x22FE00u;
    {
        const bool branch_taken_0x22fe00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x22FE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FE00u;
        // 0x22fe04: 0x8e63cdf8  lw          $v1, -0x3208($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294954488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fe00) {
            ctx->pc = 0x22FE40u;
            goto label_22fe40;
        }
    }
    ctx->pc = 0x22FE08u;
    // 0x22fe08: 0x8e62cdf8  lw          $v0, -0x3208($s3)
    ctx->pc = 0x22fe08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294954488)));
    // 0x22fe0c: 0x90460009  lbu         $a2, 0x9($v0)
    ctx->pc = 0x22fe0cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 9)));
    // 0x22fe10: 0x9045000b  lbu         $a1, 0xB($v0)
    ctx->pc = 0x22fe10u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 11)));
    // 0x22fe14: 0x9044000a  lbu         $a0, 0xA($v0)
    ctx->pc = 0x22fe14u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x22fe18: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x22fe18u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
    // 0x22fe1c: 0x90430008  lbu         $v1, 0x8($v0)
    ctx->pc = 0x22fe1cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x22fe20: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x22fe20u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x22fe24: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x22fe24u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x22fe28: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x22fe28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x22fe2c: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x22fe2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x22fe30: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x22fe30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x22fe34: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x22FE34u;
    {
        const bool branch_taken_0x22fe34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FE34u;
        // 0x22fe38: 0xae830000  sw          $v1, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fe34) {
            ctx->pc = 0x22FE7Cu;
            goto label_22fe7c;
        }
    }
    ctx->pc = 0x22FE3Cu;
    // 0x22fe3c: 0x0  nop
    ctx->pc = 0x22fe3cu;
    // NOP
label_22fe40:
    // 0x22fe40: 0x90660009  lbu         $a2, 0x9($v1)
    ctx->pc = 0x22fe40u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 9)));
    // 0x22fe44: 0x9065000b  lbu         $a1, 0xB($v1)
    ctx->pc = 0x22fe44u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 11)));
    // 0x22fe48: 0x9064000a  lbu         $a0, 0xA($v1)
    ctx->pc = 0x22fe48u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 10)));
    // 0x22fe4c: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x22fe4cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
    // 0x22fe50: 0x90620008  lbu         $v0, 0x8($v1)
    ctx->pc = 0x22fe50u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x22fe54: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x22fe54u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x22fe58: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x22fe58u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x22fe5c: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x22fe5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x22fe60: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x22fe60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x22fe64: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x22fe64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x22fe68: 0x244507ff  addiu       $a1, $v0, 0x7FF
    ctx->pc = 0x22fe68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2047));
    // 0x22fe6c: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x22fe6cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x22fe70: 0xa3100b  movn        $v0, $a1, $v1
    ctx->pc = 0x22fe70u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x22fe74: 0x212c3  sra         $v0, $v0, 11
    ctx->pc = 0x22fe74u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 11));
    // 0x22fe78: 0xa6a20000  sh          $v0, 0x0($s5)
    ctx->pc = 0x22fe78u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 0), (uint16_t)GPR_U32(ctx, 2));
label_22fe7c:
    // 0x22fe7c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x22FE7Cu;
    {
        const bool branch_taken_0x22fe7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FE7Cu;
        // 0x22fe80: 0x24110003  addiu       $s1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fe7c) {
            ctx->pc = 0x22FE9Cu;
            goto label_22fe9c;
        }
    }
    ctx->pc = 0x22FE84u;
    // 0x22fe84: 0x0  nop
    ctx->pc = 0x22fe84u;
    // NOP
label_22fe88:
    // 0x22fe88: 0xc08beb0  jal         func_22FAC0
    ctx->pc = 0x22FE88u;
    SET_GPR_U32(ctx, 31, 0x22FE90u);
    ctx->pc = 0x22FE8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FE88u;
    // 0x22fe8c: 0xaec2cdf0  sw          $v0, -0x3210($s6) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 22), 4294954480), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FAC0u, 0x22FE88u, 0x22FE90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FE90u;
label_22fe90:
    // 0x22fe90: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x22FE90u;
    {
        const bool branch_taken_0x22fe90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22fe90) {
            ctx->pc = 0x22FFA8u;
            goto label_22ffa8;
        }
    }
    ctx->pc = 0x22FE98u;
label_22fe98:
    // 0x22fe98: 0x3c17004c  lui         $s7, 0x4C
    ctx->pc = 0x22fe98u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)76 << 16));
label_22fe9c:
    // 0x22fe9c: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x22fe9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
    // 0x22fea0: 0x8c62cdfc  lw          $v0, -0x3204($v1)
    ctx->pc = 0x22fea0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4BCDFCu));
    // 0x22fea4: 0x2a240  sll         $s4, $v0, 9
    ctx->pc = 0x22fea4u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 2), 9));
    // 0x22fea8: 0x234982a  slt         $s3, $s1, $s4
    ctx->pc = 0x22fea8u;
    SET_GPR_U64(ctx, 19, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x22feac: 0x12600042  beqz        $s3, . + 4 + (0x42 << 2)
    ctx->pc = 0x22FEACu;
    {
        const bool branch_taken_0x22feac = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FEACu;
        // 0x22feb0: 0x3c02004c  lui         $v0, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22feac) {
            ctx->pc = 0x22FFB8u;
            goto label_22ffb8;
        }
    }
    ctx->pc = 0x22FEB4u;
    // 0x22feb4: 0x3c15004c  lui         $s5, 0x4C
    ctx->pc = 0x22feb4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)76 << 16));
    // 0x22feb8: 0x26b2cde4  addiu       $s2, $s5, -0x321C
    ctx->pc = 0x22feb8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), 4294954468));
    // 0x22febc: 0x8203000f  lb          $v1, 0xF($s0)
    ctx->pc = 0x22febcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 15)));
label_22fec0:
    // 0x22fec0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x22fec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22fec4: 0x14620016  bne         $v1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x22FEC4u;
    {
        const bool branch_taken_0x22fec4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x22FEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FEC4u;
        // 0x22fec8: 0x8ee3cdf8  lw          $v1, -0x3208($s7) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294954488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fec4) {
            ctx->pc = 0x22FF20u;
            goto label_22ff20;
        }
    }
    ctx->pc = 0x22FECCu;
    // 0x22fecc: 0x8ee2cdf8  lw          $v0, -0x3208($s7)
    ctx->pc = 0x22feccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294954488)));
    // 0x22fed0: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x22fed0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x22fed4: 0x8e480000  lw          $t0, 0x0($s2)
    ctx->pc = 0x22fed4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x22fed8: 0x2a0482d  daddu       $t1, $s5, $zero
    ctx->pc = 0x22fed8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22fedc: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x22fedcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x22fee0: 0x90860001  lbu         $a2, 0x1($a0)
    ctx->pc = 0x22fee0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x22fee4: 0x83880  sll         $a3, $t0, 2
    ctx->pc = 0x22fee4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x22fee8: 0x90850003  lbu         $a1, 0x3($a0)
    ctx->pc = 0x22fee8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x22feec: 0xfe3821  addu        $a3, $a3, $fp
    ctx->pc = 0x22feecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 30)));
    // 0x22fef0: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x22fef0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x22fef4: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x22fef4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
    // 0x22fef8: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x22fef8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x22fefc: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x22fefcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x22ff00: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x22ff00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x22ff04: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x22ff04u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x22ff08: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x22ff08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x22ff0c: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x22ff0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x22ff10: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x22ff10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x22ff14: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x22ff14u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x22ff18: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x22FF18u;
    {
        const bool branch_taken_0x22ff18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FF18u;
        // 0x22ff1c: 0xae480000  sw          $t0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ff18) {
            ctx->pc = 0x22FF84u;
            goto label_22ff84;
        }
    }
    ctx->pc = 0x22FF20u;
label_22ff20:
    // 0x22ff20: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x22ff20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x22ff24: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x22ff24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x22ff28: 0x90460001  lbu         $a2, 0x1($v0)
    ctx->pc = 0x22ff28u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x22ff2c: 0x90450003  lbu         $a1, 0x3($v0)
    ctx->pc = 0x22ff2cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x22ff30: 0x90440002  lbu         $a0, 0x2($v0)
    ctx->pc = 0x22ff30u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x22ff34: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x22ff34u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
    // 0x22ff38: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x22ff38u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22ff3c: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x22ff3cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x22ff40: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x22ff40u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x22ff44: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x22ff44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x22ff48: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x22ff48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x22ff4c: 0xc08c728  jal         func_231CA0
    ctx->pc = 0x22FF4Cu;
    SET_GPR_U32(ctx, 31, 0x22FF54u);
    ctx->pc = 0x22FF50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FF4Cu;
    // 0x22ff50: 0x642025  or          $a0, $v1, $a0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231CA0u, 0x22FF4Cu, 0x22FF54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FF54u;
label_22ff54:
    // 0x22ff54: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x22ff54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ff58: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x22ff58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x22ff5c: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x22ff5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x22ff60: 0x14400021  bnez        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x22FF60u;
    {
        const bool branch_taken_0x22ff60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22FF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FF60u;
        // 0x22ff64: 0x2a0482d  daddu       $t1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ff60) {
            ctx->pc = 0x22FFE8u;
            goto label_22ffe8;
        }
    }
    ctx->pc = 0x22FF68u;
    // 0x22ff68: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x22ff68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x22ff6c: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x22ff6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22ff70: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x22ff70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x22ff74: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x22ff74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x22ff78: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x22ff78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x22ff7c: 0xa4440000  sh          $a0, 0x0($v0)
    ctx->pc = 0x22ff7cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x22ff80: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x22ff80u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_22ff84:
    // 0x22ff84: 0x8d22cde4  lw          $v0, -0x321C($t1)
    ctx->pc = 0x22ff84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4294954468)));
    // 0x22ff88: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x22ff88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x22ff8c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x22ff8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x22ff90: 0x5040ffbd  beql        $v0, $zero, . + 4 + (-0x43 << 2)
    ctx->pc = 0x22FF90u;
    {
        const bool branch_taken_0x22ff90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22ff90) {
            ctx->pc = 0x22FF94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22FF90u;
            // 0x22ff94: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22FE88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22fe88;
        }
    }
    ctx->pc = 0x22FF98u;
    // 0x22ff98: 0x26310002  addiu       $s1, $s1, 0x2
    ctx->pc = 0x22ff98u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
    // 0x22ff9c: 0x234982a  slt         $s3, $s1, $s4
    ctx->pc = 0x22ff9cu;
    SET_GPR_U64(ctx, 19, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x22ffa0: 0x5660ffc7  bnel        $s3, $zero, . + 4 + (-0x39 << 2)
    ctx->pc = 0x22FFA0u;
    {
        const bool branch_taken_0x22ffa0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x22ffa0) {
            ctx->pc = 0x22FFA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22FFA0u;
            // 0x22ffa4: 0x8203000f  lb          $v1, 0xF($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 15)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22FEC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22fec0;
        }
    }
    ctx->pc = 0x22FFA8u;
label_22ffa8:
    // 0x22ffa8: 0x1660001e  bnez        $s3, . + 4 + (0x1E << 2)
    ctx->pc = 0x22FFA8u;
    {
        const bool branch_taken_0x22ffa8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x22FFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FFA8u;
        // 0x22ffac: 0x8ec2cdf0  lw          $v0, -0x3210($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294954480)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ffa8) {
            ctx->pc = 0x230024u;
            goto label_230024;
        }
    }
    ctx->pc = 0x22FFB0u;
    // 0x22ffb0: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x22ffb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x22ffb4: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x22ffb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
label_22ffb8:
    // 0x22ffb8: 0x2451cde8  addiu       $s1, $v0, -0x3218
    ctx->pc = 0x22ffb8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954472));
    // 0x22ffbc: 0x8c65cdfc  lw          $a1, -0x3204($v1)
    ctx->pc = 0x22ffbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294954492)));
    // 0x22ffc0: 0x8ee6cdf8  lw          $a2, -0x3208($s7)
    ctx->pc = 0x22ffc0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294954488)));
    // 0x22ffc4: 0xc08c344  jal         func_230D10
    ctx->pc = 0x22FFC4u;
    SET_GPR_U32(ctx, 31, 0x22FFCCu);
    ctx->pc = 0x22FFC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FFC4u;
    // 0x22ffc8: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230D10u, 0x22FFC4u, 0x22FFCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FFCCu;
label_22ffcc:
    // 0x22ffcc: 0x4430012  bgezl       $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x22FFCCu;
    {
        const bool branch_taken_0x22ffcc = (GPR_S64(ctx, 2) >= 0);
        if (branch_taken_0x22ffcc) {
            ctx->pc = 0x22FFD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22FFCCu;
            // 0x22ffd0: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x230018u;
            goto label_230018;
        }
    }
    ctx->pc = 0x22FFD4u;
    // 0x22ffd4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x22ffd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x22ffd8: 0xc08beb0  jal         func_22FAC0
    ctx->pc = 0x22FFD8u;
    SET_GPR_U32(ctx, 31, 0x22FFE0u);
    ctx->pc = 0x22FFDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FFD8u;
    // 0x22ffdc: 0xaec2cdf0  sw          $v0, -0x3210($s6) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 22), 4294954480), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FAC0u, 0x22FFD8u, 0x22FFE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FFE0u;
label_22ffe0:
    // 0x22ffe0: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x22FFE0u;
    {
        const bool branch_taken_0x22ffe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FFE0u;
        // 0x22ffe4: 0x8ec2cdf0  lw          $v0, -0x3210($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294954480)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ffe0) {
            ctx->pc = 0x230024u;
            goto label_230024;
        }
    }
    ctx->pc = 0x22FFE8u;
label_22ffe8:
    // 0x22ffe8: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x22ffe8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x22ffec: 0x26d0cdf0  addiu       $s0, $s6, -0x3210
    ctx->pc = 0x22ffecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 4294954480));
    // 0x22fff0: 0x2484a518  addiu       $a0, $a0, -0x5AE8
    ctx->pc = 0x22fff0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944024));
label_22fff4:
    // 0x22fff4: 0xc08baa4  jal         func_22EA90
    ctx->pc = 0x22FFF4u;
    SET_GPR_U32(ctx, 31, 0x22FFFCu);
    ctx->pc = 0x22EA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22EA90u, 0x22FFF4u, 0x22FFFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FFFCu;
label_22fffc:
    // 0x22fffc: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x22fffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x230000: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x230000u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_230004:
    // 0x230004: 0xc08beb0  jal         func_22FAC0
    ctx->pc = 0x230004u;
    SET_GPR_U32(ctx, 31, 0x23000Cu);
    ctx->pc = 0x22FAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FAC0u, 0x230004u, 0x23000Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23000Cu;
label_23000c:
    // 0x23000c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x23000Cu;
    {
        const bool branch_taken_0x23000c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23000Cu;
        // 0x230010: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23000c) {
            ctx->pc = 0x230024u;
            goto label_230024;
        }
    }
    ctx->pc = 0x230014u;
    // 0x230014: 0x0  nop
    ctx->pc = 0x230014u;
    // NOP
label_230018:
    // 0x230018: 0x80430001  lb          $v1, 0x1($v0)
    ctx->pc = 0x230018u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x23001c: 0xaec3cdf0  sw          $v1, -0x3210($s6)
    ctx->pc = 0x23001cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4294954480), GPR_U32(ctx, 3));
    // 0x230020: 0x8ec2cdf0  lw          $v0, -0x3210($s6)
    ctx->pc = 0x230020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294954480)));
label_230024:
    // 0x230024: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x230024u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x230028: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x230028u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x23002c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x23002cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x230030: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x230030u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x230034: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x230034u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x230038: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x230038u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23003c: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x23003cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x230040: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x230040u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x230044: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x230044u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x230048: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x230048u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x23004c: 0x3e00008  jr          $ra
    ctx->pc = 0x23004Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x230050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23004Cu;
        // 0x230050: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23004Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x230054u;
}
