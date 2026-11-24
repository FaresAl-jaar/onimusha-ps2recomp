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

// Function: sub_0020D128
// Address: 0x20d128 - 0x20d390
void sub_0020D128_0x20d128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020D128_0x20d128");
#endif

    switch (ctx->pc) {
        case 0x20d17cu: goto label_20d17c;
        case 0x20d190u: goto label_20d190;
        case 0x20d1a4u: goto label_20d1a4;
        case 0x20d1bcu: goto label_20d1bc;
        case 0x20d1dcu: goto label_20d1dc;
        case 0x20d1f8u: goto label_20d1f8;
        case 0x20d274u: goto label_20d274;
        case 0x20d2d0u: goto label_20d2d0;
        case 0x20d2ecu: goto label_20d2ec;
        case 0x20d330u: goto label_20d330;
        default: break;
    }

    ctx->pc = 0x20d128u;

    // 0x20d128: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x20d128u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x20d12c: 0xffbe0060  sd          $fp, 0x60($sp)
    ctx->pc = 0x20d12cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 30));
    // 0x20d130: 0xe0f02d  daddu       $fp, $a3, $zero
    ctx->pc = 0x20d130u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d134: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x20d134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x20d138: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x20d138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x20d13c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x20d13cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d140: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x20d140u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x20d144: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x20d144u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d148: 0xffb70058  sd          $s7, 0x58($sp)
    ctx->pc = 0x20d148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 23));
    // 0x20d14c: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x20d14cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d150: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x20d150u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x20d154: 0x27a60004  addiu       $a2, $sp, 0x4
    ctx->pc = 0x20d154u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x20d158: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x20d158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x20d15c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x20d15cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d160: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x20d160u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x20d164: 0x26910d30  addiu       $s1, $s4, 0xD30
    ctx->pc = 0x20d164u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 3376));
    // 0x20d168: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x20d168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
    // 0x20d16c: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x20d16cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
    // 0x20d170: 0xafc00000  sw          $zero, 0x0($fp)
    ctx->pc = 0x20d170u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 0));
    // 0x20d174: 0xc0835cc  jal         func_20D730
    ctx->pc = 0x20D174u;
    SET_GPR_U32(ctx, 31, 0x20D17Cu);
    ctx->pc = 0x20D178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D174u;
    // 0x20d178: 0x8e932004  lw          $s3, 0x2004($s4) (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8196)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20D730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20D730u, 0x20D174u, 0x20D17Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D17Cu;
label_20d17c:
    // 0x20d17c: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x20D17Cu;
    {
        const bool branch_taken_0x20d17c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20d17c) {
            ctx->pc = 0x20D180u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20D17Cu;
            // 0x20d180: 0x3c020021  lui         $v0, 0x21 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20D1C0u;
            goto label_20d1c0;
        }
    }
    ctx->pc = 0x20D184u;
    // 0x20d184: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x20d184u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x20d188: 0xc088180  jal         func_220600
    ctx->pc = 0x20D188u;
    SET_GPR_U32(ctx, 31, 0x20D190u);
    ctx->pc = 0x20D18Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D188u;
    // 0x20d18c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220600u, 0x20D188u, 0x20D190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D190u;
label_20d190:
    // 0x20d190: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x20d190u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d194: 0x6400072  bltz        $s2, . + 4 + (0x72 << 2)
    ctx->pc = 0x20D194u;
    {
        const bool branch_taken_0x20d194 = (GPR_S64(ctx, 18) < 0);
        ctx->pc = 0x20D198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D194u;
        // 0x20d198: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d194) {
            ctx->pc = 0x20D360u;
            goto label_20d360;
        }
    }
    ctx->pc = 0x20D19Cu;
    // 0x20d19c: 0xc087ed0  jal         func_21FB40
    ctx->pc = 0x20D19Cu;
    SET_GPR_U32(ctx, 31, 0x20D1A4u);
    ctx->pc = 0x20D1A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D19Cu;
    // 0x20d1a0: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21FB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FB40u, 0x20D19Cu, 0x20D1A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D1A4u;
label_20d1a4:
    // 0x20d1a4: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x20D1A4u;
    {
        const bool branch_taken_0x20d1a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20d1a4) {
            ctx->pc = 0x20D1A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20D1A4u;
            // 0x20d1a8: 0x8fa50004  lw          $a1, 0x4($sp) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20D1D0u;
            goto label_20d1d0;
        }
    }
    ctx->pc = 0x20D1ACu;
    // 0x20d1ac: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x20d1acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x20d1b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20d1b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d1b4: 0xc0881b6  jal         func_2206D8
    ctx->pc = 0x20D1B4u;
    SET_GPR_U32(ctx, 31, 0x20D1BCu);
    ctx->pc = 0x20D1B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D1B4u;
    // 0x20d1b8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2206D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2206D8u, 0x20D1B4u, 0x20D1BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D1BCu;
