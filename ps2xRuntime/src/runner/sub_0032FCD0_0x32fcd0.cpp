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

// Function: sub_0032FCD0
// Address: 0x32fcd0 - 0x32ff5c
void sub_0032FCD0_0x32fcd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032FCD0_0x32fcd0");
#endif

    switch (ctx->pc) {
        case 0x32fcfcu: goto label_32fcfc;
        case 0x32fd64u: goto label_32fd64;
        case 0x32fd8cu: goto label_32fd8c;
        case 0x32fdecu: goto label_32fdec;
        case 0x32fe68u: goto label_32fe68;
        case 0x32fe9cu: goto label_32fe9c;
        case 0x32feb4u: goto label_32feb4;
        case 0x32ff30u: goto label_32ff30;
        case 0x32ff40u: goto label_32ff40;
        default: break;
    }

    ctx->pc = 0x32fcd0u;

    // 0x32fcd0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x32fcd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x32fcd4: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x32fcd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x32fcd8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x32fcd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x32fcdc: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x32fcdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x32fce0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x32fce0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x32fce4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x32fce4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32fce8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x32fce8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x32fcec: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x32fcecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32fcf0: 0xa0801ca8  sb          $zero, 0x1CA8($a0)
    ctx->pc = 0x32fcf0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 7336), (uint8_t)GPR_U32(ctx, 0));
    // 0x32fcf4: 0xc0ed6cc  jal         func_3B5B30
    ctx->pc = 0x32FCF4u;
    SET_GPR_U32(ctx, 31, 0x32FCFCu);
    ctx->pc = 0x32FCF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32FCF4u;
    // 0x32fcf8: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B5B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B5B30u, 0x32FCF4u, 0x32FCFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32FCFCu;
label_32fcfc:
    // 0x32fcfc: 0x92230002  lbu         $v1, 0x2($s1)
    ctx->pc = 0x32fcfcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x32fd00: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x32fd00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x32fd04: 0x10620068  beq         $v1, $v0, . + 4 + (0x68 << 2)
    ctx->pc = 0x32FD04u;
    {
        const bool branch_taken_0x32fd04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x32FD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FD04u;
        // 0x32fd08: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32fd04) {
            ctx->pc = 0x32FEA8u;
            goto label_32fea8;
        }
    }
    ctx->pc = 0x32FD0Cu;
    // 0x32fd0c: 0x1062003a  beq         $v1, $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x32FD0Cu;
    {
        const bool branch_taken_0x32fd0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x32fd0c) {
            ctx->pc = 0x32FDF8u;
            goto label_32fdf8;
        }
    }
    ctx->pc = 0x32FD14u;
    // 0x32fd14: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x32FD14u;
    {
        const bool branch_taken_0x32fd14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x32fd14) {
            ctx->pc = 0x32FD28u;
            goto label_32fd28;
        }
    }
    ctx->pc = 0x32FD1Cu;
    // 0x32fd1c: 0x10000088  b           . + 4 + (0x88 << 2)
    ctx->pc = 0x32FD1Cu;
    {
        const bool branch_taken_0x32fd1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32fd1c) {
            ctx->pc = 0x32FF40u;
            goto label_32ff40;
        }
    }
    ctx->pc = 0x32FD24u;
    // 0x32fd24: 0x0  nop
    ctx->pc = 0x32fd24u;
    // NOP
