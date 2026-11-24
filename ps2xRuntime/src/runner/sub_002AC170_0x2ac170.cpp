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

// Function: sub_002AC170
// Address: 0x2ac170 - 0x2ac424
void sub_002AC170_0x2ac170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AC170_0x2ac170");
#endif

    switch (ctx->pc) {
        case 0x2ac1f4u: goto label_2ac1f4;
        case 0x2ac22cu: goto label_2ac22c;
        case 0x2ac26cu: goto label_2ac26c;
        case 0x2ac2a4u: goto label_2ac2a4;
        case 0x2ac2e4u: goto label_2ac2e4;
        case 0x2ac31cu: goto label_2ac31c;
        case 0x2ac35cu: goto label_2ac35c;
        case 0x2ac394u: goto label_2ac394;
        case 0x2ac3d4u: goto label_2ac3d4;
        case 0x2ac40cu: goto label_2ac40c;
        default: break;
    }

    ctx->pc = 0x2ac170u;

    // 0x2ac170: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x2ac170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x2ac174: 0x24030024  addiu       $v1, $zero, 0x24
    ctx->pc = 0x2ac174u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x2ac178: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2ac178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2ac17c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2ac17cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2ac180: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ac180u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2ac184: 0x90860002  lbu         $a2, 0x2($a0)
    ctx->pc = 0x2ac184u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x2ac188: 0x10c30085  beq         $a2, $v1, . + 4 + (0x85 << 2)
    ctx->pc = 0x2AC188u;
    {
        const bool branch_taken_0x2ac188 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x2AC18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC188u;
        // 0x2ac18c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac188) {
            ctx->pc = 0x2AC3A0u;
            goto label_2ac3a0;
        }
    }
    ctx->pc = 0x2AC190u;
    // 0x2ac190: 0x24030023  addiu       $v1, $zero, 0x23
    ctx->pc = 0x2ac190u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x2ac194: 0x10c30064  beq         $a2, $v1, . + 4 + (0x64 << 2)
    ctx->pc = 0x2AC194u;
    {
        const bool branch_taken_0x2ac194 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x2AC198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC194u;
        // 0x2ac198: 0x24030022  addiu       $v1, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac194) {
            ctx->pc = 0x2AC328u;
            goto label_2ac328;
        }
    }
    ctx->pc = 0x2AC19Cu;
    // 0x2ac19c: 0x10c30044  beq         $a2, $v1, . + 4 + (0x44 << 2)
    ctx->pc = 0x2AC19Cu;
    {
        const bool branch_taken_0x2ac19c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x2ac19c) {
            ctx->pc = 0x2AC2B0u;
            goto label_2ac2b0;
        }
    }
    ctx->pc = 0x2AC1A4u;
    // 0x2ac1a4: 0x24030021  addiu       $v1, $zero, 0x21
    ctx->pc = 0x2ac1a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x2ac1a8: 0x10c30023  beq         $a2, $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x2AC1A8u;
    {
        const bool branch_taken_0x2ac1a8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x2AC1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC1A8u;
        // 0x2ac1ac: 0x24030010  addiu       $v1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac1a8) {
            ctx->pc = 0x2AC238u;
            goto label_2ac238;
        }
    }
    ctx->pc = 0x2AC1B0u;
    // 0x2ac1b0: 0x10c30003  beq         $a2, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AC1B0u;
    {
        const bool branch_taken_0x2ac1b0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x2ac1b0) {
            ctx->pc = 0x2AC1C0u;
            goto label_2ac1c0;
        }
    }
    ctx->pc = 0x2AC1B8u;
    // 0x2ac1b8: 0x10000095  b           . + 4 + (0x95 << 2)
    ctx->pc = 0x2AC1B8u;
    {
        const bool branch_taken_0x2ac1b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ac1b8) {
            ctx->pc = 0x2AC410u;
            goto label_2ac410;
        }
    }
    ctx->pc = 0x2AC1C0u;
