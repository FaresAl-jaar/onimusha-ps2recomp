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

// Function: sub_003CC740
// Address: 0x3cc740 - 0x3cc8c8
void sub_003CC740_0x3cc740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003CC740_0x3cc740");
#endif

    switch (ctx->pc) {
        case 0x3cc794u: goto label_3cc794;
        case 0x3cc7a0u: goto label_3cc7a0;
        case 0x3cc7e8u: goto label_3cc7e8;
        case 0x3cc7f8u: goto label_3cc7f8;
        case 0x3cc808u: goto label_3cc808;
        case 0x3cc818u: goto label_3cc818;
        case 0x3cc828u: goto label_3cc828;
        case 0x3cc870u: goto label_3cc870;
        case 0x3cc880u: goto label_3cc880;
        case 0x3cc890u: goto label_3cc890;
        case 0x3cc8a0u: goto label_3cc8a0;
        case 0x3cc8b8u: goto label_3cc8b8;
        default: break;
    }

    ctx->pc = 0x3cc740u;

    // 0x3cc740: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3cc740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3cc744: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3cc744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3cc748: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3cc748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3cc74c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3cc74cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3cc750: 0x8c830148  lw          $v1, 0x148($a0)
    ctx->pc = 0x3cc750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
    // 0x3cc754: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x3cc754u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x3cc758: 0xac830148  sw          $v1, 0x148($a0)
    ctx->pc = 0x3cc758u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 328), GPR_U32(ctx, 3));
    // 0x3cc75c: 0x8c830148  lw          $v1, 0x148($a0)
    ctx->pc = 0x3cc75cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
    // 0x3cc760: 0x34631000  ori         $v1, $v1, 0x1000
    ctx->pc = 0x3cc760u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4096);
    // 0x3cc764: 0xac830148  sw          $v1, 0x148($a0)
    ctx->pc = 0x3cc764u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 328), GPR_U32(ctx, 3));
    // 0x3cc768: 0x9083065c  lbu         $v1, 0x65C($a0)
    ctx->pc = 0x3cc768u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1628)));
    // 0x3cc76c: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3CC76Cu;
    {
        const bool branch_taken_0x3cc76c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3CC770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC76Cu;
        // 0x3cc770: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cc76c) {
            ctx->pc = 0x3CC798u;
            goto label_3cc798;
        }
    }
    ctx->pc = 0x3CC774u;
    // 0x3cc774: 0xde030500  ld          $v1, 0x500($s0)
    ctx->pc = 0x3cc774u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 1280)));
    // 0x3cc778: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x3cc778u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x3cc77c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3cc77cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3cc780: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3cc780u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3cc784: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3CC784u;
    {
        const bool branch_taken_0x3cc784 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3cc784) {
            ctx->pc = 0x3CC798u;
            goto label_3cc798;
        }
    }
    ctx->pc = 0x3CC78Cu;
    // 0x3cc78c: 0xc0f3088  jal         func_3CC220
    ctx->pc = 0x3CC78Cu;
    SET_GPR_U32(ctx, 31, 0x3CC794u);
    ctx->pc = 0x3CC220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CC220u, 0x3CC78Cu, 0x3CC794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CC794u;
label_3cc794:
    // 0x3cc794: 0x0  nop
    ctx->pc = 0x3cc794u;
    // NOP
label_3cc798:
    // 0x3cc798: 0xc0a4d3c  jal         func_2934F0
    ctx->pc = 0x3CC798u;
    SET_GPR_U32(ctx, 31, 0x3CC7A0u);
    ctx->pc = 0x3CC79Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CC798u;
    // 0x3cc79c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2934F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2934F0u, 0x3CC798u, 0x3CC7A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CC7A0u;