label_32fd28:
    // 0x32fd28: 0x92220001  lbu         $v0, 0x1($s1)
    ctx->pc = 0x32fd28u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x32fd2c: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x32fd2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x32fd30: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x32FD30u;
    {
        const bool branch_taken_0x32fd30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32fd30) {
            ctx->pc = 0x32FD80u;
            goto label_32fd80;
        }
    }
    ctx->pc = 0x32FD38u;
    // 0x32fd38: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x32fd38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x32fd3c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x32fd3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x32fd40: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x32fd40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x32fd44: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x32FD44u;
    {
        const bool branch_taken_0x32fd44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x32fd44) {
            ctx->pc = 0x32FD80u;
            goto label_32fd80;
        }
    }
    ctx->pc = 0x32FD4Cu;
    // 0x32fd4c: 0x86220024  lh          $v0, 0x24($s1)
    ctx->pc = 0x32fd4cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x32fd50: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x32fd50u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x32fd54: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x32FD54u;
    {
        const bool branch_taken_0x32fd54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x32FD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FD54u;
        // 0x32fd58: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32fd54) {
            ctx->pc = 0x32FD80u;
            goto label_32fd80;
        }
    }
    ctx->pc = 0x32FD5Cu;
    // 0x32fd5c: 0xc0ed6d4  jal         func_3B5B50
    ctx->pc = 0x32FD5Cu;
    SET_GPR_U32(ctx, 31, 0x32FD64u);
    ctx->pc = 0x3B5B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B5B50u, 0x32FD5Cu, 0x32FD64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32FD64u;
label_32fd64:
    // 0x32fd64: 0x3c01008f  lui         $at, 0x8F
    ctx->pc = 0x32fd64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)143 << 16));
    // 0x32fd68: 0x8c22ea24  lw          $v0, -0x15DC($at)
    ctx->pc = 0x32fd68u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x8EEA24u));
    // 0x32fd6c: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x32fd6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x32fd70: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x32FD70u;
    {
        const bool branch_taken_0x32fd70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32FD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FD70u;
        // 0x32fd74: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32fd70) {
            ctx->pc = 0x32FD80u;
            goto label_32fd80;
        }
    }
    ctx->pc = 0x32FD78u;
    // 0x32fd78: 0x10000071  b           . + 4 + (0x71 << 2)
    ctx->pc = 0x32FD78u;
    {
        const bool branch_taken_0x32fd78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32FD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FD78u;
        // 0x32fd7c: 0xa2220002  sb          $v0, 0x2($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32fd78) {
            ctx->pc = 0x32FF40u;
            goto label_32ff40;
        }
    }
    ctx->pc = 0x32FD80u;
label_32fd80:
    // 0x32fd80: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x32fd80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32fd84: 0xc0cbfd8  jal         func_32FF60
    ctx->pc = 0x32FD84u;
    SET_GPR_U32(ctx, 31, 0x32FD8Cu);
    ctx->pc = 0x32FD88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32FD84u;
    // 0x32fd88: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32FF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32FF60u, 0x32FD84u, 0x32FD8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32FD8Cu;
label_32fd8c:
    // 0x32fd8c: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x32fd8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x32fd90: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x32fd90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32fd94: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x32fd94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x32fd98: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x32FD98u;
    {
        const bool branch_taken_0x32fd98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32fd98) {
            ctx->pc = 0x32FDF0u;
            goto label_32fdf0;
        }
    }
    ctx->pc = 0x32FDA0u;
    // 0x32fda0: 0x9223001c  lbu         $v1, 0x1C($s1)
    ctx->pc = 0x32fda0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x32fda4: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x32FDA4u;
    {
        const bool branch_taken_0x32fda4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x32FDA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FDA4u;
        // 0x32fda8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32fda4) {
            ctx->pc = 0x32FDD8u;
            goto label_32fdd8;
        }
    }
    ctx->pc = 0x32FDACu;
    // 0x32fdac: 0x9082000d  lbu         $v0, 0xD($a0)
    ctx->pc = 0x32fdacu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 13)));
    // 0x32fdb0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x32FDB0u;
    {
        const bool branch_taken_0x32fdb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32fdb0) {
            ctx->pc = 0x32FDC8u;
            goto label_32fdc8;
        }
    }
    ctx->pc = 0x32FDB8u;
    // 0x32fdb8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x32fdb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x32fdbc: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x32fdbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x32fdc0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x32FDC0u;
    {
        const bool branch_taken_0x32fdc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32FDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FDC0u;
        // 0x32fdc4: 0x622825  or          $a1, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32fdc0) {
            ctx->pc = 0x32FDD8u;
            goto label_32fdd8;
        }
    }
    ctx->pc = 0x32FDC8u;
