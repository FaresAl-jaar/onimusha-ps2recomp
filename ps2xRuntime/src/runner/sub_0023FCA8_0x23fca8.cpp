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

// Function: sub_0023FCA8
// Address: 0x23fca8 - 0x23ff84
void sub_0023FCA8_0x23fca8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023FCA8_0x23fca8");
#endif

    switch (ctx->pc) {
        case 0x23fd00u: goto label_23fd00;
        case 0x23fd28u: goto label_23fd28;
        case 0x23fd4cu: goto label_23fd4c;
        case 0x23fd78u: goto label_23fd78;
        case 0x23fd90u: goto label_23fd90;
        case 0x23fdc8u: goto label_23fdc8;
        case 0x23fde8u: goto label_23fde8;
        case 0x23fe38u: goto label_23fe38;
        case 0x23fe48u: goto label_23fe48;
        case 0x23fe60u: goto label_23fe60;
        case 0x23fe78u: goto label_23fe78;
        case 0x23fe88u: goto label_23fe88;
        case 0x23fe98u: goto label_23fe98;
        case 0x23feb4u: goto label_23feb4;
        case 0x23ff08u: goto label_23ff08;
        case 0x23ff28u: goto label_23ff28;
        default: break;
    }

    ctx->pc = 0x23fca8u;

    // 0x23fca8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x23fca8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x23fcac: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x23fcacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x23fcb0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x23fcb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x23fcb4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x23fcb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23fcb8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x23fcb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x23fcbc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x23fcbcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23fcc0: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x23fcc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x23fcc4: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x23fcc4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23fcc8: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x23fcc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x23fccc: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x23fcccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x23fcd0: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x23fcd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x23fcd4: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x23fcd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x23fcd8: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x23fcd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x23fcdc: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x23fcdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x23fce0: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x23fce0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x23fce4: 0xafa60000  sw          $a2, 0x0($sp)
    ctx->pc = 0x23fce4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
    // 0x23fce8: 0xafa80004  sw          $t0, 0x4($sp)
    ctx->pc = 0x23fce8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 8));
    // 0x23fcec: 0x8e1e0010  lw          $fp, 0x10($s0)
    ctx->pc = 0x23fcecu;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x23fcf0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23FCF0u;
    {
        const bool branch_taken_0x23fcf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23FCF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FCF0u;
        // 0x23fcf4: 0x8e150004  lw          $s5, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fcf0) {
            ctx->pc = 0x23FD08u;
            goto label_23fd08;
        }
    }
    ctx->pc = 0x23FCF8u;
    // 0x23fcf8: 0xc08fad8  jal         func_23EB60
    ctx->pc = 0x23FCF8u;
    SET_GPR_U32(ctx, 31, 0x23FD00u);
    ctx->pc = 0x23FCFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23FCF8u;
    // 0x23fcfc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23EB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23EB60u, 0x23FCF8u, 0x23FD00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FD00u;
label_23fd00:
    // 0x23fd00: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x23FD00u;
    {
        const bool branch_taken_0x23fd00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23FD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FD00u;
        // 0x23fd04: 0xaec20000  sw          $v0, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fd00) {
            ctx->pc = 0x23FD0Cu;
            goto label_23fd0c;
        }
    }
    ctx->pc = 0x23FD08u;
label_23fd08:
    // 0x23fd08: 0xaec00000  sw          $zero, 0x0($s6)
    ctx->pc = 0x23fd08u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 0));
label_23fd0c:
    // 0x23fd0c: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x23fd0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x23fd10: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x23fd10u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23fd14: 0x27e182a  slt         $v1, $s3, $fp
    ctx->pc = 0x23fd14u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
    // 0x23fd18: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x23fd18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x23fd1c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x23fd1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x23fd20: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x23FD20u;
    {
        const bool branch_taken_0x23fd20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23FD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FD20u;
        // 0x23fd24: 0x84510034  lh          $s1, 0x34($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fd20) {
            ctx->pc = 0x23FD68u;
            goto label_23fd68;
        }
    }
    ctx->pc = 0x23FD28u;
label_23fd28:
    // 0x23fd28: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x23fd28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23fd2c: 0x138080  sll         $s0, $s3, 2
    ctx->pc = 0x23fd2cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x23fd30: 0x2031021  addu        $v0, $s0, $v1
    ctx->pc = 0x23fd30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x23fd34: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x23fd34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23fd38: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x23FD38u;
    {
        const bool branch_taken_0x23fd38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23FD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FD38u;
        // 0x23fd3c: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fd38) {
            ctx->pc = 0x23FD5Cu;
            goto label_23fd5c;
        }
    }
    ctx->pc = 0x23FD40u;
    // 0x23fd40: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x23fd40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23fd44: 0xc08fad8  jal         func_23EB60
    ctx->pc = 0x23FD44u;
    SET_GPR_U32(ctx, 31, 0x23FD4Cu);
    ctx->pc = 0x23FD48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23FD44u;
    // 0x23fd48: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23EB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23EB60u, 0x23FD44u, 0x23FD4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FD4Cu;
