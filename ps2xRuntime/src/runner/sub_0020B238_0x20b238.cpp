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

// Function: sub_0020B238
// Address: 0x20b238 - 0x20b384
void sub_0020B238_0x20b238(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020B238_0x20b238");
#endif

    switch (ctx->pc) {
        case 0x20b278u: goto label_20b278;
        case 0x20b28cu: goto label_20b28c;
        case 0x20b2c4u: goto label_20b2c4;
        case 0x20b2e8u: goto label_20b2e8;
        case 0x20b314u: goto label_20b314;
        case 0x20b340u: goto label_20b340;
        case 0x20b358u: goto label_20b358;
        default: break;
    }

    ctx->pc = 0x20b238u;

    // 0x20b238: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x20b238u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x20b23c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x20b23cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x20b240: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x20b240u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b244: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x20b244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x20b248: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x20b248u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b24c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20b24cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b250: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x20b250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x20b254: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x20b254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x20b258: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x20b258u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b25c: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x20b25cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x20b260: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x20b260u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b264: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x20b264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x20b268: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x20b268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x20b26c: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x20b26cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x20b270: 0xc082d40  jal         func_20B500
    ctx->pc = 0x20B270u;
    SET_GPR_U32(ctx, 31, 0x20B278u);
    ctx->pc = 0x20B274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B270u;
    // 0x20b274: 0x100a82d  daddu       $s5, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B500u, 0x20B270u, 0x20B278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B278u;
label_20b278:
    // 0x20b278: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x20b278u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b27c: 0x12400037  beqz        $s2, . + 4 + (0x37 << 2)
    ctx->pc = 0x20B27Cu;
    {
        const bool branch_taken_0x20b27c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B27Cu;
        // 0x20b280: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b27c) {
            ctx->pc = 0x20B35Cu;
            goto label_20b35c;
        }
    }
    ctx->pc = 0x20B284u;
    // 0x20b284: 0xc082b56  jal         func_20AD58
    ctx->pc = 0x20B284u;
    SET_GPR_U32(ctx, 31, 0x20B28Cu);
    ctx->pc = 0x20AD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20AD58u, 0x20B284u, 0x20B28Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B28Cu;
label_20b28c:
    // 0x20b28c: 0x111140  sll         $v0, $s1, 5
    ctx->pc = 0x20b28cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 5));
    // 0x20b290: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x20b290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x20b294: 0x8e16003c  lw          $s6, 0x3C($s0)
    ctx->pc = 0x20b294u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x20b298: 0x24500284  addiu       $s0, $v0, 0x284
    ctx->pc = 0x20b298u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 644));
    // 0x20b29c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20b29cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b2a0: 0xae120008  sw          $s2, 0x8($s0)
    ctx->pc = 0x20b2a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 18));
    // 0x20b2a4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x20b2a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b2a8: 0xae110004  sw          $s1, 0x4($s0)
    ctx->pc = 0x20b2a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
    // 0x20b2ac: 0x27a60004  addiu       $a2, $sp, 0x4
    ctx->pc = 0x20b2acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x20b2b0: 0xae13000c  sw          $s3, 0xC($s0)
    ctx->pc = 0x20b2b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 19));
    // 0x20b2b4: 0x27a70008  addiu       $a3, $sp, 0x8
    ctx->pc = 0x20b2b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x20b2b8: 0xae140010  sw          $s4, 0x10($s0)
    ctx->pc = 0x20b2b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 20));
    // 0x20b2bc: 0xc082b8e  jal         func_20AE38
    ctx->pc = 0x20B2BCu;
    SET_GPR_U32(ctx, 31, 0x20B2C4u);
    ctx->pc = 0x20B2C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B2BCu;
    // 0x20b2c0: 0xae150018  sw          $s5, 0x18($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20AE38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20AE38u, 0x20B2BCu, 0x20B2C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B2C4u;
