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

// Function: sub_002804B0
// Address: 0x2804b0 - 0x2805e8
void sub_002804B0_0x2804b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002804B0_0x2804b0");
#endif

    switch (ctx->pc) {
        case 0x2804c4u: goto label_2804c4;
        case 0x280500u: goto label_280500;
        case 0x280540u: goto label_280540;
        case 0x280550u: goto label_280550;
        case 0x280590u: goto label_280590;
        case 0x2805b0u: goto label_2805b0;
        default: break;
    }

    ctx->pc = 0x2804b0u;

    // 0x2804b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2804b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2804b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2804b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2804b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2804b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2804bc: 0xc0a6af8  jal         func_29ABE0
    ctx->pc = 0x2804BCu;
    SET_GPR_U32(ctx, 31, 0x2804C4u);
    ctx->pc = 0x2804C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2804BCu;
    // 0x2804c0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29ABE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29ABE0u, 0x2804BCu, 0x2804C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2804C4u;
label_2804c4:
    // 0x2804c4: 0x260307a0  addiu       $v1, $s0, 0x7A0
    ctx->pc = 0x2804c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1952));
    // 0x2804c8: 0x7c600000  sq          $zero, 0x0($v1)
    ctx->pc = 0x2804c8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 0));
    // 0x2804cc: 0x960329de  lhu         $v1, 0x29DE($s0)
    ctx->pc = 0x2804ccu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10718)));
    // 0x2804d0: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2804d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2804d4: 0x30830010  andi        $v1, $a0, 0x10
    ctx->pc = 0x2804d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16);
    // 0x2804d8: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2804D8u;
    {
        const bool branch_taken_0x2804d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2804d8) {
            ctx->pc = 0x2804F0u;
            goto label_2804f0;
        }
    }
    ctx->pc = 0x2804E0u;
    // 0x2804e0: 0x2403008a  addiu       $v1, $zero, 0x8A
    ctx->pc = 0x2804e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 138));
    // 0x2804e4: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x2804E4u;
    {
        const bool branch_taken_0x2804e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2804E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2804E4u;
        // 0x2804e8: 0xa2030780  sb          $v1, 0x780($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2804e4) {
            ctx->pc = 0x2805D8u;
            goto label_2805d8;
        }
    }
    ctx->pc = 0x2804ECu;
    // 0x2804ec: 0x0  nop
    ctx->pc = 0x2804ecu;
    // NOP
label_2804f0:
    // 0x2804f0: 0x30831000  andi        $v1, $a0, 0x1000
    ctx->pc = 0x2804f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4096);
    // 0x2804f4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2804F4u;
    {
        const bool branch_taken_0x2804f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2804F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2804F4u;
        // 0x2804f8: 0x2403008a  addiu       $v1, $zero, 0x8A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 138));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2804f4) {
            ctx->pc = 0x280508u;
            goto label_280508;
        }
    }
    ctx->pc = 0x2804FCu;
    // 0x2804fc: 0x10000036  b           . + 4 + (0x36 << 2)
label_280500:
    if (ctx->pc == 0x280500u) {
        ctx->pc = 0x280500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2804FCu;
        // 0x280500: 0xa2030780  sb          $v1, 0x780($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x280504u;
        goto label_fallthrough_0x2804fc;
    }
    ctx->pc = 0x2804FCu;
    {
        const bool branch_taken_0x2804fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x280500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2804FCu;
        // 0x280500: 0xa2030780  sb          $v1, 0x780($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2804fc) {
            ctx->pc = 0x2805D8u;
            goto label_2805d8;
        }
    }
label_fallthrough_0x2804fc:
    ctx->pc = 0x280504u;
    // 0x280504: 0x0  nop
    ctx->pc = 0x280504u;
    // NOP
label_280508:
    // 0x280508: 0x9204000a  lbu         $a0, 0xA($s0)
    ctx->pc = 0x280508u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x28050c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x28050cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x280510: 0x14830011  bne         $a0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x280510u;
    {
        const bool branch_taken_0x280510 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x280510) {
            ctx->pc = 0x280558u;
            goto label_280558;
        }
    }
    ctx->pc = 0x280518u;
    // 0x280518: 0x8e0329c0  lw          $v1, 0x29C0($s0)
    ctx->pc = 0x280518u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10688)));
    // 0x28051c: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x28051cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x280520: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x280520u;
    {
        const bool branch_taken_0x280520 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x280520) {
            ctx->pc = 0x280558u;
            goto label_280558;
        }
    }
    ctx->pc = 0x280528u;
    // 0x280528: 0x92040640  lbu         $a0, 0x640($s0)
    ctx->pc = 0x280528u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1600)));
    // 0x28052c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x28052cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x280530: 0x14830009  bne         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x280530u;
    {
        const bool branch_taken_0x280530 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x280534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280530u;
        // 0x280534: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280530) {
            ctx->pc = 0x280558u;
            goto label_280558;
        }
    }
    ctx->pc = 0x280538u;
    // 0x280538: 0xc0a6998  jal         func_29A660
    ctx->pc = 0x280538u;
    SET_GPR_U32(ctx, 31, 0x280540u);
    ctx->pc = 0x29A660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A660u, 0x280538u, 0x280540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280540u;