label_20d1bc:
    // 0x20d1bc: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x20d1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
label_20d1c0:
    // 0x20d1c0: 0x2442d070  addiu       $v0, $v0, -0x2F90
    ctx->pc = 0x20d1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955120));
    // 0x20d1c4: 0x10000066  b           . + 4 + (0x66 << 2)
    ctx->pc = 0x20D1C4u;
    {
        const bool branch_taken_0x20d1c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D1C4u;
        // 0x20d1c8: 0xae62003c  sw          $v0, 0x3C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d1c4) {
            ctx->pc = 0x20D360u;
            goto label_20d360;
        }
    }
    ctx->pc = 0x20D1CCu;
    // 0x20d1cc: 0x0  nop
    ctx->pc = 0x20d1ccu;
    // NOP
label_20d1d0:
    // 0x20d1d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20d1d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d1d4: 0xc088198  jal         func_220660
    ctx->pc = 0x20D1D4u;
    SET_GPR_U32(ctx, 31, 0x20D1DCu);
    ctx->pc = 0x20D1D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D1D4u;
    // 0x20d1d8: 0x27a60008  addiu       $a2, $sp, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220660u, 0x20D1D4u, 0x20D1DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D1DCu;
label_20d1dc:
    // 0x20d1dc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x20d1dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d1e0: 0x600005f  bltz        $s0, . + 4 + (0x5F << 2)
    ctx->pc = 0x20D1E0u;
    {
        const bool branch_taken_0x20d1e0 = (GPR_S64(ctx, 16) < 0);
        ctx->pc = 0x20D1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D1E0u;
        // 0x20d1e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d1e0) {
            ctx->pc = 0x20D360u;
            goto label_20d360;
        }
    }
    ctx->pc = 0x20D1E8u;
    // 0x20d1e8: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x20d1e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x20d1ec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x20d1ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d1f0: 0xc0881b6  jal         func_2206D8
    ctx->pc = 0x20D1F0u;
    SET_GPR_U32(ctx, 31, 0x20D1F8u);
    ctx->pc = 0x20D1F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D1F0u;
    // 0x20d1f4: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2206D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2206D8u, 0x20D1F0u, 0x20D1F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D1F8u;
label_20d1f8:
    // 0x20d1f8: 0x2121823  subu        $v1, $s0, $s2
    ctx->pc = 0x20d1f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x20d1fc: 0x8e620038  lw          $v0, 0x38($s3)
    ctx->pc = 0x20d1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 56)));
    // 0x20d200: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x20d200u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x20d204: 0x460003c  bltz        $v1, . + 4 + (0x3C << 2)
    ctx->pc = 0x20D204u;
    {
        const bool branch_taken_0x20d204 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x20D208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D204u;
        // 0x20d208: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d204) {
            ctx->pc = 0x20D2F8u;
            goto label_20d2f8;
        }
    }
    ctx->pc = 0x20D20Cu;
    // 0x20d20c: 0x31943  sra         $v1, $v1, 5
    ctx->pc = 0x20d20cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 5));
    // 0x20d210: 0x651818  mult        $v1, $v1, $a1
    ctx->pc = 0x20d210u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x20d214: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x20d214u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x20d218: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x20d218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20d21c: 0x28840  sll         $s1, $v0, 1
    ctx->pc = 0x20d21cu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x20d220: 0x1a200022  blez        $s1, . + 4 + (0x22 << 2)
    ctx->pc = 0x20D220u;
    {
        const bool branch_taken_0x20d220 = (GPR_S64(ctx, 17) <= 0);
        ctx->pc = 0x20D224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D220u;
        // 0x20d224: 0xafa0000c  sw          $zero, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d220) {
            ctx->pc = 0x20D2ACu;
            goto label_20d2ac;
        }
    }
    ctx->pc = 0x20D228u;
    // 0x20d228: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x20d228u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x20d22c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x20d22cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d230: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x20d230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x20d234: 0x27a6000c  addiu       $a2, $sp, 0xC
    ctx->pc = 0x20d234u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
    // 0x20d238: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x20d238u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x20d23c: 0x2a2001a  div         $zero, $s5, $v0
    ctx->pc = 0x20d23cu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 21);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x20d240: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x20D240u;
    {
        const bool branch_taken_0x20d240 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20d240) {
            ctx->pc = 0x20D244u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20D240u;
            // 0x20d244: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x20D248u;
            goto label_20d248;
        }
    }
    ctx->pc = 0x20D248u;