label_32fdc8:
    // 0x32fdc8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x32fdc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x32fdcc: 0x3c020103  lui         $v0, 0x103
    ctx->pc = 0x32fdccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)259 << 16));
    // 0x32fdd0: 0x622825  or          $a1, $v1, $v0
    ctx->pc = 0x32fdd0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x32fdd4: 0x0  nop
    ctx->pc = 0x32fdd4u;
    // NOP
label_32fdd8:
    // 0x32fdd8: 0x8e260020  lw          $a2, 0x20($s1)
    ctx->pc = 0x32fdd8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x32fddc: 0x3c040092  lui         $a0, 0x92
    ctx->pc = 0x32fddcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)146 << 16));
    // 0x32fde0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x32fde0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32fde4: 0xc0dc810  jal         func_372040
    ctx->pc = 0x32FDE4u;
    SET_GPR_U32(ctx, 31, 0x32FDECu);
    ctx->pc = 0x32FDE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32FDE4u;
    // 0x32fde8: 0x24841400  addiu       $a0, $a0, 0x1400 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x372040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x372040u, 0x32FDE4u, 0x32FDECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32FDECu;
label_32fdec:
    // 0x32fdec: 0x0  nop
    ctx->pc = 0x32fdecu;
    // NOP
label_32fdf0:
    // 0x32fdf0: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x32FDF0u;
    {
        const bool branch_taken_0x32fdf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32FDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FDF0u;
        // 0x32fdf4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32fdf0) {
            ctx->pc = 0x32FF48u;
            goto label_32ff48;
        }
    }
    ctx->pc = 0x32FDF8u;
label_32fdf8:
    // 0x32fdf8: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x32fdf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x32fdfc: 0xa2220002  sb          $v0, 0x2($s1)
    ctx->pc = 0x32fdfcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x32fe00: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x32fe00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x32fe04: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x32fe04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x32fe08: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x32fe08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x32fe0c: 0x10a20010  beq         $a1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x32FE0Cu;
    {
        const bool branch_taken_0x32fe0c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x32FE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FE0Cu;
        // 0x32fe10: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32fe0c) {
            ctx->pc = 0x32FE50u;
            goto label_32fe50;
        }
    }
    ctx->pc = 0x32FE14u;
    // 0x32fe14: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x32fe14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x32fe18: 0x10a20009  beq         $a1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x32FE18u;
    {
        const bool branch_taken_0x32fe18 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x32FE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FE18u;
        // 0x32fe1c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32fe18) {
            ctx->pc = 0x32FE40u;
            goto label_32fe40;
        }
    }
    ctx->pc = 0x32FE20u;
    // 0x32fe20: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x32FE20u;
    {
        const bool branch_taken_0x32fe20 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x32fe20) {
            ctx->pc = 0x32FE30u;
            goto label_32fe30;
        }
    }
    ctx->pc = 0x32FE28u;
    // 0x32fe28: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x32FE28u;
    {
        const bool branch_taken_0x32fe28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32fe28) {
            ctx->pc = 0x32FE58u;
            goto label_32fe58;
        }
    }
    ctx->pc = 0x32FE30u;
label_32fe30:
    // 0x32fe30: 0x3c010092  lui         $at, 0x92
    ctx->pc = 0x32fe30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)146 << 16));
    // 0x32fe34: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x32FE34u;
    {
        const bool branch_taken_0x32fe34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32FE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FE34u;
        // 0x32fe38: 0x9024140d  lbu         $a0, 0x140D($at) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 5133)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32fe34) {
            ctx->pc = 0x32FE58u;
            goto label_32fe58;
        }
    }
    ctx->pc = 0x32FE3Cu;
    // 0x32fe3c: 0x0  nop
    ctx->pc = 0x32fe3cu;
    // NOP
label_32fe40:
    // 0x32fe40: 0x3c010092  lui         $at, 0x92
    ctx->pc = 0x32fe40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)146 << 16));
    // 0x32fe44: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x32FE44u;
    {
        const bool branch_taken_0x32fe44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32FE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FE44u;
        // 0x32fe48: 0x9024140e  lbu         $a0, 0x140E($at) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 5134)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32fe44) {
            ctx->pc = 0x32FE58u;
            goto label_32fe58;
        }
    }
    ctx->pc = 0x32FE4Cu;
    // 0x32fe4c: 0x0  nop
    ctx->pc = 0x32fe4cu;
    // NOP
