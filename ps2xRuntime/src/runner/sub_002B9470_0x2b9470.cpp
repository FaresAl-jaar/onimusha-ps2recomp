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

// Function: sub_002B9470
// Address: 0x2b9470 - 0x2b96a0
void sub_002B9470_0x2b9470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B9470_0x2b9470");
#endif

    switch (ctx->pc) {
        case 0x2b94d8u: goto label_2b94d8;
        case 0x2b94e8u: goto label_2b94e8;
        case 0x2b94fcu: goto label_2b94fc;
        case 0x2b9508u: goto label_2b9508;
        case 0x2b9528u: goto label_2b9528;
        case 0x2b9598u: goto label_2b9598;
        case 0x2b95a8u: goto label_2b95a8;
        case 0x2b95bcu: goto label_2b95bc;
        case 0x2b95d0u: goto label_2b95d0;
        case 0x2b95e0u: goto label_2b95e0;
        case 0x2b95f0u: goto label_2b95f0;
        case 0x2b9678u: goto label_2b9678;
        case 0x2b9688u: goto label_2b9688;
        default: break;
    }

    ctx->pc = 0x2b9470u;

    // 0x2b9470: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2b9470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2b9474: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2b9474u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b9478: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2b9478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2b947c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2b947cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2b9480: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2b9480u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2b9484: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2b9484u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2b9488: 0x9485078c  lhu         $a1, 0x78C($a0)
    ctx->pc = 0x2b9488u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 1932)));
    // 0x2b948c: 0x30a5efff  andi        $a1, $a1, 0xEFFF
    ctx->pc = 0x2b948cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)61439);
    // 0x2b9490: 0xa485078c  sh          $a1, 0x78C($a0)
    ctx->pc = 0x2b9490u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 1932), (uint16_t)GPR_U32(ctx, 5));
    // 0x2b9494: 0x9485078e  lhu         $a1, 0x78E($a0)
    ctx->pc = 0x2b9494u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 1934)));
    // 0x2b9498: 0x30a5feff  andi        $a1, $a1, 0xFEFF
    ctx->pc = 0x2b9498u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65279);
    // 0x2b949c: 0xa485078e  sh          $a1, 0x78E($a0)
    ctx->pc = 0x2b949cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 1934), (uint16_t)GPR_U32(ctx, 5));
    // 0x2b94a0: 0xa0800235  sb          $zero, 0x235($a0)
    ctx->pc = 0x2b94a0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 565), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b94a4: 0x90852ad8  lbu         $a1, 0x2AD8($a0)
    ctx->pc = 0x2b94a4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 10968)));
    // 0x2b94a8: 0x10a3000d  beq         $a1, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2B94A8u;
    {
        const bool branch_taken_0x2b94a8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x2B94ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B94A8u;
        // 0x2b94ac: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b94a8) {
            ctx->pc = 0x2B94E0u;
            goto label_2b94e0;
        }
    }
    ctx->pc = 0x2B94B0u;
    // 0x2b94b0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b94b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b94b4: 0x10a3000a  beq         $a1, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x2B94B4u;
    {
        const bool branch_taken_0x2b94b4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x2b94b4) {
            ctx->pc = 0x2B94E0u;
            goto label_2b94e0;
        }
    }
    ctx->pc = 0x2B94BCu;
    // 0x2b94bc: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B94BCu;
    {
        const bool branch_taken_0x2b94bc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b94bc) {
            ctx->pc = 0x2B94D0u;
            goto label_2b94d0;
        }
    }
    ctx->pc = 0x2B94C4u;
    // 0x2b94c4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2B94C4u;
    {
        const bool branch_taken_0x2b94c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b94c4) {
            ctx->pc = 0x2B94E8u;
            goto label_2b94e8;
        }
    }
    ctx->pc = 0x2B94CCu;
    // 0x2b94cc: 0x0  nop
    ctx->pc = 0x2b94ccu;
    // NOP