label_20d248:
    // 0x20d248: 0x1812  mflo        $v1
    ctx->pc = 0x20d248u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x20d24c: 0x651818  mult        $v1, $v1, $a1
    ctx->pc = 0x20d24cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x20d250: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x20d250u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x20d254: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x20d254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20d258: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x20d258u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x20d25c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x20d25cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d260: 0x51102a  slt         $v0, $v0, $s1
    ctx->pc = 0x20d260u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x20d264: 0x222800a  movz        $s0, $s1, $v0
    ctx->pc = 0x20d264u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 17));
    // 0x20d268: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x20d268u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d26c: 0xc0834e4  jal         func_20D390
    ctx->pc = 0x20D26Cu;
    SET_GPR_U32(ctx, 31, 0x20D274u);
    ctx->pc = 0x20D270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D26Cu;
    // 0x20d270: 0x2308023  subu        $s0, $s1, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20D390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20D390u, 0x20D26Cu, 0x20D274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D274u;
label_20d274:
    // 0x20d274: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x20d274u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20d278: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x20d278u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d27c: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x20d27cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x20d280: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x20d280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20d284: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x20d284u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x20d288: 0x2c2001a  div         $zero, $s6, $v0
    ctx->pc = 0x20d288u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 22);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x20d28c: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x20D28Cu;
    {
        const bool branch_taken_0x20d28c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20d28c) {
            ctx->pc = 0x20D290u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20D28Cu;
            // 0x20d290: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x20D294u;
            goto label_20d294;
        }
    }
    ctx->pc = 0x20D294u;
label_20d294:
    // 0x20d294: 0x8e630038  lw          $v1, 0x38($s3)
    ctx->pc = 0x20d294u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 56)));
    // 0x20d298: 0x2012  mflo        $a0
    ctx->pc = 0x20d298u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x20d29c: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x20d29cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x20d2a0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x20d2a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x20d2a4: 0x1e00000b  bgtz        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x20D2A4u;
    {
        const bool branch_taken_0x20d2a4 = (GPR_S64(ctx, 16) > 0);
        ctx->pc = 0x20D2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D2A4u;
        // 0x20d2a8: 0xae630038  sw          $v1, 0x38($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 56), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d2a4) {
            ctx->pc = 0x20D2D4u;
            goto label_20d2d4;
        }
    }
    ctx->pc = 0x20D2ACu;
label_20d2ac:
    // 0x20d2ac: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x20d2acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x20d2b0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x20D2B0u;
    {
        const bool branch_taken_0x20d2b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D2B0u;
        // 0x20d2b4: 0x3c020021  lui         $v0, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d2b0) {
            ctx->pc = 0x20D2D4u;
            goto label_20d2d4;
        }
    }
    ctx->pc = 0x20D2B8u;
    // 0x20d2b8: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x20d2b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d2bc: 0x2442d070  addiu       $v0, $v0, -0x2F90
    ctx->pc = 0x20d2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955120));
    // 0x20d2c0: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x20d2c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d2c4: 0xae62003c  sw          $v0, 0x3C($s3)
    ctx->pc = 0x20d2c4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 60), GPR_U32(ctx, 2));
    // 0x20d2c8: 0xc08f070  jal         func_23C1C0
    ctx->pc = 0x20D2C8u;
    SET_GPR_U32(ctx, 31, 0x20D2D0u);
    ctx->pc = 0x20D2CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D2C8u;
    // 0x20d2cc: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C1C0u, 0x20D2C8u, 0x20D2D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D2D0u;
label_20d2d0:
    // 0x20d2d0: 0xafa2000c  sw          $v0, 0xC($sp)
    ctx->pc = 0x20d2d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
label_20d2d4:
    // 0x20d2d4: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x20d2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x20d2d8: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x20D2D8u;
    {
        const bool branch_taken_0x20d2d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D2D8u;
        // 0x20d2dc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d2d8) {
            ctx->pc = 0x20D350u;
            goto label_20d350;
        }
    }
    ctx->pc = 0x20D2E0u;
    // 0x20d2e0: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x20d2e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x20d2e4: 0xc087e5e  jal         func_21F978
    ctx->pc = 0x20D2E4u;
    SET_GPR_U32(ctx, 31, 0x20D2ECu);
    ctx->pc = 0x20D2E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D2E4u;
    // 0x20d2e8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21F978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21F978u, 0x20D2E4u, 0x20D2ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D2ECu;