label_32fe50:
    // 0x32fe50: 0x3c010092  lui         $at, 0x92
    ctx->pc = 0x32fe50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)146 << 16));
    // 0x32fe54: 0x9024140f  lbu         $a0, 0x140F($at)
    ctx->pc = 0x32fe54u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x92140Fu));
label_32fe58:
    // 0x32fe58: 0x3086ffff  andi        $a2, $a0, 0xFFFF
    ctx->pc = 0x32fe58u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x32fe5c: 0x3c040092  lui         $a0, 0x92
    ctx->pc = 0x32fe5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)146 << 16));
    // 0x32fe60: 0xc0da0a8  jal         func_3682A0
    ctx->pc = 0x32FE60u;
    SET_GPR_U32(ctx, 31, 0x32FE68u);
    ctx->pc = 0x32FE64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32FE60u;
    // 0x32fe64: 0x24841400  addiu       $a0, $a0, 0x1400 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3682A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3682A0u, 0x32FE60u, 0x32FE68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32FE68u;
label_32fe68:
    // 0x32fe68: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x32fe68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x32fe6c: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x32fe6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x32fe70: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x32fe70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x32fe74: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x32fe74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x32fe78: 0x3c020200  lui         $v0, 0x200
    ctx->pc = 0x32fe78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
    // 0x32fe7c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x32fe7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32fe80: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x32fe80u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x32fe84: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x32fe84u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32fe88: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x32fe88u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32fe8c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x32fe8cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32fe90: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x32fe90u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32fe94: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x32FE94u;
    SET_GPR_U32(ctx, 31, 0x32FE9Cu);
    ctx->pc = 0x32FE98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32FE94u;
    // 0x32fe98: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x32FE94u, 0x32FE9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32FE9Cu;
label_32fe9c:
    // 0x32fe9c: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x32FE9Cu;
    {
        const bool branch_taken_0x32fe9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32fe9c) {
            ctx->pc = 0x32FF40u;
            goto label_32ff40;
        }
    }
    ctx->pc = 0x32FEA4u;
    // 0x32fea4: 0x0  nop
    ctx->pc = 0x32fea4u;
    // NOP
label_32fea8:
    // 0x32fea8: 0x3c040092  lui         $a0, 0x92
    ctx->pc = 0x32fea8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)146 << 16));
    // 0x32feac: 0xc0da0e4  jal         func_368390
    ctx->pc = 0x32FEACu;
    SET_GPR_U32(ctx, 31, 0x32FEB4u);
    ctx->pc = 0x32FEB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32FEACu;
    // 0x32feb0: 0x24841400  addiu       $a0, $a0, 0x1400 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x368390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x368390u, 0x32FEACu, 0x32FEB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32FEB4u;
label_32feb4:
    // 0x32feb4: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x32FEB4u;
    {
        const bool branch_taken_0x32feb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32FEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FEB4u;
        // 0x32feb8: 0x3c010092  lui         $at, 0x92 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)146 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32feb4) {
            ctx->pc = 0x32FF40u;
            goto label_32ff40;
        }
    }
    ctx->pc = 0x32FEBCu;
    // 0x32febc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x32febcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x32fec0: 0x842414aa  lh          $a0, 0x14AA($at)
    ctx->pc = 0x32fec0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 5290)));
    // 0x32fec4: 0x1082001a  beq         $a0, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x32FEC4u;
    {
        const bool branch_taken_0x32fec4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x32fec4) {
            ctx->pc = 0x32FF30u;
            goto label_32ff30;
        }
    }
    ctx->pc = 0x32FECCu;
    // 0x32fecc: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x32feccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x32fed0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x32fed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x32fed4: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x32fed4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x32fed8: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x32FED8u;
    {
        const bool branch_taken_0x32fed8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x32FEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FED8u;
        // 0x32fedc: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32fed8) {
            ctx->pc = 0x32FF20u;
            goto label_32ff20;
        }
    }
    ctx->pc = 0x32FEE0u;
    // 0x32fee0: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x32FEE0u;
    {
        const bool branch_taken_0x32fee0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x32fee0) {
            ctx->pc = 0x32FF10u;
            goto label_32ff10;
        }
    }
    ctx->pc = 0x32FEE8u;
    // 0x32fee8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x32fee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x32feec: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x32FEECu;
    {
        const bool branch_taken_0x32feec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x32feec) {
            ctx->pc = 0x32FF00u;
            goto label_32ff00;
        }
    }
    ctx->pc = 0x32FEF4u;
    // 0x32fef4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x32FEF4u;
    {
        const bool branch_taken_0x32fef4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32fef4) {
            ctx->pc = 0x32FF28u;
            goto label_32ff28;
        }
    }
    ctx->pc = 0x32FEFCu;
    // 0x32fefc: 0x0  nop
    ctx->pc = 0x32fefcu;
    // NOP