label_2b94d0:
    // 0x2b94d0: 0xc0bfae0  jal         func_2FEB80
    ctx->pc = 0x2B94D0u;
    SET_GPR_U32(ctx, 31, 0x2B94D8u);
    ctx->pc = 0x2B94D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B94D0u;
    // 0x2b94d4: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FEB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FEB80u, 0x2B94D0u, 0x2B94D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B94D8u;
label_2b94d8:
    // 0x2b94d8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2B94D8u;
    {
        const bool branch_taken_0x2b94d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b94d8) {
            ctx->pc = 0x2B94E8u;
            goto label_2b94e8;
        }
    }
    ctx->pc = 0x2B94E0u;
label_2b94e0:
    // 0x2b94e0: 0xc096c4c  jal         func_25B130
    ctx->pc = 0x2B94E0u;
    SET_GPR_U32(ctx, 31, 0x2B94E8u);
    ctx->pc = 0x2B94E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B94E0u;
    // 0x2b94e4: 0x8e042960  lw          $a0, 0x2960($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10592)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B130u, 0x2B94E0u, 0x2B94E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B94E8u;
label_2b94e8:
    // 0x2b94e8: 0x8e04004c  lw          $a0, 0x4C($s0)
    ctx->pc = 0x2b94e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x2b94ec: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B94ECu;
    {
        const bool branch_taken_0x2b94ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b94ec) {
            ctx->pc = 0x2B9500u;
            goto label_2b9500;
        }
    }
    ctx->pc = 0x2B94F4u;
    // 0x2b94f4: 0xc0a859c  jal         func_2A1670
    ctx->pc = 0x2B94F4u;
    SET_GPR_U32(ctx, 31, 0x2B94FCu);
    ctx->pc = 0x2A1670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A1670u, 0x2B94F4u, 0x2B94FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B94FCu;
label_2b94fc:
    // 0x2b94fc: 0x0  nop
    ctx->pc = 0x2b94fcu;
    // NOP
label_2b9500:
    // 0x2b9500: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x2b9500u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b9504: 0x26110004  addiu       $s1, $s0, 0x4
    ctx->pc = 0x2b9504u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_2b9508:
    // 0x2b9508: 0x8e230858  lw          $v1, 0x858($s1)
    ctx->pc = 0x2b9508u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2136)));
    // 0x2b950c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B950Cu;
    {
        const bool branch_taken_0x2b950c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b950c) {
            ctx->pc = 0x2B9528u;
            goto label_2b9528;
        }
    }
    ctx->pc = 0x2B9514u;
    // 0x2b9514: 0x8c64004c  lw          $a0, 0x4C($v1)
    ctx->pc = 0x2b9514u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
    // 0x2b9518: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B9518u;
    {
        const bool branch_taken_0x2b9518 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b9518) {
            ctx->pc = 0x2B9528u;
            goto label_2b9528;
        }
    }
    ctx->pc = 0x2B9520u;
    // 0x2b9520: 0xc0a859c  jal         func_2A1670
    ctx->pc = 0x2B9520u;
    SET_GPR_U32(ctx, 31, 0x2B9528u);
    ctx->pc = 0x2A1670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A1670u, 0x2B9520u, 0x2B9528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9528u;
