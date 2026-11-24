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

// Function: sub_0014F140
// Address: 0x14f140 - 0x14f27c
void sub_0014F140_0x14f140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014F140_0x14f140");
#endif

    switch (ctx->pc) {
        case 0x14f168u: goto label_14f168;
        case 0x14f1a4u: goto label_14f1a4;
        case 0x14f1b4u: goto label_14f1b4;
        case 0x14f1e0u: goto label_14f1e0;
        case 0x14f1f4u: goto label_14f1f4;
        case 0x14f214u: goto label_14f214;
        case 0x14f240u: goto label_14f240;
        case 0x14f254u: goto label_14f254;
        case 0x14f270u: goto label_14f270;
        default: break;
    }

    ctx->pc = 0x14f140u;

    // 0x14f140: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x14f140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14f144: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14f144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14f148: 0x8cc800e0  lw          $t0, 0xE0($a2)
    ctx->pc = 0x14f148u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 224)));
    // 0x14f14c: 0x31020002  andi        $v0, $t0, 0x2
    ctx->pc = 0x14f14cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)2);
    // 0x14f150: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x14F150u;
    {
        const bool branch_taken_0x14f150 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14F154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F150u;
        // 0x14f154: 0xa0502d  daddu       $t2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f150) {
            ctx->pc = 0x14F170u;
            goto label_14f170;
        }
    }
    ctx->pc = 0x14F158u;
    // 0x14f158: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x14f158u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f15c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x14f15cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f160: 0xc053dc4  jal         func_14F710
    ctx->pc = 0x14F160u;
    SET_GPR_U32(ctx, 31, 0x14F168u);
    ctx->pc = 0x14F164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F160u;
    // 0x14f164: 0x140302d  daddu       $a2, $t2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F710u, 0x14F160u, 0x14F168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F168u;
label_14f168:
    // 0x14f168: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x14F168u;
    {
        const bool branch_taken_0x14f168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f168) {
            ctx->pc = 0x14F270u;
            goto label_14f270;
        }
    }
    ctx->pc = 0x14F170u;
label_14f170:
    // 0x14f170: 0x8d4900e0  lw          $t1, 0xE0($t2)
    ctx->pc = 0x14f170u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 224)));
    // 0x14f174: 0x31220002  andi        $v0, $t1, 0x2
    ctx->pc = 0x14f174u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)2);
    // 0x14f178: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x14F178u;
    {
        const bool branch_taken_0x14f178 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F178u;
        // 0x14f17c: 0x31220004  andi        $v0, $t1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f178) {
            ctx->pc = 0x14F260u;
            goto label_14f260;
        }
    }
    ctx->pc = 0x14F180u;
    // 0x14f180: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x14F180u;
    {
        const bool branch_taken_0x14f180 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f180) {
            ctx->pc = 0x14F1C0u;
            goto label_14f1c0;
        }
    }
    ctx->pc = 0x14F188u;
    // 0x14f188: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x14f188u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x14f18c: 0x1021024  and         $v0, $t0, $v0
    ctx->pc = 0x14f18cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x14f190: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x14F190u;
    {
        const bool branch_taken_0x14f190 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f190) {
            ctx->pc = 0x14F1ACu;
            goto label_14f1ac;
        }
    }
    ctx->pc = 0x14F198u;
    // 0x14f198: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x14f198u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f19c: 0xc053ca0  jal         func_14F280
    ctx->pc = 0x14F19Cu;
    SET_GPR_U32(ctx, 31, 0x14F1A4u);
    ctx->pc = 0x14F1A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F19Cu;
    // 0x14f1a0: 0x140302d  daddu       $a2, $t2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F280u, 0x14F19Cu, 0x14F1A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F1A4u;
label_14f1a4:
    // 0x14f1a4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x14F1A4u;
    {
        const bool branch_taken_0x14f1a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f1a4) {
            ctx->pc = 0x14F1B4u;
            goto label_14f1b4;
        }
    }
    ctx->pc = 0x14F1ACu;
label_14f1ac:
    // 0x14f1ac: 0xc053ca0  jal         func_14F280
    ctx->pc = 0x14F1ACu;
    SET_GPR_U32(ctx, 31, 0x14F1B4u);
    ctx->pc = 0x14F280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F280u, 0x14F1ACu, 0x14F1B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F1B4u;
label_14f1b4:
    // 0x14f1b4: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x14F1B4u;
    {
        const bool branch_taken_0x14f1b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f1b4) {
            ctx->pc = 0x14F270u;
            goto label_14f270;
        }
    }
    ctx->pc = 0x14F1BCu;
    // 0x14f1bc: 0x0  nop
    ctx->pc = 0x14f1bcu;
    // NOP
label_14f1c0:
    // 0x14f1c0: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x14f1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x14f1c4: 0x1231024  and         $v0, $t1, $v1
    ctx->pc = 0x14f1c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & GPR_U64(ctx, 3));
    // 0x14f1c8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x14F1C8u;
    {
        const bool branch_taken_0x14f1c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F1C8u;
        // 0x14f1cc: 0x31020004  andi        $v0, $t0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f1c8) {
            ctx->pc = 0x14F200u;
            goto label_14f200;
        }
    }
    ctx->pc = 0x14F1D0u;
    // 0x14f1d0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x14F1D0u;
    {
        const bool branch_taken_0x14f1d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f1d0) {
            ctx->pc = 0x14F1E8u;
            goto label_14f1e8;
        }
    }
    ctx->pc = 0x14F1D8u;
    // 0x14f1d8: 0xc053ca0  jal         func_14F280
    ctx->pc = 0x14F1D8u;
    SET_GPR_U32(ctx, 31, 0x14F1E0u);
    ctx->pc = 0x14F280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F280u, 0x14F1D8u, 0x14F1E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F1E0u;
