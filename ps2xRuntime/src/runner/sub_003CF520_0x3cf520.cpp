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

// Function: sub_003CF520
// Address: 0x3cf520 - 0x3cf988
void sub_003CF520_0x3cf520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003CF520_0x3cf520");
#endif

    switch (ctx->pc) {
        case 0x3cf590u: goto label_3cf590;
        case 0x3cf5acu: goto label_3cf5ac;
        case 0x3cf5b4u: goto label_3cf5b4;
        case 0x3cf5e4u: goto label_3cf5e4;
        case 0x3cf5f4u: goto label_3cf5f4;
        case 0x3cf630u: goto label_3cf630;
        case 0x3cf640u: goto label_3cf640;
        case 0x3cf658u: goto label_3cf658;
        case 0x3cf664u: goto label_3cf664;
        case 0x3cf66cu: goto label_3cf66c;
        case 0x3cf678u: goto label_3cf678;
        case 0x3cf748u: goto label_3cf748;
        case 0x3cf758u: goto label_3cf758;
        case 0x3cf768u: goto label_3cf768;
        case 0x3cf77cu: goto label_3cf77c;
        case 0x3cf7a0u: goto label_3cf7a0;
        case 0x3cf804u: goto label_3cf804;
        case 0x3cf818u: goto label_3cf818;
        case 0x3cf820u: goto label_3cf820;
        case 0x3cf878u: goto label_3cf878;
        case 0x3cf8b0u: goto label_3cf8b0;
        case 0x3cf8d8u: goto label_3cf8d8;
        case 0x3cf934u: goto label_3cf934;
        case 0x3cf950u: goto label_3cf950;
        case 0x3cf960u: goto label_3cf960;
        default: break;
    }

    ctx->pc = 0x3cf520u;

    // 0x3cf520: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x3cf520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x3cf524: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x3cf524u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x3cf528: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x3cf528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x3cf52c: 0x24423084  addiu       $v0, $v0, 0x3084
    ctx->pc = 0x3cf52cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12420));
    // 0x3cf530: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x3cf530u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x3cf534: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x3cf534u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x3cf538: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x3cf538u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cf53c: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x3cf53cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x3cf540: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x3cf540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x3cf544: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x3cf544u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x3cf548: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3cf548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x3cf54c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3cf54cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cf550: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x3cf550u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x3cf554: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3cf554u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cf558: 0x84850510  lh          $a1, 0x510($a0)
    ctx->pc = 0x3cf558u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 1296)));
    // 0x3cf55c: 0x90840600  lbu         $a0, 0x600($a0)
    ctx->pc = 0x3cf55cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1536)));
    // 0x3cf560: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x3cf560u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x3cf564: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x3cf564u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3cf568: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3cf568u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3cf56c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3cf56cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3cf570: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x3cf570u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3cf574: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x3cf574u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3cf578: 0x1440007d  bnez        $v0, . + 4 + (0x7D << 2)
    ctx->pc = 0x3CF578u;
    {
        const bool branch_taken_0x3cf578 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3CF57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CF578u;
        // 0x3cf57c: 0xe0a02d  daddu       $s4, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cf578) {
            ctx->pc = 0x3CF770u;
            goto label_3cf770;
        }
    }
    ctx->pc = 0x3CF580u;
    // 0x3cf580: 0x8e050518  lw          $a1, 0x518($s0)
    ctx->pc = 0x3cf580u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1304)));
    // 0x3cf584: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x3cf584u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x3cf588: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x3CF588u;
    SET_GPR_U32(ctx, 31, 0x3CF590u);
    ctx->pc = 0x3CF58Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CF588u;
    // 0x3cf58c: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x3CF588u, 0x3CF590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CF590u;