label_2b9528:
    // 0x2b9528: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2b9528u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2b952c: 0x2e430004  sltiu       $v1, $s2, 0x4
    ctx->pc = 0x2b952cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x2b9530: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x2B9530u;
    {
        const bool branch_taken_0x2b9530 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B9534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9530u;
        // 0x2b9534: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9530) {
            ctx->pc = 0x2B9508u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b9508;
        }
    }
    ctx->pc = 0x2B9538u;
    // 0x2b9538: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x2b9538u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x2b953c: 0x24030024  addiu       $v1, $zero, 0x24
    ctx->pc = 0x2b953cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x2b9540: 0x2484c250  addiu       $a0, $a0, -0x3DB0
    ctx->pc = 0x2b9540u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951504));
    // 0x2b9544: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x2b9544u;
    { uint32_t bits = FAST_READ32(0x68C250u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b9548: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x2b9548u;
    { uint32_t bits = FAST_READ32(0x68C254u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b954c: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x2b954cu;
    { uint32_t bits = FAST_READ32(0x68C258u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b9550: 0xe6020164  swc1        $f2, 0x164($s0)
    ctx->pc = 0x2b9550u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 356), bits); }
    // 0x2b9554: 0xe6010168  swc1        $f1, 0x168($s0)
    ctx->pc = 0x2b9554u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 360), bits); }
    // 0x2b9558: 0xe600016c  swc1        $f0, 0x16C($s0)
    ctx->pc = 0x2b9558u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 364), bits); }
    // 0x2b955c: 0x92040002  lbu         $a0, 0x2($s0)
    ctx->pc = 0x2b955cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x2b9560: 0x10830025  beq         $a0, $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x2B9560u;
    {
        const bool branch_taken_0x2b9560 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2B9564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9560u;
        // 0x2b9564: 0x24030023  addiu       $v1, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9560) {
            ctx->pc = 0x2B95F8u;
            goto label_2b95f8;
        }
    }
    ctx->pc = 0x2B9568u;
    // 0x2b9568: 0x1083001f  beq         $a0, $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x2B9568u;
    {
        const bool branch_taken_0x2b9568 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2b9568) {
            ctx->pc = 0x2B95E8u;
            goto label_2b95e8;
        }
    }
    ctx->pc = 0x2B9570u;
    // 0x2b9570: 0x24030021  addiu       $v1, $zero, 0x21
    ctx->pc = 0x2b9570u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x2b9574: 0x10830014  beq         $a0, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x2B9574u;
    {
        const bool branch_taken_0x2b9574 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2B9578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9574u;
        // 0x2b9578: 0x24030010  addiu       $v1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9574) {
            ctx->pc = 0x2B95C8u;
            goto label_2b95c8;
        }
    }
    ctx->pc = 0x2B957Cu;
    // 0x2b957c: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B957Cu;
    {
        const bool branch_taken_0x2b957c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2b957c) {
            ctx->pc = 0x2B9590u;
            goto label_2b9590;
        }
    }
    ctx->pc = 0x2B9584u;
    // 0x2b9584: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x2B9584u;
    {
        const bool branch_taken_0x2b9584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b9584) {
            ctx->pc = 0x2B9608u;
            goto label_2b9608;
        }
    }
    ctx->pc = 0x2B958Cu;
    // 0x2b958c: 0x0  nop
    ctx->pc = 0x2b958cu;
    // NOP
label_2b9590:
    // 0x2b9590: 0xc068fe4  jal         func_1A3F90
    ctx->pc = 0x2B9590u;
    SET_GPR_U32(ctx, 31, 0x2B9598u);
    ctx->pc = 0x1A3F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3F90u, 0x2B9590u, 0x2B9598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9598u;
label_2b9598:
    // 0x2b9598: 0x8e04004c  lw          $a0, 0x4C($s0)
    ctx->pc = 0x2b9598u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x2b959c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2b959cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b95a0: 0xc0a810c  jal         func_2A0430
    ctx->pc = 0x2B95A0u;
    SET_GPR_U32(ctx, 31, 0x2B95A8u);
    ctx->pc = 0x2B95A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B95A0u;
    // 0x2b95a4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A0430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A0430u, 0x2B95A0u, 0x2B95A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B95A8u;