label_2ac1c0:
    // 0x2ac1c0: 0x30b100ff  andi        $s1, $a1, 0xFF
    ctx->pc = 0x2ac1c0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x2ac1c4: 0x1620000c  bnez        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x2AC1C4u;
    {
        const bool branch_taken_0x2ac1c4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ac1c4) {
            ctx->pc = 0x2AC1F8u;
            goto label_2ac1f8;
        }
    }
    ctx->pc = 0x2AC1CCu;
    // 0x2ac1cc: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x2ac1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x2ac1d0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2ac1d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ac1d4: 0x244249c0  addiu       $v0, $v0, 0x49C0
    ctx->pc = 0x2ac1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18880));
    // 0x2ac1d8: 0x27a900c0  addiu       $t1, $sp, 0xC0
    ctx->pc = 0x2ac1d8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2ac1dc: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x2ac1dcu;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x4E49C0u));
    // 0x2ac1e0: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x2ac1e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2ac1e4: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x2ac1e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2ac1e8: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x2ac1e8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac1ec: 0xc0a6be8  jal         func_29AFA0
    ctx->pc = 0x2AC1ECu;
    SET_GPR_U32(ctx, 31, 0x2AC1F4u);
    ctx->pc = 0x2AC1F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC1ECu;
    // 0x2ac1f0: 0x7d220000  sq          $v0, 0x0($t1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29AFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29AFA0u, 0x2AC1ECu, 0x2AC1F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC1F4u;
label_2ac1f4:
    // 0x2ac1f4: 0x0  nop
    ctx->pc = 0x2ac1f4u;
    // NOP
label_2ac1f8:
    // 0x2ac1f8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2ac1f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ac1fc: 0x16270084  bne         $s1, $a3, . + 4 + (0x84 << 2)
    ctx->pc = 0x2AC1FCu;
    {
        const bool branch_taken_0x2ac1fc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 7));
        if (branch_taken_0x2ac1fc) {
            ctx->pc = 0x2AC410u;
            goto label_2ac410;
        }
    }
    ctx->pc = 0x2AC204u;
    // 0x2ac204: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x2ac204u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x2ac208: 0x27a900b0  addiu       $t1, $sp, 0xB0
    ctx->pc = 0x2ac208u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2ac20c: 0x244249d0  addiu       $v0, $v0, 0x49D0
    ctx->pc = 0x2ac20cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18896));
    // 0x2ac210: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ac210u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac214: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x2ac214u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x4E49D0u));
    // 0x2ac218: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x2ac218u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2ac21c: 0x2406000f  addiu       $a2, $zero, 0xF
    ctx->pc = 0x2ac21cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2ac220: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x2ac220u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac224: 0xc0a6be8  jal         func_29AFA0
    ctx->pc = 0x2AC224u;
    SET_GPR_U32(ctx, 31, 0x2AC22Cu);
    ctx->pc = 0x2AC228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC224u;
    // 0x2ac228: 0x7d220000  sq          $v0, 0x0($t1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29AFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29AFA0u, 0x2AC224u, 0x2AC22Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC22Cu;
label_2ac22c:
    // 0x2ac22c: 0x10000078  b           . + 4 + (0x78 << 2)
    ctx->pc = 0x2AC22Cu;
    {
        const bool branch_taken_0x2ac22c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ac22c) {
            ctx->pc = 0x2AC410u;
            goto label_2ac410;
        }
    }
    ctx->pc = 0x2AC234u;
    // 0x2ac234: 0x0  nop
    ctx->pc = 0x2ac234u;
    // NOP
label_2ac238:
    // 0x2ac238: 0x30b100ff  andi        $s1, $a1, 0xFF
    ctx->pc = 0x2ac238u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x2ac23c: 0x1620000c  bnez        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x2AC23Cu;
    {
        const bool branch_taken_0x2ac23c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ac23c) {
            ctx->pc = 0x2AC270u;
            goto label_2ac270;
        }
    }
    ctx->pc = 0x2AC244u;
    // 0x2ac244: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x2ac244u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x2ac248: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2ac248u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ac24c: 0x244249e0  addiu       $v0, $v0, 0x49E0
    ctx->pc = 0x2ac24cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18912));
    // 0x2ac250: 0x27a900a0  addiu       $t1, $sp, 0xA0
    ctx->pc = 0x2ac250u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2ac254: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x2ac254u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x4E49E0u));
    // 0x2ac258: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x2ac258u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2ac25c: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x2ac25cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2ac260: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x2ac260u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac264: 0xc0a6be8  jal         func_29AFA0
    ctx->pc = 0x2AC264u;
    SET_GPR_U32(ctx, 31, 0x2AC26Cu);
    ctx->pc = 0x2AC268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC264u;
    // 0x2ac268: 0x7d220000  sq          $v0, 0x0($t1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29AFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29AFA0u, 0x2AC264u, 0x2AC26Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC26Cu;