label_3cf590:
    // 0x3cf590: 0x10400077  beqz        $v0, . + 4 + (0x77 << 2)
    ctx->pc = 0x3CF590u;
    {
        const bool branch_taken_0x3cf590 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CF594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CF590u;
        // 0x3cf594: 0x24450020  addiu       $a1, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cf590) {
            ctx->pc = 0x3CF770u;
            goto label_3cf770;
        }
    }
    ctx->pc = 0x3CF598u;
    // 0x3cf598: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x3cf598u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x3cf59c: 0x7a820000  lq          $v0, 0x0($s4)
    ctx->pc = 0x3cf59cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x3cf5a0: 0x260605a0  addiu       $a2, $s0, 0x5A0
    ctx->pc = 0x3cf5a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1440));
    // 0x3cf5a4: 0xc0766b8  jal         func_1D9AE0
    ctx->pc = 0x3CF5A4u;
    SET_GPR_U32(ctx, 31, 0x3CF5ACu);
    ctx->pc = 0x3CF5A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CF5A4u;
    // 0x3cf5a8: 0x7e0205a0  sq          $v0, 0x5A0($s0) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 16), 1440), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AE0u, 0x3CF5A4u, 0x3CF5ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CF5ACu;
label_3cf5ac:
    // 0x3cf5ac: 0xc096e44  jal         func_25B910
    ctx->pc = 0x3CF5ACu;
    SET_GPR_U32(ctx, 31, 0x3CF5B4u);
    ctx->pc = 0x3CF5B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CF5ACu;
    // 0x3cf5b0: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B910u, 0x3CF5ACu, 0x3CF5B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CF5B4u;
label_3cf5b4:
    // 0x3cf5b4: 0x92060600  lbu         $a2, 0x600($s0)
    ctx->pc = 0x3cf5b4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1536)));
    // 0x3cf5b8: 0x22c3c  dsll32      $a1, $v0, 16
    ctx->pc = 0x3cf5b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 16));
    // 0x3cf5bc: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x3cf5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x3cf5c0: 0x86040602  lh          $a0, 0x602($s0)
    ctx->pc = 0x3cf5c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1538)));
    // 0x3cf5c4: 0x24423074  addiu       $v0, $v0, 0x3074
    ctx->pc = 0x3cf5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12404));
    // 0x3cf5c8: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x3cf5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x3cf5cc: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x3cf5ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x3cf5d0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3cf5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3cf5d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3cf5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3cf5d8: 0x84460000  lh          $a2, 0x0($v0)
    ctx->pc = 0x3cf5d8u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3cf5dc: 0xc097498  jal         func_25D260
    ctx->pc = 0x3CF5DCu;
    SET_GPR_U32(ctx, 31, 0x3CF5E4u);
    ctx->pc = 0x3CF5E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CF5DCu;
    // 0x3cf5e0: 0x52c3f  dsra32      $a1, $a1, 16 (Delay Slot)
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25D260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D260u, 0x3CF5DCu, 0x3CF5E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CF5E4u;
label_3cf5e4:
    // 0x3cf5e4: 0xa6020602  sh          $v0, 0x602($s0)
    ctx->pc = 0x3cf5e4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1538), (uint16_t)GPR_U32(ctx, 2));
    // 0x3cf5e8: 0x86050602  lh          $a1, 0x602($s0)
    ctx->pc = 0x3cf5e8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1538)));
    // 0x3cf5ec: 0xc096e34  jal         func_25B8D0
    ctx->pc = 0x3CF5ECu;
    SET_GPR_U32(ctx, 31, 0x3CF5F4u);
    ctx->pc = 0x3CF5F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CF5ECu;
    // 0x3cf5f0: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B8D0u, 0x3CF5ECu, 0x3CF5F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CF5F4u;
label_3cf5f4:
    // 0x3cf5f4: 0x92060600  lbu         $a2, 0x600($s0)
    ctx->pc = 0x3cf5f4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1536)));
    // 0x3cf5f8: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x3cf5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x3cf5fc: 0x34428885  ori         $v0, $v0, 0x8885
    ctx->pc = 0x3cf5fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34949);
    // 0x3cf600: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x3cf600u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x3cf604: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3cf604u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3cf608: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x3cf608u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x3cf60c: 0x24633080  addiu       $v1, $v1, 0x3080
    ctx->pc = 0x3cf60cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12416));
    // 0x3cf610: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3cf610u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cf614: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x3cf614u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x3cf618: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x3cf618u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x3cf61c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3cf61cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3cf620: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3cf620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3cf624: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x3cf624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3cf628: 0xc076690  jal         func_1D9A40
    ctx->pc = 0x3CF628u;
    SET_GPR_U32(ctx, 31, 0x3CF630u);
    ctx->pc = 0x3CF62Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CF628u;
    // 0x3cf62c: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A40u, 0x3CF628u, 0x3CF630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CF630u;