label_2b95a8:
    // 0x2b95a8: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x2b95a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x2b95ac: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2b95acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b95b0: 0x24844060  addiu       $a0, $a0, 0x4060
    ctx->pc = 0x2b95b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16480));
    // 0x2b95b4: 0xc0cea98  jal         func_33AA60
    ctx->pc = 0x2B95B4u;
    SET_GPR_U32(ctx, 31, 0x2B95BCu);
    ctx->pc = 0x2B95B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B95B4u;
    // 0x2b95b8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33AA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33AA60u, 0x2B95B4u, 0x2B95BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B95BCu;
label_2b95bc:
    // 0x2b95bc: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2B95BCu;
    {
        const bool branch_taken_0x2b95bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b95bc) {
            ctx->pc = 0x2B9608u;
            goto label_2b9608;
        }
    }
    ctx->pc = 0x2B95C4u;
    // 0x2b95c4: 0x0  nop
    ctx->pc = 0x2b95c4u;
    // NOP
label_2b95c8:
    // 0x2b95c8: 0xc0acf0c  jal         func_2B3C30
    ctx->pc = 0x2B95C8u;
    SET_GPR_U32(ctx, 31, 0x2B95D0u);
    ctx->pc = 0x2B3C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B3C30u, 0x2B95C8u, 0x2B95D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B95D0u;
label_2b95d0:
    // 0x2b95d0: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x2b95d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x2b95d4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2b95d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b95d8: 0xc0ceae8  jal         func_33ABA0
    ctx->pc = 0x2B95D8u;
    SET_GPR_U32(ctx, 31, 0x2B95E0u);
    ctx->pc = 0x2B95DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B95D8u;
    // 0x2b95dc: 0x24844060  addiu       $a0, $a0, 0x4060 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33ABA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33ABA0u, 0x2B95D8u, 0x2B95E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B95E0u;
label_2b95e0:
    // 0x2b95e0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2B95E0u;
    {
        const bool branch_taken_0x2b95e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b95e0) {
            ctx->pc = 0x2B9608u;
            goto label_2b9608;
        }
    }
    ctx->pc = 0x2B95E8u;
label_2b95e8:
    // 0x2b95e8: 0xc0d7acc  jal         func_35EB30
    ctx->pc = 0x2B95E8u;
    SET_GPR_U32(ctx, 31, 0x2B95F0u);
    ctx->pc = 0x2B95ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B95E8u;
    // 0x2b95ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35EB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35EB30u, 0x2B95E8u, 0x2B95F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B95F0u;
label_2b95f0:
    // 0x2b95f0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2B95F0u;
    {
        const bool branch_taken_0x2b95f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b95f0) {
            ctx->pc = 0x2B9608u;
            goto label_2b9608;
        }
    }
    ctx->pc = 0x2B95F8u;
label_2b95f8:
    // 0x2b95f8: 0x8e04085c  lw          $a0, 0x85C($s0)
    ctx->pc = 0x2b95f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2140)));
    // 0x2b95fc: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2B95FCu;
    {
        const bool branch_taken_0x2b95fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B95FCu;
        // 0x2b9600: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b95fc) {
            ctx->pc = 0x2B9608u;
            goto label_2b9608;
        }
    }
    ctx->pc = 0x2B9604u;
    // 0x2b9604: 0xa0830123  sb          $v1, 0x123($a0)
    ctx->pc = 0x2b9604u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 291), (uint8_t)GPR_U32(ctx, 3));