label_3cc7a0:
    // 0x3cc7a0: 0x9204065c  lbu         $a0, 0x65C($s0)
    ctx->pc = 0x3cc7a0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1628)));
    // 0x3cc7a4: 0x240300f4  addiu       $v1, $zero, 0xF4
    ctx->pc = 0x3cc7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 244));
    // 0x3cc7a8: 0x1083001d  beq         $a0, $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x3CC7A8u;
    {
        const bool branch_taken_0x3cc7a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x3CC7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC7A8u;
        // 0x3cc7ac: 0x240300f3  addiu       $v1, $zero, 0xF3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 243));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cc7a8) {
            ctx->pc = 0x3CC820u;
            goto label_3cc820;
        }
    }
    ctx->pc = 0x3CC7B0u;
    // 0x3cc7b0: 0x10830017  beq         $a0, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x3CC7B0u;
    {
        const bool branch_taken_0x3cc7b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3cc7b0) {
            ctx->pc = 0x3CC810u;
            goto label_3cc810;
        }
    }
    ctx->pc = 0x3CC7B8u;
    // 0x3cc7b8: 0x240300f2  addiu       $v1, $zero, 0xF2
    ctx->pc = 0x3cc7b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 242));
    // 0x3cc7bc: 0x10830010  beq         $a0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x3CC7BCu;
    {
        const bool branch_taken_0x3cc7bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x3CC7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC7BCu;
        // 0x3cc7c0: 0x240300f1  addiu       $v1, $zero, 0xF1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 241));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cc7bc) {
            ctx->pc = 0x3CC800u;
            goto label_3cc800;
        }
    }
    ctx->pc = 0x3CC7C4u;
    // 0x3cc7c4: 0x1083000a  beq         $a0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x3CC7C4u;
    {
        const bool branch_taken_0x3cc7c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3cc7c4) {
            ctx->pc = 0x3CC7F0u;
            goto label_3cc7f0;
        }
    }
    ctx->pc = 0x3CC7CCu;
    // 0x3cc7cc: 0x240300f0  addiu       $v1, $zero, 0xF0
    ctx->pc = 0x3cc7ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    // 0x3cc7d0: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3CC7D0u;
    {
        const bool branch_taken_0x3cc7d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3cc7d0) {
            ctx->pc = 0x3CC7E0u;
            goto label_3cc7e0;
        }
    }
    ctx->pc = 0x3CC7D8u;
    // 0x3cc7d8: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x3CC7D8u;
    {
        const bool branch_taken_0x3cc7d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cc7d8) {
            ctx->pc = 0x3CC830u;
            goto label_3cc830;
        }
    }
    ctx->pc = 0x3CC7E0u;
label_3cc7e0:
    // 0x3cc7e0: 0xc0f2b24  jal         func_3CAC90
    ctx->pc = 0x3CC7E0u;
    SET_GPR_U32(ctx, 31, 0x3CC7E8u);
    ctx->pc = 0x3CC7E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CC7E0u;
    // 0x3cc7e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CAC90u, 0x3CC7E0u, 0x3CC7E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CC7E8u;
label_3cc7e8:
    // 0x3cc7e8: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x3CC7E8u;
    {
        const bool branch_taken_0x3cc7e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cc7e8) {
            ctx->pc = 0x3CC858u;
            goto label_3cc858;
        }
    }
    ctx->pc = 0x3CC7F0u;
label_3cc7f0:
    // 0x3cc7f0: 0xc0f2c9c  jal         func_3CB270
    ctx->pc = 0x3CC7F0u;
    SET_GPR_U32(ctx, 31, 0x3CC7F8u);
    ctx->pc = 0x3CC7F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CC7F0u;
    // 0x3cc7f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CB270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CB270u, 0x3CC7F0u, 0x3CC7F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CC7F8u;
label_3cc7f8:
    // 0x3cc7f8: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x3CC7F8u;
    {
        const bool branch_taken_0x3cc7f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cc7f8) {
            ctx->pc = 0x3CC858u;
            goto label_3cc858;
        }
    }
    ctx->pc = 0x3CC800u;
label_3cc800:
    // 0x3cc800: 0xc0f2e14  jal         func_3CB850
    ctx->pc = 0x3CC800u;
    SET_GPR_U32(ctx, 31, 0x3CC808u);
    ctx->pc = 0x3CC804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CC800u;
    // 0x3cc804: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CB850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CB850u, 0x3CC800u, 0x3CC808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CC808u;
label_3cc808:
    // 0x3cc808: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x3CC808u;
    {
        const bool branch_taken_0x3cc808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cc808) {
            ctx->pc = 0x3CC858u;
            goto label_3cc858;
        }
    }
    ctx->pc = 0x3CC810u;
label_3cc810:
    // 0x3cc810: 0xc0f2ee8  jal         func_3CBBA0
    ctx->pc = 0x3CC810u;
    SET_GPR_U32(ctx, 31, 0x3CC818u);
    ctx->pc = 0x3CC814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CC810u;
    // 0x3cc814: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CBBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CBBA0u, 0x3CC810u, 0x3CC818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CC818u;
label_3cc818:
    // 0x3cc818: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x3CC818u;
    {
        const bool branch_taken_0x3cc818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cc818) {
            ctx->pc = 0x3CC858u;
            goto label_3cc858;
        }
    }
    ctx->pc = 0x3CC820u;
label_3cc820:
    // 0x3cc820: 0xc0f2d68  jal         func_3CB5A0
    ctx->pc = 0x3CC820u;
    SET_GPR_U32(ctx, 31, 0x3CC828u);
    ctx->pc = 0x3CC824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CC820u;
    // 0x3cc824: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CB5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CB5A0u, 0x3CC820u, 0x3CC828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CC828u;