label_23fd4c:
    // 0x23fd4c: 0x2161821  addu        $v1, $s0, $s6
    ctx->pc = 0x23fd4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 22)));
    // 0x23fd50: 0x32240003  andi        $a0, $s1, 0x3
    ctx->pc = 0x23fd50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)3);
    // 0x23fd54: 0x441026  xor         $v0, $v0, $a0
    ctx->pc = 0x23fd54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 4));
    // 0x23fd58: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x23fd58u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_23fd5c:
    // 0x23fd5c: 0x27e102a  slt         $v0, $s3, $fp
    ctx->pc = 0x23fd5cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
    // 0x23fd60: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x23FD60u;
    {
        const bool branch_taken_0x23fd60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23FD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FD60u;
        // 0x23fd64: 0x118883  sra         $s1, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fd60) {
            ctx->pc = 0x23FD28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23fd28;
        }
    }
    ctx->pc = 0x23FD68u;
label_23fd68:
    // 0x23fd68: 0x3c0982d  daddu       $s3, $fp, $zero
    ctx->pc = 0x23fd68u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23fd6c: 0x2a620020  slti        $v0, $s3, 0x20
    ctx->pc = 0x23fd6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x23fd70: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x23FD70u;
    {
        const bool branch_taken_0x23fd70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23fd70) {
            ctx->pc = 0x23FDBCu;
            goto label_23fdbc;
        }
    }
    ctx->pc = 0x23FD78u;
label_23fd78:
    // 0x23fd78: 0x5aa0000d  blezl       $s5, . + 4 + (0xD << 2)
    ctx->pc = 0x23FD78u;
    {
        const bool branch_taken_0x23fd78 = (GPR_S64(ctx, 21) <= 0);
        if (branch_taken_0x23fd78) {
            ctx->pc = 0x23FD7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23FD78u;
            // 0x23fd7c: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23FDB0u;
            goto label_23fdb0;
        }
    }
    ctx->pc = 0x23FD80u;
    // 0x23fd80: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x23fd80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x23fd84: 0x2a0882d  daddu       $s1, $s5, $zero
    ctx->pc = 0x23fd84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23fd88: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x23fd88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x23fd8c: 0x0  nop
    ctx->pc = 0x23fd8cu;
    // NOP
label_23fd90:
    // 0x23fd90: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x23fd90u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x23fd94: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x23fd94u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x23fd98: 0x0  nop
    ctx->pc = 0x23fd98u;
    // NOP
    // 0x23fd9c: 0x0  nop
    ctx->pc = 0x23fd9cu;
    // NOP
    // 0x23fda0: 0x0  nop
    ctx->pc = 0x23fda0u;
    // NOP
    // 0x23fda4: 0x1620fffa  bnez        $s1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x23FDA4u;
    {
        const bool branch_taken_0x23fda4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x23FDA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FDA4u;
        // 0x23fda8: 0x24420080  addiu       $v0, $v0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fda4) {
            ctx->pc = 0x23FD90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23fd90;
        }
    }
    ctx->pc = 0x23FDACu;
    // 0x23fdac: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x23fdacu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_23fdb0:
    // 0x23fdb0: 0x2a620020  slti        $v0, $s3, 0x20
    ctx->pc = 0x23fdb0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x23fdb4: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x23FDB4u;
    {
        const bool branch_taken_0x23fdb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23fdb4) {
            ctx->pc = 0x23FD78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23fd78;
        }
    }
    ctx->pc = 0x23FDBCu;
label_23fdbc:
    // 0x23fdbc: 0x1bc0004d  blez        $fp, . + 4 + (0x4D << 2)
    ctx->pc = 0x23FDBCu;
    {
        const bool branch_taken_0x23fdbc = (GPR_S64(ctx, 30) <= 0);
        ctx->pc = 0x23FDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FDBCu;
        // 0x23fdc0: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fdbc) {
            ctx->pc = 0x23FEF4u;
            goto label_23fef4;
        }
    }
    ctx->pc = 0x23FDC4u;
    // 0x23fdc4: 0x0  nop
    ctx->pc = 0x23fdc4u;
    // NOP