label_3cf630:
    // 0x3cf630: 0x260405a0  addiu       $a0, $s0, 0x5A0
    ctx->pc = 0x3cf630u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1440));
    // 0x3cf634: 0x27a600d0  addiu       $a2, $sp, 0xD0
    ctx->pc = 0x3cf634u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x3cf638: 0xc0766a8  jal         func_1D9AA0
    ctx->pc = 0x3CF638u;
    SET_GPR_U32(ctx, 31, 0x3CF640u);
    ctx->pc = 0x3CF63Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CF638u;
    // 0x3cf63c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AA0u, 0x3CF638u, 0x3CF640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CF640u;
label_3cf640:
    // 0x3cf640: 0xc6800004  lwc1        $f0, 0x4($s4)
    ctx->pc = 0x3cf640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3cf644: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x3cf644u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x3cf648: 0x260505a0  addiu       $a1, $s0, 0x5A0
    ctx->pc = 0x3cf648u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1440));
    // 0x3cf64c: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x3cf64cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cf650: 0xc0766b8  jal         func_1D9AE0
    ctx->pc = 0x3CF650u;
    SET_GPR_U32(ctx, 31, 0x3CF658u);
    ctx->pc = 0x3CF654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CF650u;
    // 0x3cf654: 0xe60005a4  swc1        $f0, 0x5A4($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1444), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AE0u, 0x3CF650u, 0x3CF658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CF658u;
label_3cf658:
    // 0x3cf658: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x3cf658u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x3cf65c: 0xc07665c  jal         func_1D9970
    ctx->pc = 0x3CF65Cu;
    SET_GPR_U32(ctx, 31, 0x3CF664u);
    ctx->pc = 0x3CF660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CF65Cu;
    // 0x3cf660: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9970u, 0x3CF65Cu, 0x3CF664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CF664u;
label_3cf664:
    // 0x3cf664: 0xc0765d8  jal         func_1D9760
    ctx->pc = 0x3CF664u;
    SET_GPR_U32(ctx, 31, 0x3CF66Cu);
    ctx->pc = 0x3CF668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CF664u;
    // 0x3cf668: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9760u, 0x3CF664u, 0x3CF66Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CF66Cu;
label_3cf66c:
    // 0x3cf66c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3cf66cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x3cf670: 0xc096e44  jal         func_25B910
    ctx->pc = 0x3CF670u;
    SET_GPR_U32(ctx, 31, 0x3CF678u);
    ctx->pc = 0x3CF674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CF670u;
    // 0x3cf674: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B910u, 0x3CF670u, 0x3CF678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CF678u;
label_3cf678:
    // 0x3cf678: 0x862300c2  lh          $v1, 0xC2($s1)
    ctx->pc = 0x3cf678u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 194)));
    // 0x3cf67c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x3cf67cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x3cf680: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3cf680u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x3cf684: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x3cf684u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3cf688: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x3cf688u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x3cf68c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3cf68cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x3cf690: 0x28410801  slti        $at, $v0, 0x801
    ctx->pc = 0x3cf690u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2049) ? 1 : 0);
    // 0x3cf694: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x3CF694u;
    {
        const bool branch_taken_0x3cf694 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x3CF698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CF694u;
        // 0x3cf698: 0x2841f800  slti        $at, $v0, -0x800 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4294965248) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cf694) {
            ctx->pc = 0x3CF6A4u;
            goto label_3cf6a4;
        }
    }
    ctx->pc = 0x3CF69Cu;
    // 0x3cf69c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3CF69Cu;
    {
        const bool branch_taken_0x3cf69c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CF6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CF69Cu;
        // 0x3cf6a0: 0x2442f000  addiu       $v0, $v0, -0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cf69c) {
            ctx->pc = 0x3CF6B4u;
            goto label_3cf6b4;
        }
    }
    ctx->pc = 0x3CF6A4u;