label_2ac26c:
    // 0x2ac26c: 0x0  nop
    ctx->pc = 0x2ac26cu;
    // NOP
label_2ac270:
    // 0x2ac270: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2ac270u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ac274: 0x16270066  bne         $s1, $a3, . + 4 + (0x66 << 2)
    ctx->pc = 0x2AC274u;
    {
        const bool branch_taken_0x2ac274 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 7));
        if (branch_taken_0x2ac274) {
            ctx->pc = 0x2AC410u;
            goto label_2ac410;
        }
    }
    ctx->pc = 0x2AC27Cu;
    // 0x2ac27c: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x2ac27cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x2ac280: 0x27a90090  addiu       $t1, $sp, 0x90
    ctx->pc = 0x2ac280u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2ac284: 0x244249f0  addiu       $v0, $v0, 0x49F0
    ctx->pc = 0x2ac284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18928));
    // 0x2ac288: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ac288u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac28c: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x2ac28cu;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x4E49F0u));
    // 0x2ac290: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ac290u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac294: 0x2406000f  addiu       $a2, $zero, 0xF
    ctx->pc = 0x2ac294u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2ac298: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x2ac298u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac29c: 0xc0a6be8  jal         func_29AFA0
    ctx->pc = 0x2AC29Cu;
    SET_GPR_U32(ctx, 31, 0x2AC2A4u);
    ctx->pc = 0x2AC2A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC29Cu;
    // 0x2ac2a0: 0x7d220000  sq          $v0, 0x0($t1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29AFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29AFA0u, 0x2AC29Cu, 0x2AC2A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC2A4u;
label_2ac2a4:
    // 0x2ac2a4: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x2AC2A4u;
    {
        const bool branch_taken_0x2ac2a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ac2a4) {
            ctx->pc = 0x2AC410u;
            goto label_2ac410;
        }
    }
    ctx->pc = 0x2AC2ACu;
    // 0x2ac2ac: 0x0  nop
    ctx->pc = 0x2ac2acu;
    // NOP
label_2ac2b0:
    // 0x2ac2b0: 0x30b100ff  andi        $s1, $a1, 0xFF
    ctx->pc = 0x2ac2b0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x2ac2b4: 0x1620000c  bnez        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x2AC2B4u;
    {
        const bool branch_taken_0x2ac2b4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ac2b4) {
            ctx->pc = 0x2AC2E8u;
            goto label_2ac2e8;
        }
    }
    ctx->pc = 0x2AC2BCu;
    // 0x2ac2bc: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x2ac2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x2ac2c0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2ac2c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ac2c4: 0x24424a00  addiu       $v0, $v0, 0x4A00
    ctx->pc = 0x2ac2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18944));
    // 0x2ac2c8: 0x27a90080  addiu       $t1, $sp, 0x80
    ctx->pc = 0x2ac2c8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2ac2cc: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x2ac2ccu;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x4E4A00u));
    // 0x2ac2d0: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x2ac2d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2ac2d4: 0x24060019  addiu       $a2, $zero, 0x19
    ctx->pc = 0x2ac2d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x2ac2d8: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x2ac2d8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac2dc: 0xc0a6be8  jal         func_29AFA0
    ctx->pc = 0x2AC2DCu;
    SET_GPR_U32(ctx, 31, 0x2AC2E4u);
    ctx->pc = 0x2AC2E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC2DCu;
    // 0x2ac2e0: 0x7d220000  sq          $v0, 0x0($t1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29AFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29AFA0u, 0x2AC2DCu, 0x2AC2E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC2E4u;
label_2ac2e4:
    // 0x2ac2e4: 0x0  nop
    ctx->pc = 0x2ac2e4u;
    // NOP