label_280540:
    // 0x280540: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x280540u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x280544: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x280544u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x280548: 0xc096974  jal         func_25A5D0
    ctx->pc = 0x280548u;
    SET_GPR_U32(ctx, 31, 0x280550u);
    ctx->pc = 0x28054Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280548u;
    // 0x28054c: 0x228c3  sra         $a1, $v0, 3 (Delay Slot)
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5D0u, 0x280548u, 0x280550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280550u;
label_280550:
    // 0x280550: 0x8e0329c0  lw          $v1, 0x29C0($s0)
    ctx->pc = 0x280550u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10688)));
    // 0x280554: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x280554u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
label_280558:
    // 0x280558: 0x960529de  lhu         $a1, 0x29DE($s0)
    ctx->pc = 0x280558u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10718)));
    // 0x28055c: 0x30a30800  andi        $v1, $a1, 0x800
    ctx->pc = 0x28055cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2048);
    // 0x280560: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x280560u;
    {
        const bool branch_taken_0x280560 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x280560) {
            ctx->pc = 0x2805D0u;
            goto label_2805d0;
        }
    }
    ctx->pc = 0x280568u;
    // 0x280568: 0x920429d0  lbu         $a0, 0x29D0($s0)
    ctx->pc = 0x280568u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10704)));
    // 0x28056c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x28056cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x280570: 0x14830009  bne         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x280570u;
    {
        const bool branch_taken_0x280570 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x280570) {
            ctx->pc = 0x280598u;
            goto label_280598;
        }
    }
    ctx->pc = 0x280578u;
    // 0x280578: 0x9204000a  lbu         $a0, 0xA($s0)
    ctx->pc = 0x280578u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x28057c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x28057cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x280580: 0x14830013  bne         $a0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x280580u;
    {
        const bool branch_taken_0x280580 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x280584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280580u;
        // 0x280584: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280580) {
            ctx->pc = 0x2805D0u;
            goto label_2805d0;
        }
    }
    ctx->pc = 0x280588u;
    // 0x280588: 0xc0a4f80  jal         func_293E00
    ctx->pc = 0x280588u;
    SET_GPR_U32(ctx, 31, 0x280590u);
    ctx->pc = 0x293E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293E00u, 0x280588u, 0x280590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280590u;
label_280590:
    // 0x280590: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x280590u;
    {
        const bool branch_taken_0x280590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x280590) {
            ctx->pc = 0x2805D0u;
            goto label_2805d0;
        }
    }
    ctx->pc = 0x280598u;
label_280598:
    // 0x280598: 0x9204000a  lbu         $a0, 0xA($s0)
    ctx->pc = 0x280598u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x28059c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x28059cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2805a0: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2805A0u;
    {
        const bool branch_taken_0x2805a0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x2805A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2805A0u;
        // 0x2805a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2805a0) {
            ctx->pc = 0x2805B8u;
            goto label_2805b8;
        }
    }
    ctx->pc = 0x2805A8u;
    // 0x2805a8: 0xc0a4f80  jal         func_293E00
    ctx->pc = 0x2805A8u;
    SET_GPR_U32(ctx, 31, 0x2805B0u);
    ctx->pc = 0x293E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293E00u, 0x2805A8u, 0x2805B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2805B0u;
label_2805b0:
    // 0x2805b0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2805B0u;
    {
        const bool branch_taken_0x2805b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2805b0) {
            ctx->pc = 0x2805D0u;
            goto label_2805d0;
        }
    }
    ctx->pc = 0x2805B8u;
label_2805b8:
    // 0x2805b8: 0x9204065c  lbu         $a0, 0x65C($s0)
    ctx->pc = 0x2805b8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1628)));
    // 0x2805bc: 0x2403009d  addiu       $v1, $zero, 0x9D
    ctx->pc = 0x2805bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 157));
    // 0x2805c0: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2805C0u;
    {
        const bool branch_taken_0x2805c0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x2805C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2805C0u;
        // 0x2805c4: 0x30a3f7ff  andi        $v1, $a1, 0xF7FF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)63487);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2805c0) {
            ctx->pc = 0x2805D0u;
            goto label_2805d0;
        }
    }
    ctx->pc = 0x2805C8u;
    // 0x2805c8: 0xa60329de  sh          $v1, 0x29DE($s0)
    ctx->pc = 0x2805c8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10718), (uint16_t)GPR_U32(ctx, 3));
    // 0x2805cc: 0x0  nop
    ctx->pc = 0x2805ccu;
    // NOP
label_2805d0:
    // 0x2805d0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2805d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2805d4: 0xa2030780  sb          $v1, 0x780($s0)
    ctx->pc = 0x2805d4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 3));
label_2805d8:
    // 0x2805d8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2805d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2805dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2805dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2805e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2805E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2805E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2805E0u;
        // 0x2805e4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2805E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2805E8u;
}