label_3cf6a4:
    // 0x3cf6a4: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x3CF6A4u;
    {
        const bool branch_taken_0x3cf6a4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cf6a4) {
            ctx->pc = 0x3CF6B4u;
            goto label_3cf6b4;
        }
    }
    ctx->pc = 0x3CF6ACu;
    // 0x3cf6ac: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x3CF6ACu;
    {
        const bool branch_taken_0x3cf6ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CF6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CF6ACu;
        // 0x3cf6b0: 0x24421000  addiu       $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cf6ac) {
            ctx->pc = 0x3CF6B4u;
            goto label_3cf6b4;
        }
    }
    ctx->pc = 0x3CF6B4u;
label_3cf6b4:
    // 0x3cf6b4: 0x22c3c  dsll32      $a1, $v0, 16
    ctx->pc = 0x3cf6b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 16));
    // 0x3cf6b8: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x3cf6b8u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x3cf6bc: 0x28a1fc01  slti        $at, $a1, -0x3FF
    ctx->pc = 0x3cf6bcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4294966273) ? 1 : 0);
    // 0x3cf6c0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x3CF6C0u;
    {
        const bool branch_taken_0x3cf6c0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cf6c0) {
            ctx->pc = 0x3CF6D0u;
            goto label_3cf6d0;
        }
    }
    ctx->pc = 0x3CF6C8u;
    // 0x3cf6c8: 0x2405fc00  addiu       $a1, $zero, -0x400
    ctx->pc = 0x3cf6c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966272));
    // 0x3cf6cc: 0x0  nop
    ctx->pc = 0x3cf6ccu;
    // NOP
label_3cf6d0:
    // 0x3cf6d0: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x3cf6d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x3cf6d4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3cf6d4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x3cf6d8: 0x28420400  slti        $v0, $v0, 0x400
    ctx->pc = 0x3cf6d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x3cf6dc: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3CF6DCu;
    {
        const bool branch_taken_0x3cf6dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3cf6dc) {
            ctx->pc = 0x3CF6E8u;
            goto label_3cf6e8;
        }
    }
    ctx->pc = 0x3CF6E4u;
    // 0x3cf6e4: 0x24050400  addiu       $a1, $zero, 0x400
    ctx->pc = 0x3cf6e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_3cf6e8:
    // 0x3cf6e8: 0x92040600  lbu         $a0, 0x600($s0)
    ctx->pc = 0x3cf6e8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1536)));
    // 0x3cf6ec: 0xa31021  addu        $v0, $a1, $v1
    ctx->pc = 0x3cf6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x3cf6f0: 0x22c3c  dsll32      $a1, $v0, 16
    ctx->pc = 0x3cf6f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 16));
    // 0x3cf6f4: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x3cf6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x3cf6f8: 0x2442307c  addiu       $v0, $v0, 0x307C
    ctx->pc = 0x3cf6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12412));
    // 0x3cf6fc: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x3cf6fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x3cf700: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x3cf700u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3cf704: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3cf704u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3cf708: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3cf708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3cf70c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x3cf70cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3cf710: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x3cf710u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3cf714: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x3CF714u;
    {
        const bool branch_taken_0x3cf714 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3CF718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CF714u;
        // 0x3cf718: 0x52c3f  dsra32      $a1, $a1, 16 (Delay Slot)
        SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cf714) {
            ctx->pc = 0x3CF720u;
            goto label_3cf720;
        }
    }
    ctx->pc = 0x3CF71Cu;
    // 0x3cf71c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3cf71cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_3cf720:
    // 0x3cf720: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x3cf720u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x3cf724: 0x24423078  addiu       $v0, $v0, 0x3078
    ctx->pc = 0x3cf724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12408));
    // 0x3cf728: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3cf728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3cf72c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x3cf72cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3cf730: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x3cf730u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3cf734: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x3CF734u;
    {
        const bool branch_taken_0x3cf734 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3cf734) {
            ctx->pc = 0x3CF740u;
            goto label_3cf740;
        }
    }
    ctx->pc = 0x3CF73Cu;
    // 0x3cf73c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3cf73cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_3cf740:
    // 0x3cf740: 0xc096e34  jal         func_25B8D0
    ctx->pc = 0x3CF740u;
    SET_GPR_U32(ctx, 31, 0x3CF748u);
    ctx->pc = 0x3CF744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CF740u;
    // 0x3cf744: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B8D0u, 0x3CF740u, 0x3CF748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CF748u;
