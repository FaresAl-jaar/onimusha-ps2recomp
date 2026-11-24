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

// Function: sub_0014E500
// Address: 0x14e500 - 0x14e5b4
void sub_0014E500_0x14e500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014E500_0x14e500");
#endif

    switch (ctx->pc) {
        case 0x14e54cu: goto label_14e54c;
        case 0x14e59cu: goto label_14e59c;
        default: break;
    }

    ctx->pc = 0x14e500u;

    // 0x14e500: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x14e500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x14e504: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x14e504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x14e508: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x14e508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x14e50c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14e50cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14e510: 0x90a300e4  lbu         $v1, 0xE4($a1)
    ctx->pc = 0x14e510u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 228)));
    // 0x14e514: 0xc3082b  sltu        $at, $a2, $v1
    ctx->pc = 0x14e514u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x14e518: 0x10200021  beqz        $at, . + 4 + (0x21 << 2)
    ctx->pc = 0x14E518u;
    {
        const bool branch_taken_0x14e518 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E518u;
        // 0x14e51c: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e518) {
            ctx->pc = 0x14E5A0u;
            goto label_14e5a0;
        }
    }
    ctx->pc = 0x14E520u;
    // 0x14e520: 0x8ca300ec  lw          $v1, 0xEC($a1)
    ctx->pc = 0x14e520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 236)));
    // 0x14e524: 0x62100  sll         $a0, $a2, 4
    ctx->pc = 0x14e524u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x14e528: 0x862023  subu        $a0, $a0, $a2
    ctx->pc = 0x14e528u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x14e52c: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x14e52cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x14e530: 0x648821  addu        $s1, $v1, $a0
    ctx->pc = 0x14e530u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x14e534: 0x9623001a  lhu         $v1, 0x1A($s1)
    ctx->pc = 0x14e534u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 26)));
    // 0x14e538: 0x14600019  bnez        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x14E538u;
    {
        const bool branch_taken_0x14e538 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x14E53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E538u;
        // 0x14e53c: 0x26240050  addiu       $a0, $s1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e538) {
            ctx->pc = 0x14E5A0u;
            goto label_14e5a0;
        }
    }
    ctx->pc = 0x14E540u;
    // 0x14e540: 0x26250040  addiu       $a1, $s1, 0x40
    ctx->pc = 0x14e540u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x14e544: 0xc0414d0  jal         func_105340
    ctx->pc = 0x14E544u;
    SET_GPR_U32(ctx, 31, 0x14E54Cu);
    ctx->pc = 0x14E548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E544u;
    // 0x14e548: 0x262600c0  addiu       $a2, $s1, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x14E544u, 0x14E54Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E54Cu;
label_14e54c:
    // 0x14e54c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x14e54cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x14e550: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x14e550u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14e554: 0x6000004  bltz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14E554u;
    {
        const bool branch_taken_0x14e554 = (GPR_S64(ctx, 16) < 0);
        ctx->pc = 0x14E558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E554u;
        // 0x14e558: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e554) {
            ctx->pc = 0x14E568u;
            goto label_14e568;
        }
    }
    ctx->pc = 0x14E55Cu;
    // 0x14e55c: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x14e55cu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14e560: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x14E560u;
    {
        const bool branch_taken_0x14e560 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E560u;
        // 0x14e564: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e560) {
            ctx->pc = 0x14E580u;
            goto label_14e580;
        }
    }
    ctx->pc = 0x14E568u;
label_14e568:
    // 0x14e568: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x14e568u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x14e56c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x14e56cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x14e570: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x14e570u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14e574: 0x0  nop
    ctx->pc = 0x14e574u;
    // NOP
    // 0x14e578: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x14e578u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x14e57c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x14e57cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_14e580:
    // 0x14e580: 0x0  nop
    ctx->pc = 0x14e580u;
    // NOP
    // 0x14e584: 0x0  nop
    ctx->pc = 0x14e584u;
    // NOP
    // 0x14e588: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x14e588u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x14e58c: 0x0  nop
    ctx->pc = 0x14e58cu;
    // NOP
    // 0x14e590: 0x26240050  addiu       $a0, $s1, 0x50
    ctx->pc = 0x14e590u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    // 0x14e594: 0xc0414dc  jal         func_105370
    ctx->pc = 0x14E594u;
    SET_GPR_U32(ctx, 31, 0x14E59Cu);
    ctx->pc = 0x14E598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E594u;
    // 0x14e598: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x14E594u, 0x14E59Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E59Cu;
label_14e59c:
    // 0x14e59c: 0xa630001a  sh          $s0, 0x1A($s1)
    ctx->pc = 0x14e59cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 26), (uint16_t)GPR_U32(ctx, 16));
label_14e5a0:
    // 0x14e5a0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x14e5a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14e5a4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14e5a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14e5a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14e5a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14e5ac: 0x3e00008  jr          $ra
    ctx->pc = 0x14E5ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14E5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E5ACu;
        // 0x14e5b0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14E5ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14E5B4u;
}