label_2b9608:
    // 0x2b9608: 0x8e0306c8  lw          $v1, 0x6C8($s0)
    ctx->pc = 0x2b9608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1736)));
    // 0x2b960c: 0x2406fffe  addiu       $a2, $zero, -0x2
    ctx->pc = 0x2b960cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x2b9610: 0x2405fffd  addiu       $a1, $zero, -0x3
    ctx->pc = 0x2b9610u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x2b9614: 0x240400fb  addiu       $a0, $zero, 0xFB
    ctx->pc = 0x2b9614u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 251));
    // 0x2b9618: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x2b9618u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x2b961c: 0xae0306c8  sw          $v1, 0x6C8($s0)
    ctx->pc = 0x2b961cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1736), GPR_U32(ctx, 3));
    // 0x2b9620: 0x8e0306cc  lw          $v1, 0x6CC($s0)
    ctx->pc = 0x2b9620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1740)));
    // 0x2b9624: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x2b9624u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x2b9628: 0xae0306cc  sw          $v1, 0x6CC($s0)
    ctx->pc = 0x2b9628u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1740), GPR_U32(ctx, 3));
    // 0x2b962c: 0x8e0306c8  lw          $v1, 0x6C8($s0)
    ctx->pc = 0x2b962cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1736)));
    // 0x2b9630: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x2b9630u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x2b9634: 0xae0306c8  sw          $v1, 0x6C8($s0)
    ctx->pc = 0x2b9634u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1736), GPR_U32(ctx, 3));
    // 0x2b9638: 0x8e0306cc  lw          $v1, 0x6CC($s0)
    ctx->pc = 0x2b9638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1740)));
    // 0x2b963c: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x2b963cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x2b9640: 0xae0306cc  sw          $v1, 0x6CC($s0)
    ctx->pc = 0x2b9640u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1740), GPR_U32(ctx, 3));
    // 0x2b9644: 0x9203065c  lbu         $v1, 0x65C($s0)
    ctx->pc = 0x2b9644u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1628)));
    // 0x2b9648: 0x10640005  beq         $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B9648u;
    {
        const bool branch_taken_0x2b9648 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x2b9648) {
            ctx->pc = 0x2B9660u;
            goto label_2b9660;
        }
    }
    ctx->pc = 0x2B9650u;
    // 0x2b9650: 0x92030780  lbu         $v1, 0x780($s0)
    ctx->pc = 0x2b9650u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1920)));
    // 0x2b9654: 0x1464000c  bne         $v1, $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x2B9654u;
    {
        const bool branch_taken_0x2b9654 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x2b9654) {
            ctx->pc = 0x2B9688u;
            goto label_2b9688;
        }
    }
    ctx->pc = 0x2B965Cu;
    // 0x2b965c: 0x0  nop
    ctx->pc = 0x2b965cu;
    // NOP
label_2b9660:
    // 0x2b9660: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b9660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b9664: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x2b9664u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x2b9668: 0xa2020780  sb          $v0, 0x780($s0)
    ctx->pc = 0x2b9668u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 2));
    // 0x2b966c: 0x260406a0  addiu       $a0, $s0, 0x6A0
    ctx->pc = 0x2b966cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1696));
    // 0x2b9670: 0xc040260  jal         func_100980
    ctx->pc = 0x2B9670u;
    SET_GPR_U32(ctx, 31, 0x2B9678u);
    ctx->pc = 0x2B9674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9670u;
    // 0x2b9674: 0x24a55008  addiu       $a1, $a1, 0x5008 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20488));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100980u, 0x2B9670u, 0x2B9678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9678u;
label_2b9678:
    // 0x2b9678: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B9678u;
    {
        const bool branch_taken_0x2b9678 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B967Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9678u;
        // 0x2b967c: 0x260406a0  addiu       $a0, $s0, 0x6A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1696));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9678) {
            ctx->pc = 0x2B9688u;
            goto label_2b9688;
        }
    }
    ctx->pc = 0x2B9680u;
    // 0x2b9680: 0xc040274  jal         func_1009D0
    ctx->pc = 0x2B9680u;
    SET_GPR_U32(ctx, 31, 0x2B9688u);
    ctx->pc = 0x1009D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1009D0u, 0x2B9680u, 0x2B9688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9688u;
label_2b9688:
    // 0x2b9688: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2b9688u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b968c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2b968cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b9690: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2b9690u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b9694: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2b9694u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b9698: 0x3e00008  jr          $ra
    ctx->pc = 0x2B9698u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B969Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9698u;
        // 0x2b969c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B9698u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B96A0u;
}