label_3cf748:
    // 0x3cf748: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x3cf748u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x3cf74c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3cf74cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x3cf750: 0xc076690  jal         func_1D9A40
    ctx->pc = 0x3CF750u;
    SET_GPR_U32(ctx, 31, 0x3CF758u);
    ctx->pc = 0x3CF754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CF750u;
    // 0x3cf754: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A40u, 0x3CF750u, 0x3CF758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CF758u;
label_3cf758:
    // 0x3cf758: 0x260405a0  addiu       $a0, $s0, 0x5A0
    ctx->pc = 0x3cf758u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1440));
    // 0x3cf75c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x3cf75cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cf760: 0xc0766a8  jal         func_1D9AA0
    ctx->pc = 0x3CF760u;
    SET_GPR_U32(ctx, 31, 0x3CF768u);
    ctx->pc = 0x3CF764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CF760u;
    // 0x3cf764: 0x27a600d0  addiu       $a2, $sp, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AA0u, 0x3CF760u, 0x3CF768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CF768u;
label_3cf768:
    // 0x3cf768: 0xc6800004  lwc1        $f0, 0x4($s4)
    ctx->pc = 0x3cf768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3cf76c: 0xe60005a4  swc1        $f0, 0x5A4($s0)
    ctx->pc = 0x3cf76cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1444), bits); }
label_3cf770:
    // 0x3cf770: 0x8e0405c0  lw          $a0, 0x5C0($s0)
    ctx->pc = 0x3cf770u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1472)));
    // 0x3cf774: 0xc096c80  jal         func_25B200
    ctx->pc = 0x3CF774u;
    SET_GPR_U32(ctx, 31, 0x3CF77Cu);
    ctx->pc = 0x3CF778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CF774u;
    // 0x3cf778: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B200u, 0x3CF774u, 0x3CF77Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CF77Cu;
label_3cf77c:
    // 0x3cf77c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3CF77Cu;
    {
        const bool branch_taken_0x3cf77c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cf77c) {
            ctx->pc = 0x3CF798u;
            goto label_3cf798;
        }
    }
    ctx->pc = 0x3CF784u;
    // 0x3cf784: 0x7aa40000  lq          $a0, 0x0($s5)
    ctx->pc = 0x3cf784u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x3cf788: 0x36430001  ori         $v1, $s2, 0x1
    ctx->pc = 0x3cf788u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)1);
    // 0x3cf78c: 0x307200ff  andi        $s2, $v1, 0xFF
    ctx->pc = 0x3cf78cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3cf790: 0x7c440040  sq          $a0, 0x40($v0)
    ctx->pc = 0x3cf790u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 64), GPR_VEC(ctx, 4));
    // 0x3cf794: 0x0  nop
    ctx->pc = 0x3cf794u;
    // NOP
label_3cf798:
    // 0x3cf798: 0xc096c80  jal         func_25B200
    ctx->pc = 0x3CF798u;
    SET_GPR_U32(ctx, 31, 0x3CF7A0u);
    ctx->pc = 0x3CF79Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CF798u;
    // 0x3cf79c: 0x8e0405c4  lw          $a0, 0x5C4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1476)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B200u, 0x3CF798u, 0x3CF7A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CF7A0u;