label_14f1e0:
    // 0x14f1e0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x14F1E0u;
    {
        const bool branch_taken_0x14f1e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f1e0) {
            ctx->pc = 0x14F1F4u;
            goto label_14f1f4;
        }
    }
    ctx->pc = 0x14F1E8u;
label_14f1e8:
    // 0x14f1e8: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x14f1e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f1ec: 0xc053ca0  jal         func_14F280
    ctx->pc = 0x14F1ECu;
    SET_GPR_U32(ctx, 31, 0x14F1F4u);
    ctx->pc = 0x14F1F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F1ECu;
    // 0x14f1f0: 0x140302d  daddu       $a2, $t2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F280u, 0x14F1ECu, 0x14F1F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F1F4u;
label_14f1f4:
    // 0x14f1f4: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x14F1F4u;
    {
        const bool branch_taken_0x14f1f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f1f4) {
            ctx->pc = 0x14F270u;
            goto label_14f270;
        }
    }
    ctx->pc = 0x14F1FCu;
    // 0x14f1fc: 0x0  nop
    ctx->pc = 0x14f1fcu;
    // NOP
label_14f200:
    // 0x14f200: 0x31020004  andi        $v0, $t0, 0x4
    ctx->pc = 0x14f200u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)4);
    // 0x14f204: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x14F204u;
    {
        const bool branch_taken_0x14f204 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F204u;
        // 0x14f208: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f204) {
            ctx->pc = 0x14F220u;
            goto label_14f220;
        }
    }
    ctx->pc = 0x14F20Cu;
    // 0x14f20c: 0xc053ca0  jal         func_14F280
    ctx->pc = 0x14F20Cu;
    SET_GPR_U32(ctx, 31, 0x14F214u);
    ctx->pc = 0x14F210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F20Cu;
    // 0x14f210: 0x140302d  daddu       $a2, $t2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F280u, 0x14F20Cu, 0x14F214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F214u;
label_14f214:
    // 0x14f214: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x14F214u;
    {
        const bool branch_taken_0x14f214 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f214) {
            ctx->pc = 0x14F270u;
            goto label_14f270;
        }
    }
    ctx->pc = 0x14F21Cu;
    // 0x14f21c: 0x0  nop
    ctx->pc = 0x14f21cu;
    // NOP
label_14f220:
    // 0x14f220: 0x31020008  andi        $v0, $t0, 0x8
    ctx->pc = 0x14f220u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)8);
    // 0x14f224: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14F224u;
    {
        const bool branch_taken_0x14f224 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14F228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F224u;
        // 0x14f228: 0x1031024  and         $v0, $t0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f224) {
            ctx->pc = 0x14F238u;
            goto label_14f238;
        }
    }
    ctx->pc = 0x14F22Cu;
    // 0x14f22c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x14F22Cu;
    {
        const bool branch_taken_0x14f22c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f22c) {
            ctx->pc = 0x14F248u;
            goto label_14f248;
        }
    }
    ctx->pc = 0x14F234u;
    // 0x14f234: 0x0  nop
    ctx->pc = 0x14f234u;
    // NOP
label_14f238:
    // 0x14f238: 0xc053ca0  jal         func_14F280
    ctx->pc = 0x14F238u;
    SET_GPR_U32(ctx, 31, 0x14F240u);
    ctx->pc = 0x14F23Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F238u;
    // 0x14f23c: 0x140282d  daddu       $a1, $t2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F280u, 0x14F238u, 0x14F240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F240u;
label_14f240:
    // 0x14f240: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x14F240u;
    {
        const bool branch_taken_0x14f240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f240) {
            ctx->pc = 0x14F270u;
            goto label_14f270;
        }
    }
    ctx->pc = 0x14F248u;
label_14f248:
    // 0x14f248: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x14f248u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f24c: 0xc053ca0  jal         func_14F280
    ctx->pc = 0x14F24Cu;
    SET_GPR_U32(ctx, 31, 0x14F254u);
    ctx->pc = 0x14F250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F24Cu;
    // 0x14f250: 0x140302d  daddu       $a2, $t2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F280u, 0x14F24Cu, 0x14F254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F254u;
label_14f254:
    // 0x14f254: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x14F254u;
    {
        const bool branch_taken_0x14f254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f254) {
            ctx->pc = 0x14F270u;
            goto label_14f270;
        }
    }
    ctx->pc = 0x14F25Cu;
    // 0x14f25c: 0x0  nop
    ctx->pc = 0x14f25cu;
    // NOP
label_14f260:
    // 0x14f260: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x14f260u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f264: 0x140302d  daddu       $a2, $t2, $zero
    ctx->pc = 0x14f264u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f268: 0xc053dc4  jal         func_14F710
    ctx->pc = 0x14F268u;
    SET_GPR_U32(ctx, 31, 0x14F270u);
    ctx->pc = 0x14F26Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F268u;
    // 0x14f26c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F710u, 0x14F268u, 0x14F270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F270u;
label_14f270:
    // 0x14f270: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14f270u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14f274: 0x3e00008  jr          $ra
    ctx->pc = 0x14F274u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14F278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F274u;
        // 0x14f278: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14F274u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14F27Cu;
}