label_23fdc8:
    // 0x23fdc8: 0x5aa00047  blezl       $s5, . + 4 + (0x47 << 2)
    ctx->pc = 0x23FDC8u;
    {
        const bool branch_taken_0x23fdc8 = (GPR_S64(ctx, 21) <= 0);
        if (branch_taken_0x23fdc8) {
            ctx->pc = 0x23FDCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23FDC8u;
            // 0x23fdcc: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23FEE8u;
            goto label_23fee8;
        }
    }
    ctx->pc = 0x23FDD0u;
    // 0x23fdd0: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x23fdd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x23fdd4: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x23fdd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x23fdd8: 0x2417003f  addiu       $s7, $zero, 0x3F
    ctx->pc = 0x23fdd8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x23fddc: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x23fddcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23fde0: 0x448021  addu        $s0, $v0, $a0
    ctx->pc = 0x23fde0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x23fde4: 0x2a0882d  daddu       $s1, $s5, $zero
    ctx->pc = 0x23fde4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_23fde8:
    // 0x23fde8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x23fde8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23fdec: 0x2831021  addu        $v0, $s4, $v1
    ctx->pc = 0x23fdecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x23fdf0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x23fdf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23fdf4: 0x10600034  beqz        $v1, . + 4 + (0x34 << 2)
    ctx->pc = 0x23FDF4u;
    {
        const bool branch_taken_0x23fdf4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23FDF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FDF4u;
        // 0x23fdf8: 0x2961021  addu        $v0, $s4, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fdf4) {
            ctx->pc = 0x23FEC8u;
            goto label_23fec8;
        }
    }
    ctx->pc = 0x23FDFCu;
    // 0x23fdfc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x23fdfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23fe00: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x23fe00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23fe04: 0x50830014  beql        $a0, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x23FE04u;
    {
        const bool branch_taken_0x23fe04 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x23fe04) {
            ctx->pc = 0x23FE08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23FE04u;
            // 0x23fe08: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23FE58u;
            goto label_23fe58;
        }
    }
    ctx->pc = 0x23FE0Cu;
    // 0x23fe0c: 0x50800008  beql        $a0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x23FE0Cu;
    {
        const bool branch_taken_0x23fe0c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x23fe0c) {
            ctx->pc = 0x23FE10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23FE0Cu;
            // 0x23fe10: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23FE30u;
            goto label_23fe30;
        }
    }
    ctx->pc = 0x23FE14u;
    // 0x23fe14: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x23fe14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x23fe18: 0x10820023  beq         $a0, $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x23FE18u;
    {
        const bool branch_taken_0x23fe18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x23FE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FE18u;
        // 0x23fe1c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fe18) {
            ctx->pc = 0x23FEA8u;
            goto label_23fea8;
        }
    }
    ctx->pc = 0x23FE20u;
    // 0x23fe20: 0x10820017  beq         $a0, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x23FE20u;
    {
        const bool branch_taken_0x23fe20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x23FE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FE20u;
        // 0x23fe24: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fe20) {
            ctx->pc = 0x23FE80u;
            goto label_23fe80;
        }
    }
    ctx->pc = 0x23FE28u;
    // 0x23fe28: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x23FE28u;
    {
        const bool branch_taken_0x23fe28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23FE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FE28u;
        // 0x23fe2c: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fe28) {
            ctx->pc = 0x23FED8u;
            goto label_23fed8;
        }
    }
    ctx->pc = 0x23FE30u;
label_23fe30:
    // 0x23fe30: 0xc08fad8  jal         func_23EB60
    ctx->pc = 0x23FE30u;
    SET_GPR_U32(ctx, 31, 0x23FE38u);
    ctx->pc = 0x23FE34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23FE30u;
    // 0x23fe34: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23EB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23EB60u, 0x23FE30u, 0x23FE38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FE38u;
label_23fe38:
    // 0x23fe38: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x23fe38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23fe3c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x23fe3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x23fe40: 0xc08fad8  jal         func_23EB60
    ctx->pc = 0x23FE40u;
    SET_GPR_U32(ctx, 31, 0x23FE48u);
    ctx->pc = 0x23FE44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23FE40u;
    // 0x23fe44: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23EB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23EB60u, 0x23FE40u, 0x23FE48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FE48u;
label_23fe48:
    // 0x23fe48: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x23fe48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23fe4c: 0xae020080  sw          $v0, 0x80($s0)
    ctx->pc = 0x23fe4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 2));
    // 0x23fe50: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x23FE50u;
    {
        const bool branch_taken_0x23fe50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23FE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FE50u;
        // 0x23fe54: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fe50) {
            ctx->pc = 0x23FE70u;
            goto label_23fe70;
        }
    }
    ctx->pc = 0x23FE58u;