label_3cf7a0:
    // 0x3cf7a0: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x3CF7A0u;
    {
        const bool branch_taken_0x3cf7a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cf7a0) {
            ctx->pc = 0x3CF810u;
            goto label_3cf810;
        }
    }
    ctx->pc = 0x3CF7A8u;
    // 0x3cf7a8: 0x7a840000  lq          $a0, 0x0($s4)
    ctx->pc = 0x3cf7a8u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x3cf7ac: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x3cf7acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x3cf7b0: 0x7c440040  sq          $a0, 0x40($v0)
    ctx->pc = 0x3cf7b0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 64), GPR_VEC(ctx, 4));
    // 0x3cf7b4: 0x86020510  lh          $v0, 0x510($s0)
    ctx->pc = 0x3cf7b4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x3cf7b8: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x3cf7b8u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x3cf7bc: 0x0  nop
    ctx->pc = 0x3cf7bcu;
    // NOP
    // 0x3cf7c0: 0x0  nop
    ctx->pc = 0x3cf7c0u;
    // NOP
    // 0x3cf7c4: 0x1010  mfhi        $v0
    ctx->pc = 0x3cf7c4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x3cf7c8: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x3CF7C8u;
    {
        const bool branch_taken_0x3cf7c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3cf7c8) {
            ctx->pc = 0x3CF808u;
            goto label_3cf808;
        }
    }
    ctx->pc = 0x3CF7D0u;
    // 0x3cf7d0: 0x9203052e  lbu         $v1, 0x52E($s0)
    ctx->pc = 0x3cf7d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1326)));
    // 0x3cf7d4: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3cf7d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3cf7d8: 0x3c022300  lui         $v0, 0x2300
    ctx->pc = 0x3cf7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8960 << 16));
    // 0x3cf7dc: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3cf7dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3cf7e0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3cf7e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cf7e4: 0x34454e02  ori         $a1, $v0, 0x4E02
    ctx->pc = 0x3cf7e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)19970);
    // 0x3cf7e8: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x3cf7e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cf7ec: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3cf7ecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cf7f0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3cf7f0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cf7f4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3cf7f4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cf7f8: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x3cf7f8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cf7fc: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3CF7FCu;
    SET_GPR_U32(ctx, 31, 0x3CF804u);
    ctx->pc = 0x3CF800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CF7FCu;
    // 0x3cf800: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3CF7FCu, 0x3CF804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CF804u;
label_3cf804:
    // 0x3cf804: 0x0  nop
    ctx->pc = 0x3cf804u;
    // NOP
label_3cf808:
    // 0x3cf808: 0x36420001  ori         $v0, $s2, 0x1
    ctx->pc = 0x3cf808u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)1);
    // 0x3cf80c: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x3cf80cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_3cf810:
    // 0x3cf810: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3cf810u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cf814: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x3cf814u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3cf818:
    // 0x3cf818: 0xc096c80  jal         func_25B200
    ctx->pc = 0x3CF818u;
    SET_GPR_U32(ctx, 31, 0x3CF820u);
    ctx->pc = 0x3CF81Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CF818u;
    // 0x3cf81c: 0x8e2405b0  lw          $a0, 0x5B0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1456)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B200u, 0x3CF818u, 0x3CF820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CF820u;
label_3cf820:
    // 0x3cf820: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3CF820u;
    {
        const bool branch_taken_0x3cf820 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cf820) {
            ctx->pc = 0x3CF838u;
            goto label_3cf838;
        }
    }
    ctx->pc = 0x3CF828u;
    // 0x3cf828: 0x7a840000  lq          $a0, 0x0($s4)
    ctx->pc = 0x3cf828u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x3cf82c: 0x36430001  ori         $v1, $s2, 0x1
    ctx->pc = 0x3cf82cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)1);
    // 0x3cf830: 0x307200ff  andi        $s2, $v1, 0xFF
    ctx->pc = 0x3cf830u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3cf834: 0x7c440070  sq          $a0, 0x70($v0)
    ctx->pc = 0x3cf834u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 112), GPR_VEC(ctx, 4));
label_3cf838:
    // 0x3cf838: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x3cf838u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x3cf83c: 0x2a620004  slti        $v0, $s3, 0x4
    ctx->pc = 0x3cf83cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x3cf840: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x3CF840u;
    {
        const bool branch_taken_0x3cf840 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3CF844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CF840u;
        // 0x3cf844: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cf840) {
            ctx->pc = 0x3CF818u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3cf818;
        }
    }
    ctx->pc = 0x3CF848u;
    // 0x3cf848: 0x86020606  lh          $v0, 0x606($s0)
    ctx->pc = 0x3cf848u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1542)));
    // 0x3cf84c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3CF84Cu;
    {
        const bool branch_taken_0x3cf84c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cf84c) {
            ctx->pc = 0x3CF860u;
            goto label_3cf860;
        }
    }
    ctx->pc = 0x3CF854u;
    // 0x3cf854: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3cf854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3cf858: 0xa6020606  sh          $v0, 0x606($s0)
    ctx->pc = 0x3cf858u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1542), (uint16_t)GPR_U32(ctx, 2));
    // 0x3cf85c: 0x0  nop
    ctx->pc = 0x3cf85cu;
    // NOP