label_2ac2e8:
    // 0x2ac2e8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2ac2e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ac2ec: 0x16270048  bne         $s1, $a3, . + 4 + (0x48 << 2)
    ctx->pc = 0x2AC2ECu;
    {
        const bool branch_taken_0x2ac2ec = (GPR_U64(ctx, 17) != GPR_U64(ctx, 7));
        if (branch_taken_0x2ac2ec) {
            ctx->pc = 0x2AC410u;
            goto label_2ac410;
        }
    }
    ctx->pc = 0x2AC2F4u;
    // 0x2ac2f4: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x2ac2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x2ac2f8: 0x27a90070  addiu       $t1, $sp, 0x70
    ctx->pc = 0x2ac2f8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2ac2fc: 0x24424a10  addiu       $v0, $v0, 0x4A10
    ctx->pc = 0x2ac2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18960));
    // 0x2ac300: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ac300u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac304: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x2ac304u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x4E4A10u));
    // 0x2ac308: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x2ac308u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x2ac30c: 0x24060016  addiu       $a2, $zero, 0x16
    ctx->pc = 0x2ac30cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x2ac310: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x2ac310u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac314: 0xc0a6be8  jal         func_29AFA0
    ctx->pc = 0x2AC314u;
    SET_GPR_U32(ctx, 31, 0x2AC31Cu);
    ctx->pc = 0x2AC318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC314u;
    // 0x2ac318: 0x7d220000  sq          $v0, 0x0($t1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29AFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29AFA0u, 0x2AC314u, 0x2AC31Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC31Cu;
label_2ac31c:
    // 0x2ac31c: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x2AC31Cu;
    {
        const bool branch_taken_0x2ac31c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ac31c) {
            ctx->pc = 0x2AC410u;
            goto label_2ac410;
        }
    }
    ctx->pc = 0x2AC324u;
    // 0x2ac324: 0x0  nop
    ctx->pc = 0x2ac324u;
    // NOP
label_2ac328:
    // 0x2ac328: 0x30b100ff  andi        $s1, $a1, 0xFF
    ctx->pc = 0x2ac328u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x2ac32c: 0x1620000c  bnez        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x2AC32Cu;
    {
        const bool branch_taken_0x2ac32c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ac32c) {
            ctx->pc = 0x2AC360u;
            goto label_2ac360;
        }
    }
    ctx->pc = 0x2AC334u;
    // 0x2ac334: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x2ac334u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x2ac338: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2ac338u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ac33c: 0x24424a20  addiu       $v0, $v0, 0x4A20
    ctx->pc = 0x2ac33cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18976));
    // 0x2ac340: 0x27a90060  addiu       $t1, $sp, 0x60
    ctx->pc = 0x2ac340u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2ac344: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x2ac344u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x4E4A20u));
    // 0x2ac348: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x2ac348u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2ac34c: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x2ac34cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2ac350: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x2ac350u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac354: 0xc0a6be8  jal         func_29AFA0
    ctx->pc = 0x2AC354u;
    SET_GPR_U32(ctx, 31, 0x2AC35Cu);
    ctx->pc = 0x2AC358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC354u;
    // 0x2ac358: 0x7d220000  sq          $v0, 0x0($t1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29AFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29AFA0u, 0x2AC354u, 0x2AC35Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC35Cu;
label_2ac35c:
    // 0x2ac35c: 0x0  nop
    ctx->pc = 0x2ac35cu;
    // NOP
label_2ac360:
    // 0x2ac360: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2ac360u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ac364: 0x1627002a  bne         $s1, $a3, . + 4 + (0x2A << 2)
    ctx->pc = 0x2AC364u;
    {
        const bool branch_taken_0x2ac364 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 7));
        if (branch_taken_0x2ac364) {
            ctx->pc = 0x2AC410u;
            goto label_2ac410;
        }
    }
    ctx->pc = 0x2AC36Cu;
    // 0x2ac36c: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x2ac36cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x2ac370: 0x27a90050  addiu       $t1, $sp, 0x50
    ctx->pc = 0x2ac370u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2ac374: 0x24424a30  addiu       $v0, $v0, 0x4A30
    ctx->pc = 0x2ac374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18992));
    // 0x2ac378: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ac378u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac37c: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x2ac37cu;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x4E4A30u));
    // 0x2ac380: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x2ac380u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2ac384: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x2ac384u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2ac388: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x2ac388u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac38c: 0xc0a6be8  jal         func_29AFA0
    ctx->pc = 0x2AC38Cu;
    SET_GPR_U32(ctx, 31, 0x2AC394u);
    ctx->pc = 0x2AC390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC38Cu;
    // 0x2ac390: 0x7d220000  sq          $v0, 0x0($t1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29AFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29AFA0u, 0x2AC38Cu, 0x2AC394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC394u;