label_20b2c4:
    // 0x20b2c4: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x20b2c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x20b2c8: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x20b2c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x20b2cc: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x20B2CCu;
    {
        const bool branch_taken_0x20b2cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20B2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B2CCu;
        // 0x20b2d0: 0x24848590  addiu       $a0, $a0, -0x7A70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935952));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b2cc) {
            ctx->pc = 0x20B338u;
            goto label_20b338;
        }
    }
    ctx->pc = 0x20B2D4u;
    // 0x20b2d4: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x20b2d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20b2d8: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x20b2d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x20b2dc: 0x8fa60008  lw          $a2, 0x8($sp)
    ctx->pc = 0x20b2dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x20b2e0: 0xc09422c  jal         func_2508B0
    ctx->pc = 0x20B2E0u;
    SET_GPR_U32(ctx, 31, 0x20B2E8u);
    ctx->pc = 0x20B2E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B2E0u;
    // 0x20b2e4: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2508B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2508B0u, 0x20B2E0u, 0x20B2E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B2E8u;
label_20b2e8:
    // 0x20b2e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20b2e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b2ec: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x20b2ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b2f0: 0x16400005  bnez        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x20B2F0u;
    {
        const bool branch_taken_0x20b2f0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x20B2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B2F0u;
        // 0x20b2f4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b2f0) {
            ctx->pc = 0x20B308u;
            goto label_20b308;
        }
    }
    ctx->pc = 0x20B2F8u;
    // 0x20b2f8: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x20b2f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x20b2fc: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x20B2FCu;
    {
        const bool branch_taken_0x20b2fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B2FCu;
        // 0x20b300: 0x248485c0  addiu       $a0, $a0, -0x7A40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b2fc) {
            ctx->pc = 0x20B338u;
            goto label_20b338;
        }
    }
    ctx->pc = 0x20B304u;
    // 0x20b304: 0x0  nop
    ctx->pc = 0x20b304u;
    // NOP
label_20b308:
    // 0x20b308: 0xae120014  sw          $s2, 0x14($s0)
    ctx->pc = 0x20b308u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 18));
    // 0x20b30c: 0xc082ba8  jal         func_20AEA0
    ctx->pc = 0x20B30Cu;
    SET_GPR_U32(ctx, 31, 0x20B314u);
    ctx->pc = 0x20B310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B30Cu;
    // 0x20b310: 0x8fa60000  lw          $a2, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20AEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20AEA0u, 0x20B30Cu, 0x20B314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B314u;
label_20b314:
    // 0x20b314: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x20b314u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b318: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x20b318u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b31c: 0x26a500c0  addiu       $a1, $s5, 0xC0
    ctx->pc = 0x20b31cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 192));
    // 0x20b320: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x20b320u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b324: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x20b324u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b328: 0x16200007  bnez        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x20B328u;
    {
        const bool branch_taken_0x20b328 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x20B32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B328u;
        // 0x20b32c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b328) {
            ctx->pc = 0x20B348u;
            goto label_20b348;
        }
    }
    ctx->pc = 0x20B330u;
    // 0x20b330: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x20b330u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x20b334: 0x248485e8  addiu       $a0, $a0, -0x7A18
    ctx->pc = 0x20b334u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936040));
label_20b338:
    // 0x20b338: 0xc082e3e  jal         func_20B8F8
    ctx->pc = 0x20B338u;
    SET_GPR_U32(ctx, 31, 0x20B340u);
    ctx->pc = 0x20B8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B8F8u, 0x20B338u, 0x20B340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B340u;
label_20b340:
    // 0x20b340: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x20B340u;
    {
        const bool branch_taken_0x20b340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B340u;
        // 0x20b344: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b340) {
            ctx->pc = 0x20B35Cu;
            goto label_20b35c;
        }
    }
    ctx->pc = 0x20B348u;
label_20b348:
    // 0x20b348: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20b348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20b34c: 0xae11001c  sw          $s1, 0x1C($s0)
    ctx->pc = 0x20b34cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 17));
    // 0x20b350: 0xc0849da  jal         func_212768
    ctx->pc = 0x20B350u;
    SET_GPR_U32(ctx, 31, 0x20B358u);
    ctx->pc = 0x20B354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B350u;
    // 0x20b354: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212768u, 0x20B350u, 0x20B358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B358u;
label_20b358:
    // 0x20b358: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x20b358u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_20b35c:
    // 0x20b35c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x20b35cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20b360: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x20b360u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20b364: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x20b364u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20b368: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x20b368u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x20b36c: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x20b36cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20b370: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x20b370u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20b374: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x20b374u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x20b378: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x20b378u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20b37c: 0x3e00008  jr          $ra
    ctx->pc = 0x20B37Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20B380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B37Cu;
        // 0x20b380: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20B37Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20B384u;
}