label_3cf860:
    // 0x3cf860: 0x86020606  lh          $v0, 0x606($s0)
    ctx->pc = 0x3cf860u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1542)));
    // 0x3cf864: 0x1c400002  bgtz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3CF864u;
    {
        const bool branch_taken_0x3cf864 = (GPR_S64(ctx, 2) > 0);
        if (branch_taken_0x3cf864) {
            ctx->pc = 0x3CF870u;
            goto label_3cf870;
        }
    }
    ctx->pc = 0x3CF86Cu;
    // 0x3cf86c: 0xa6000604  sh          $zero, 0x604($s0)
    ctx->pc = 0x3cf86cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1540), (uint16_t)GPR_U32(ctx, 0));
label_3cf870:
    // 0x3cf870: 0xc0c0818  jal         func_302060
    ctx->pc = 0x3CF870u;
    SET_GPR_U32(ctx, 31, 0x3CF878u);
    ctx->pc = 0x3CF874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CF870u;
    // 0x3cf874: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302060u, 0x3CF870u, 0x3CF878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CF878u;
label_3cf878:
    // 0x3cf878: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x3CF878u;
    {
        const bool branch_taken_0x3cf878 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3cf878) {
            ctx->pc = 0x3CF8B8u;
            goto label_3cf8b8;
        }
    }
    ctx->pc = 0x3CF880u;
    // 0x3cf880: 0x920705d2  lbu         $a3, 0x5D2($s0)
    ctx->pc = 0x3cf880u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1490)));
    // 0x3cf884: 0xc60e05c8  lwc1        $f14, 0x5C8($s0)
    ctx->pc = 0x3cf884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x3cf888: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x3cf888u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
    // 0x3cf88c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x3cf88cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cf890: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3cf890u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3cf894: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3cf894u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cf898: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x3cf898u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cf89c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3cf89cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cf8a0: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x3cf8a0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x3cf8a4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3cf8a4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cf8a8: 0xc0c07c4  jal         func_301F10
    ctx->pc = 0x3CF8A8u;
    SET_GPR_U32(ctx, 31, 0x3CF8B0u);
    ctx->pc = 0x3CF8ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CF8A8u;
    // 0x3cf8ac: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x301F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x301F10u, 0x3CF8A8u, 0x3CF8B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CF8B0u;
label_3cf8b0:
    // 0x3cf8b0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3CF8B0u;
    {
        const bool branch_taken_0x3cf8b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cf8b0) {
            ctx->pc = 0x3CF8D0u;
            goto label_3cf8d0;
        }
    }
    ctx->pc = 0x3CF8B8u;
label_3cf8b8:
    // 0x3cf8b8: 0x86030604  lh          $v1, 0x604($s0)
    ctx->pc = 0x3cf8b8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1540)));
    // 0x3cf8bc: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x3cf8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x3cf8c0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3cf8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3cf8c4: 0xa6030604  sh          $v1, 0x604($s0)
    ctx->pc = 0x3cf8c4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1540), (uint16_t)GPR_U32(ctx, 3));
    // 0x3cf8c8: 0xa6020606  sh          $v0, 0x606($s0)
    ctx->pc = 0x3cf8c8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1542), (uint16_t)GPR_U32(ctx, 2));
    // 0x3cf8cc: 0x0  nop
    ctx->pc = 0x3cf8ccu;
    // NOP
label_3cf8d0:
    // 0x3cf8d0: 0xc0c0818  jal         func_302060
    ctx->pc = 0x3CF8D0u;
    SET_GPR_U32(ctx, 31, 0x3CF8D8u);
    ctx->pc = 0x3CF8D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CF8D0u;
    // 0x3cf8d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302060u, 0x3CF8D0u, 0x3CF8D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CF8D8u;