label_2ac394:
    // 0x2ac394: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x2AC394u;
    {
        const bool branch_taken_0x2ac394 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ac394) {
            ctx->pc = 0x2AC410u;
            goto label_2ac410;
        }
    }
    ctx->pc = 0x2AC39Cu;
    // 0x2ac39c: 0x0  nop
    ctx->pc = 0x2ac39cu;
    // NOP
label_2ac3a0:
    // 0x2ac3a0: 0x30b100ff  andi        $s1, $a1, 0xFF
    ctx->pc = 0x2ac3a0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x2ac3a4: 0x1620000c  bnez        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x2AC3A4u;
    {
        const bool branch_taken_0x2ac3a4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ac3a4) {
            ctx->pc = 0x2AC3D8u;
            goto label_2ac3d8;
        }
    }
    ctx->pc = 0x2AC3ACu;
    // 0x2ac3ac: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x2ac3acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x2ac3b0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2ac3b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ac3b4: 0x24424a40  addiu       $v0, $v0, 0x4A40
    ctx->pc = 0x2ac3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19008));
    // 0x2ac3b8: 0x27a90040  addiu       $t1, $sp, 0x40
    ctx->pc = 0x2ac3b8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2ac3bc: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x2ac3bcu;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x4E4A40u));
    // 0x2ac3c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ac3c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac3c4: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x2ac3c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2ac3c8: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x2ac3c8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac3cc: 0xc0a6be8  jal         func_29AFA0
    ctx->pc = 0x2AC3CCu;
    SET_GPR_U32(ctx, 31, 0x2AC3D4u);
    ctx->pc = 0x2AC3D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC3CCu;
    // 0x2ac3d0: 0x7d220000  sq          $v0, 0x0($t1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29AFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29AFA0u, 0x2AC3CCu, 0x2AC3D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC3D4u;
label_2ac3d4:
    // 0x2ac3d4: 0x0  nop
    ctx->pc = 0x2ac3d4u;
    // NOP
label_2ac3d8:
    // 0x2ac3d8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2ac3d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ac3dc: 0x1627000c  bne         $s1, $a3, . + 4 + (0xC << 2)
    ctx->pc = 0x2AC3DCu;
    {
        const bool branch_taken_0x2ac3dc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 7));
        if (branch_taken_0x2ac3dc) {
            ctx->pc = 0x2AC410u;
            goto label_2ac410;
        }
    }
    ctx->pc = 0x2AC3E4u;
    // 0x2ac3e4: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x2ac3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x2ac3e8: 0x27a90030  addiu       $t1, $sp, 0x30
    ctx->pc = 0x2ac3e8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2ac3ec: 0x24424a50  addiu       $v0, $v0, 0x4A50
    ctx->pc = 0x2ac3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19024));
    // 0x2ac3f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ac3f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac3f4: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x2ac3f4u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x4E4A50u));
    // 0x2ac3f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ac3f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac3fc: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x2ac3fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2ac400: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x2ac400u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac404: 0xc0a6be8  jal         func_29AFA0
    ctx->pc = 0x2AC404u;
    SET_GPR_U32(ctx, 31, 0x2AC40Cu);
    ctx->pc = 0x2AC408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC404u;
    // 0x2ac408: 0x7d220000  sq          $v0, 0x0($t1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29AFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29AFA0u, 0x2AC404u, 0x2AC40Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC40Cu;
label_2ac40c:
    // 0x2ac40c: 0x0  nop
    ctx->pc = 0x2ac40cu;
    // NOP
label_2ac410:
    // 0x2ac410: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2ac410u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ac414: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ac414u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ac418: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ac418u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ac41c: 0x3e00008  jr          $ra
    ctx->pc = 0x2AC41Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AC420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC41Cu;
        // 0x2ac420: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AC41Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AC424u;
}