label_23fe58:
    // 0x23fe58: 0xc08fad8  jal         func_23EB60
    ctx->pc = 0x23FE58u;
    SET_GPR_U32(ctx, 31, 0x23FE60u);
    ctx->pc = 0x23FE5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23FE58u;
    // 0x23fe5c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23EB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23EB60u, 0x23FE58u, 0x23FE60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FE60u;
label_23fe60:
    // 0x23fe60: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x23fe60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23fe64: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x23fe64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x23fe68: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x23fe68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x23fe6c: 0xae020080  sw          $v0, 0x80($s0)
    ctx->pc = 0x23fe6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 2));
label_23fe70:
    // 0x23fe70: 0xc08fad8  jal         func_23EB60
    ctx->pc = 0x23FE70u;
    SET_GPR_U32(ctx, 31, 0x23FE78u);
    ctx->pc = 0x23FE74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23FE70u;
    // 0x23fe74: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23EB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23EB60u, 0x23FE70u, 0x23FE78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FE78u;
label_23fe78:
    // 0x23fe78: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x23FE78u;
    {
        const bool branch_taken_0x23fe78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23FE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FE78u;
        // 0x23fe7c: 0xae020100  sw          $v0, 0x100($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fe78) {
            ctx->pc = 0x23FED8u;
            goto label_23fed8;
        }
    }
    ctx->pc = 0x23FE80u;
label_23fe80:
    // 0x23fe80: 0xc08fad8  jal         func_23EB60
    ctx->pc = 0x23FE80u;
    SET_GPR_U32(ctx, 31, 0x23FE88u);
    ctx->pc = 0x23FE84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23FE80u;
    // 0x23fe84: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23EB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23EB60u, 0x23FE80u, 0x23FE88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FE88u;
label_23fe88:
    // 0x23fe88: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x23fe88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23fe8c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x23fe8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x23fe90: 0xc08fad8  jal         func_23EB60
    ctx->pc = 0x23FE90u;
    SET_GPR_U32(ctx, 31, 0x23FE98u);
    ctx->pc = 0x23FE94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23FE90u;
    // 0x23fe94: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23EB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23EB60u, 0x23FE90u, 0x23FE98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FE98u;
label_23fe98:
    // 0x23fe98: 0xae020080  sw          $v0, 0x80($s0)
    ctx->pc = 0x23fe98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 2));
    // 0x23fe9c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x23FE9Cu;
    {
        const bool branch_taken_0x23fe9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23FEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FE9Cu;
        // 0x23fea0: 0xae020100  sw          $v0, 0x100($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fe9c) {
            ctx->pc = 0x23FED4u;
            goto label_23fed4;
        }
    }
    ctx->pc = 0x23FEA4u;
    // 0x23fea4: 0x0  nop
    ctx->pc = 0x23fea4u;
    // NOP
label_23fea8:
    // 0x23fea8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x23fea8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23feac: 0xc08fad8  jal         func_23EB60
    ctx->pc = 0x23FEACu;
    SET_GPR_U32(ctx, 31, 0x23FEB4u);
    ctx->pc = 0x23FEB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23FEACu;
    // 0x23feb0: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23EB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23EB60u, 0x23FEACu, 0x23FEB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FEB4u;
label_23feb4:
    // 0x23feb4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x23feb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x23feb8: 0xae020100  sw          $v0, 0x100($s0)
    ctx->pc = 0x23feb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 2));
    // 0x23febc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x23FEBCu;
    {
        const bool branch_taken_0x23febc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23FEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FEBCu;
        // 0x23fec0: 0xae020080  sw          $v0, 0x80($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23febc) {
            ctx->pc = 0x23FED4u;
            goto label_23fed4;
        }
    }
    ctx->pc = 0x23FEC4u;
    // 0x23fec4: 0x0  nop
    ctx->pc = 0x23fec4u;
    // NOP
label_23fec8:
    // 0x23fec8: 0xae170100  sw          $s7, 0x100($s0)
    ctx->pc = 0x23fec8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 23));
    // 0x23fecc: 0xae170080  sw          $s7, 0x80($s0)
    ctx->pc = 0x23feccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 23));
    // 0x23fed0: 0xae170000  sw          $s7, 0x0($s0)
    ctx->pc = 0x23fed0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 23));