label_32ff00:
    // 0x32ff00: 0x3c010092  lui         $at, 0x92
    ctx->pc = 0x32ff00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)146 << 16));
    // 0x32ff04: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x32FF04u;
    {
        const bool branch_taken_0x32ff04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32FF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FF04u;
        // 0x32ff08: 0xa024140d  sb          $a0, 0x140D($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 5133), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ff04) {
            ctx->pc = 0x32FF28u;
            goto label_32ff28;
        }
    }
    ctx->pc = 0x32FF0Cu;
    // 0x32ff0c: 0x0  nop
    ctx->pc = 0x32ff0cu;
    // NOP
label_32ff10:
    // 0x32ff10: 0x3c010092  lui         $at, 0x92
    ctx->pc = 0x32ff10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)146 << 16));
    // 0x32ff14: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x32FF14u;
    {
        const bool branch_taken_0x32ff14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32FF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FF14u;
        // 0x32ff18: 0xa024140e  sb          $a0, 0x140E($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 5134), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ff14) {
            ctx->pc = 0x32FF28u;
            goto label_32ff28;
        }
    }
    ctx->pc = 0x32FF1Cu;
    // 0x32ff1c: 0x0  nop
    ctx->pc = 0x32ff1cu;
    // NOP
label_32ff20:
    // 0x32ff20: 0x3c010092  lui         $at, 0x92
    ctx->pc = 0x32ff20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)146 << 16));
    // 0x32ff24: 0xa024140f  sb          $a0, 0x140F($at)
    ctx->pc = 0x32ff24u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x92140Fu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x92140Fu, _value); } while (0);
label_32ff28:
    // 0x32ff28: 0xc0cbee4  jal         func_32FB90
    ctx->pc = 0x32FF28u;
    SET_GPR_U32(ctx, 31, 0x32FF30u);
    ctx->pc = 0x32FF2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32FF28u;
    // 0x32ff2c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32FB90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32FB90u, 0x32FF28u, 0x32FF30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32FF30u;
label_32ff30:
    // 0x32ff30: 0x3c040092  lui         $a0, 0x92
    ctx->pc = 0x32ff30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)146 << 16));
    // 0x32ff34: 0x24841400  addiu       $a0, $a0, 0x1400
    ctx->pc = 0x32ff34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5120));
    // 0x32ff38: 0xc0da0c8  jal         func_368320
    ctx->pc = 0x32FF38u;
    SET_GPR_U32(ctx, 31, 0x32FF40u);
    ctx->pc = 0x32FF3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32FF38u;
    // 0x32ff3c: 0xa2200002  sb          $zero, 0x2($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x368320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x368320u, 0x32FF38u, 0x32FF40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32FF40u;
label_32ff40:
    // 0x32ff40: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x32ff40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32ff44: 0x0  nop
    ctx->pc = 0x32ff44u;
    // NOP
label_32ff48:
    // 0x32ff48: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x32ff48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x32ff4c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x32ff4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32ff50: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x32ff50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32ff54: 0x3e00008  jr          $ra
    ctx->pc = 0x32FF54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32FF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FF54u;
        // 0x32ff58: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32FF54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32FF5Cu;
}