label_20d2ec:
    // 0x20d2ec: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x20D2ECu;
    {
        const bool branch_taken_0x20d2ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D2ECu;
        // 0x20d2f0: 0xde8209c8  ld          $v0, 0x9C8($s4) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 20), 2504)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d2ec) {
            ctx->pc = 0x20D354u;
            goto label_20d354;
        }
    }
    ctx->pc = 0x20D2F4u;
    // 0x20d2f4: 0x0  nop
    ctx->pc = 0x20d2f4u;
    // NOP
label_20d2f8:
    // 0x20d2f8: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x20d2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x20d2fc: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x20D2FCu;
    {
        const bool branch_taken_0x20d2fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D2FCu;
        // 0x20d300: 0x32023  negu        $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d2fc) {
            ctx->pc = 0x20D350u;
            goto label_20d350;
        }
    }
    ctx->pc = 0x20D304u;
    // 0x20d304: 0x2482001f  addiu       $v0, $a0, 0x1F
    ctx->pc = 0x20d304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 31));
    // 0x20d308: 0x28830000  slti        $v1, $a0, 0x0
    ctx->pc = 0x20d308u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x20d30c: 0x43200b  movn        $a0, $v0, $v1
    ctx->pc = 0x20d30cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
    // 0x20d310: 0x42143  sra         $a0, $a0, 5
    ctx->pc = 0x20d310u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 5));
    // 0x20d314: 0x48140  sll         $s0, $a0, 5
    ctx->pc = 0x20d314u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x20d318: 0x5a00000b  blezl       $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x20D318u;
    {
        const bool branch_taken_0x20d318 = (GPR_S64(ctx, 16) <= 0);
        if (branch_taken_0x20d318) {
            ctx->pc = 0x20D31Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20D318u;
            // 0x20d31c: 0x3c020021  lui         $v0, 0x21 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20D348u;
            goto label_20d348;
        }
    }
    ctx->pc = 0x20D320u;
    // 0x20d320: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x20d320u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20d324: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x20d324u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d328: 0xc083506  jal         func_20D418
    ctx->pc = 0x20D328u;
    SET_GPR_U32(ctx, 31, 0x20D330u);
    ctx->pc = 0x20D32Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D328u;
    // 0x20d32c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20D418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20D418u, 0x20D328u, 0x20D330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D330u;
label_20d330:
    // 0x20d330: 0x8e630038  lw          $v1, 0x38($s3)
    ctx->pc = 0x20d330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 56)));
    // 0x20d334: 0x2022023  subu        $a0, $s0, $v0
    ctx->pc = 0x20d334u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x20d338: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x20d338u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x20d33c: 0x1c800004  bgtz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x20D33Cu;
    {
        const bool branch_taken_0x20d33c = (GPR_S64(ctx, 4) > 0);
        ctx->pc = 0x20D340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D33Cu;
        // 0x20d340: 0xae630038  sw          $v1, 0x38($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 56), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d33c) {
            ctx->pc = 0x20D350u;
            goto label_20d350;
        }
    }
    ctx->pc = 0x20D344u;
    // 0x20d344: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x20d344u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
label_20d348:
    // 0x20d348: 0x2442d070  addiu       $v0, $v0, -0x2F90
    ctx->pc = 0x20d348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955120));
    // 0x20d34c: 0xae62003c  sw          $v0, 0x3C($s3)
    ctx->pc = 0x20d34cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 60), GPR_U32(ctx, 2));
label_20d350:
    // 0x20d350: 0xde8209c8  ld          $v0, 0x9C8($s4)
    ctx->pc = 0x20d350u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 20), 2504)));
label_20d354:
    // 0x20d354: 0xafd60000  sw          $s6, 0x0($fp)
    ctx->pc = 0x20d354u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 22));
    // 0x20d358: 0x2c2102d  daddu       $v0, $s6, $v0
    ctx->pc = 0x20d358u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 2));
    // 0x20d35c: 0xfe8209c8  sd          $v0, 0x9C8($s4)
    ctx->pc = 0x20d35cu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 2504), GPR_U64(ctx, 2));
label_20d360:
    // 0x20d360: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x20d360u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20d364: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x20d364u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x20d368: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x20d368u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20d36c: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x20d36cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20d370: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x20d370u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x20d374: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x20d374u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20d378: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x20d378u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x20d37c: 0xdfb70058  ld          $s7, 0x58($sp)
    ctx->pc = 0x20d37cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x20d380: 0xdfbe0060  ld          $fp, 0x60($sp)
    ctx->pc = 0x20d380u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x20d384: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x20d384u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x20d388: 0x3e00008  jr          $ra
    ctx->pc = 0x20D388u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20D38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D388u;
        // 0x20d38c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20D388u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20D390u;
}