label_3cc828:
    // 0x3cc828: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x3CC828u;
    {
        const bool branch_taken_0x3cc828 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cc828) {
            ctx->pc = 0x3CC858u;
            goto label_3cc858;
        }
    }
    ctx->pc = 0x3CC830u;
label_3cc830:
    // 0x3cc830: 0x92050002  lbu         $a1, 0x2($s0)
    ctx->pc = 0x3cc830u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x3cc834: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x3cc834u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x3cc838: 0x24630b8c  addiu       $v1, $v1, 0xB8C
    ctx->pc = 0x3cc838u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2956));
    // 0x3cc83c: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x3cc83cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x3cc840: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x3cc840u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x3cc844: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x3cc844u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3cc848: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3cc848u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3cc84c: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x3cc84cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3cc850: 0xe6002b28  swc1        $f0, 0x2B28($s0)
    ctx->pc = 0x3cc850u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 11048), bits); }
    // 0x3cc854: 0x0  nop
    ctx->pc = 0x3cc854u;
    // NOP
label_3cc858:
    // 0x3cc858: 0x8e0329c0  lw          $v1, 0x29C0($s0)
    ctx->pc = 0x3cc858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10688)));
    // 0x3cc85c: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x3cc85cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3cc860: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x3CC860u;
    {
        const bool branch_taken_0x3cc860 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CC864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC860u;
        // 0x3cc864: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cc860) {
            ctx->pc = 0x3CC8B8u;
            goto label_3cc8b8;
        }
    }
    ctx->pc = 0x3CC868u;
    // 0x3cc868: 0xc0f2aa0  jal         func_3CAA80
    ctx->pc = 0x3CC868u;
    SET_GPR_U32(ctx, 31, 0x3CC870u);
    ctx->pc = 0x3CAA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CAA80u, 0x3CC868u, 0x3CC870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CC870u;
label_3cc870:
    // 0x3cc870: 0x26040090  addiu       $a0, $s0, 0x90
    ctx->pc = 0x3cc870u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x3cc874: 0x260600a0  addiu       $a2, $s0, 0xA0
    ctx->pc = 0x3cc874u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x3cc878: 0xc0414ca  jal         func_105328
    ctx->pc = 0x3CC878u;
    SET_GPR_U32(ctx, 31, 0x3CC880u);
    ctx->pc = 0x3CC87Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CC878u;
    // 0x3cc87c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x3CC878u, 0x3CC880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CC880u;
label_3cc880:
    // 0x3cc880: 0xc60c2b28  lwc1        $f12, 0x2B28($s0)
    ctx->pc = 0x3cc880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 11048)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3cc884: 0x26040090  addiu       $a0, $s0, 0x90
    ctx->pc = 0x3cc884u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x3cc888: 0xc096914  jal         func_25A450
    ctx->pc = 0x3CC888u;
    SET_GPR_U32(ctx, 31, 0x3CC890u);
    ctx->pc = 0x3CC88Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CC888u;
    // 0x3cc88c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A450u, 0x3CC888u, 0x3CC890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CC890u;
label_3cc890:
    // 0x3cc890: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x3cc890u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x3cc894: 0x26060090  addiu       $a2, $s0, 0x90
    ctx->pc = 0x3cc894u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x3cc898: 0xc0414ca  jal         func_105328
    ctx->pc = 0x3CC898u;
    SET_GPR_U32(ctx, 31, 0x3CC8A0u);
    ctx->pc = 0x3CC89Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CC898u;
    // 0x3cc89c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x3CC898u, 0x3CC8A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CC8A0u;
label_3cc8a0:
    // 0x3cc8a0: 0x3c023f7a  lui         $v0, 0x3F7A
    ctx->pc = 0x3cc8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16250 << 16));
    // 0x3cc8a4: 0x26040090  addiu       $a0, $s0, 0x90
    ctx->pc = 0x3cc8a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x3cc8a8: 0x3442e148  ori         $v0, $v0, 0xE148
    ctx->pc = 0x3cc8a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57672);
    // 0x3cc8ac: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3cc8acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3cc8b0: 0xc0414dc  jal         func_105370
    ctx->pc = 0x3CC8B0u;
    SET_GPR_U32(ctx, 31, 0x3CC8B8u);
    ctx->pc = 0x3CC8B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CC8B0u;
    // 0x3cc8b4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x3CC8B0u, 0x3CC8B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CC8B8u;
label_3cc8b8:
    // 0x3cc8b8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3cc8b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3cc8bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3cc8bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3cc8c0: 0x3e00008  jr          $ra
    ctx->pc = 0x3CC8C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3CC8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC8C0u;
        // 0x3cc8c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CC8C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3CC8C8u;
}