label_23fed4:
    // 0x23fed4: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x23fed4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_23fed8:
    // 0x23fed8: 0x26100180  addiu       $s0, $s0, 0x180
    ctx->pc = 0x23fed8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 384));
    // 0x23fedc: 0x1620ffc2  bnez        $s1, . + 4 + (-0x3E << 2)
    ctx->pc = 0x23FEDCu;
    {
        const bool branch_taken_0x23fedc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x23FEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FEDCu;
        // 0x23fee0: 0x26940080  addiu       $s4, $s4, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fedc) {
            ctx->pc = 0x23FDE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23fde8;
        }
    }
    ctx->pc = 0x23FEE4u;
    // 0x23fee4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x23fee4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_23fee8:
    // 0x23fee8: 0x27e102a  slt         $v0, $s3, $fp
    ctx->pc = 0x23fee8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
    // 0x23feec: 0x1440ffb6  bnez        $v0, . + 4 + (-0x4A << 2)
    ctx->pc = 0x23FEECu;
    {
        const bool branch_taken_0x23feec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23feec) {
            ctx->pc = 0x23FDC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23fdc8;
        }
    }
    ctx->pc = 0x23FEF4u;
label_23fef4:
    // 0x23fef4: 0x3c0982d  daddu       $s3, $fp, $zero
    ctx->pc = 0x23fef4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23fef8: 0x2a620020  slti        $v0, $s3, 0x20
    ctx->pc = 0x23fef8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x23fefc: 0x50400016  beql        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x23FEFCu;
    {
        const bool branch_taken_0x23fefc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23fefc) {
            ctx->pc = 0x23FF00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23FEFCu;
            // 0x23ff00: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23FF58u;
            goto label_23ff58;
        }
    }
    ctx->pc = 0x23FF04u;
    // 0x23ff04: 0x0  nop
    ctx->pc = 0x23ff04u;
    // NOP
label_23ff08:
    // 0x23ff08: 0x5aa0000f  blezl       $s5, . + 4 + (0xF << 2)
    ctx->pc = 0x23FF08u;
    {
        const bool branch_taken_0x23ff08 = (GPR_S64(ctx, 21) <= 0);
        if (branch_taken_0x23ff08) {
            ctx->pc = 0x23FF0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23FF08u;
            // 0x23ff0c: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23FF48u;
            goto label_23ff48;
        }
    }
    ctx->pc = 0x23FF10u;
    // 0x23ff10: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x23ff10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x23ff14: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x23ff14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x23ff18: 0x2403003f  addiu       $v1, $zero, 0x3F
    ctx->pc = 0x23ff18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x23ff1c: 0x2a0882d  daddu       $s1, $s5, $zero
    ctx->pc = 0x23ff1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ff20: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x23ff20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x23ff24: 0x0  nop
    ctx->pc = 0x23ff24u;
    // NOP
label_23ff28:
    // 0x23ff28: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x23ff28u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x23ff2c: 0xac430100  sw          $v1, 0x100($v0)
    ctx->pc = 0x23ff2cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 256), GPR_U32(ctx, 3));
    // 0x23ff30: 0xac430080  sw          $v1, 0x80($v0)
    ctx->pc = 0x23ff30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 3));
    // 0x23ff34: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x23ff34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x23ff38: 0x0  nop
    ctx->pc = 0x23ff38u;
    // NOP
    // 0x23ff3c: 0x1620fffa  bnez        $s1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x23FF3Cu;
    {
        const bool branch_taken_0x23ff3c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x23FF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FF3Cu;
        // 0x23ff40: 0x24420180  addiu       $v0, $v0, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ff3c) {
            ctx->pc = 0x23FF28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23ff28;
        }
    }
    ctx->pc = 0x23FF44u;
    // 0x23ff44: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x23ff44u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_23ff48:
    // 0x23ff48: 0x2a620020  slti        $v0, $s3, 0x20
    ctx->pc = 0x23ff48u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x23ff4c: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x23FF4Cu;
    {
        const bool branch_taken_0x23ff4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23ff4c) {
            ctx->pc = 0x23FF08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23ff08;
        }
    }
    ctx->pc = 0x23FF54u;
    // 0x23ff54: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x23ff54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_23ff58:
    // 0x23ff58: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x23ff58u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x23ff5c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x23ff5cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23ff60: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x23ff60u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23ff64: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x23ff64u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23ff68: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x23ff68u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23ff6c: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x23ff6cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x23ff70: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x23ff70u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23ff74: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x23ff74u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x23ff78: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x23ff78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x23ff7c: 0x3e00008  jr          $ra
    ctx->pc = 0x23FF7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23FF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FF7Cu;
        // 0x23ff80: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23FF7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23FF84u;
}