label_3cf8d8:
    // 0x3cf8d8: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x3CF8D8u;
    {
        const bool branch_taken_0x3cf8d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3CF8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CF8D8u;
        // 0x3cf8dc: 0x3c010066  lui         $at, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cf8d8) {
            ctx->pc = 0x3CF938u;
            goto label_3cf938;
        }
    }
    ctx->pc = 0x3CF8E0u;
    // 0x3cf8e0: 0x27aa00c0  addiu       $t2, $sp, 0xC0
    ctx->pc = 0x3cf8e0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x3cf8e4: 0x78295c20  lq          $t1, 0x5C20($at)
    ctx->pc = 0x3cf8e4u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 1), 23584)));
    // 0x3cf8e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3cf8e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cf8ec: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x3cf8ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x3cf8f0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3cf8f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cf8f4: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3cf8f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3cf8f8: 0x7fa90090  sq          $t1, 0x90($sp)
    ctx->pc = 0x3cf8f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 9));
    // 0x3cf8fc: 0x78265c30  lq          $a2, 0x5C30($at)
    ctx->pc = 0x3cf8fcu;
    SET_GPR_VEC(ctx, 6, FAST_READ128(0x665C30u));
    // 0x3cf900: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3cf900u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3cf904: 0x7fa600a0  sq          $a2, 0xA0($sp)
    ctx->pc = 0x3cf904u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 6));
    // 0x3cf908: 0x78235c40  lq          $v1, 0x5C40($at)
    ctx->pc = 0x3cf908u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x665C40u));
    // 0x3cf90c: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3cf90cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3cf910: 0x7fa300b0  sq          $v1, 0xB0($sp)
    ctx->pc = 0x3cf910u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 3));
    // 0x3cf914: 0x78225c50  lq          $v0, 0x5C50($at)
    ctx->pc = 0x3cf914u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x665C50u));
    // 0x3cf918: 0x7d420000  sq          $v0, 0x0($t2)
    ctx->pc = 0x3cf918u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
    // 0x3cf91c: 0x7a820000  lq          $v0, 0x0($s4)
    ctx->pc = 0x3cf91cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x3cf920: 0x7d420000  sq          $v0, 0x0($t2)
    ctx->pc = 0x3cf920u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
    // 0x3cf924: 0x920605d3  lbu         $a2, 0x5D3($s0)
    ctx->pc = 0x3cf924u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1491)));
    // 0x3cf928: 0xc60c05c8  lwc1        $f12, 0x5C8($s0)
    ctx->pc = 0x3cf928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3cf92c: 0xc0c079c  jal         func_301E70
    ctx->pc = 0x3CF92Cu;
    SET_GPR_U32(ctx, 31, 0x3CF934u);
    ctx->pc = 0x3CF930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CF92Cu;
    // 0x3cf930: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x301E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x301E70u, 0x3CF92Cu, 0x3CF934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CF934u;
label_3cf934:
    // 0x3cf934: 0x0  nop
    ctx->pc = 0x3cf934u;
    // NOP
label_3cf938:
    // 0x3cf938: 0x86030604  lh          $v1, 0x604($s0)
    ctx->pc = 0x3cf938u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1540)));
    // 0x3cf93c: 0x28630004  slti        $v1, $v1, 0x4
    ctx->pc = 0x3cf93cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x3cf940: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3CF940u;
    {
        const bool branch_taken_0x3cf940 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3CF944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CF940u;
        // 0x3cf944: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cf940) {
            ctx->pc = 0x3CF950u;
            goto label_3cf950;
        }
    }
    ctx->pc = 0x3CF948u;
    // 0x3cf948: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x3CF948u;
    SET_GPR_U32(ctx, 31, 0x3CF950u);
    ctx->pc = 0x3CF94Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CF948u;
    // 0x3cf94c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3CF948u, 0x3CF950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CF950u;
label_3cf950:
    // 0x3cf950: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x3CF950u;
    {
        const bool branch_taken_0x3cf950 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x3CF954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CF950u;
        // 0x3cf954: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cf950) {
            ctx->pc = 0x3CF960u;
            goto label_3cf960;
        }
    }
    ctx->pc = 0x3CF958u;
    // 0x3cf958: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x3CF958u;
    SET_GPR_U32(ctx, 31, 0x3CF960u);
    ctx->pc = 0x3CF95Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CF958u;
    // 0x3cf95c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3CF958u, 0x3CF960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CF960u;
label_3cf960:
    // 0x3cf960: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x3cf960u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3cf964: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x3cf964u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3cf968: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x3cf968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3cf96c: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x3cf96cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3cf970: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x3cf970u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3cf974: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x3cf974u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3cf978: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x3cf978u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3cf97c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3cf97cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3cf980: 0x3e00008  jr          $ra
    ctx->pc = 0x3CF980u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3CF984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CF980u;
        // 0x3cf984: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CF980u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3CF988u;
}
