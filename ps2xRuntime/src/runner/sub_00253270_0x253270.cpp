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

// Function: sub_00253270
// Address: 0x253270 - 0x253308
void sub_00253270_0x253270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00253270_0x253270");
#endif

    switch (ctx->pc) {
        case 0x2532a4u: goto label_2532a4;
        case 0x2532acu: goto label_2532ac;
        case 0x2532c4u: goto label_2532c4;
        case 0x2532ccu: goto label_2532cc;
        case 0x2532d8u: goto label_2532d8;
        default: break;
    }

    ctx->pc = 0x253270u;

    // 0x253270: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x253270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x253274: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x253274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x253278: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x253278u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25327c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x25327cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x253280: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x253280u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253284: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x253284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x253288: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x253288u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25328c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x25328cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253290: 0x10803c  dsll32      $s0, $s0, 0
    ctx->pc = 0x253290u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
    // 0x253294: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x253294u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x253298: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x253298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x25329c: 0xc094c58  jal         func_253160
    ctx->pc = 0x25329Cu;
    SET_GPR_U32(ctx, 31, 0x2532A4u);
    ctx->pc = 0x2532A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25329Cu;
    // 0x2532a0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253160u, 0x25329Cu, 0x2532A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2532A4u;
label_2532a4:
    // 0x2532a4: 0xc049f18  jal         func_127C60
    ctx->pc = 0x2532A4u;
    SET_GPR_U32(ctx, 31, 0x2532ACu);
    ctx->pc = 0x2532A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2532A4u;
    // 0x2532a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127C60u, 0x2532A4u, 0x2532ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2532ACu;
label_2532ac:
    // 0x2532ac: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x2532acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
    // 0x2532b0: 0x2028023  subu        $s0, $s0, $v0
    ctx->pc = 0x2532b0u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2532b4: 0x24a5ef68  addiu       $a1, $a1, -0x1098
    ctx->pc = 0x2532b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963048));
    // 0x2532b8: 0x2606ffff  addiu       $a2, $s0, -0x1
    ctx->pc = 0x2532b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x2532bc: 0xc049f66  jal         func_127D98
    ctx->pc = 0x2532BCu;
    SET_GPR_U32(ctx, 31, 0x2532C4u);
    ctx->pc = 0x2532C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2532BCu;
    // 0x2532c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127D98u, 0x2532BCu, 0x2532C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2532C4u;
label_2532c4:
    // 0x2532c4: 0xc049f18  jal         func_127C60
    ctx->pc = 0x2532C4u;
    SET_GPR_U32(ctx, 31, 0x2532CCu);
    ctx->pc = 0x2532C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2532C4u;
    // 0x2532c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127C60u, 0x2532C4u, 0x2532CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2532CCu;
label_2532cc:
    // 0x2532cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2532ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2532d0: 0xc049f18  jal         func_127C60
    ctx->pc = 0x2532D0u;
    SET_GPR_U32(ctx, 31, 0x2532D8u);
    ctx->pc = 0x2532D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2532D0u;
    // 0x2532d4: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127C60u, 0x2532D0u, 0x2532D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2532D8u;
label_2532d8:
    // 0x2532d8: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2532d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2532dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2532dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2532e0: 0xc23023  subu        $a2, $a2, $v0
    ctx->pc = 0x2532e0u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2532e4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2532e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2532e8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2532e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2532ec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2532ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2532f0: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x2532f0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x2532f4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2532f4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2532f8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2532f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2532fc: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x2532fcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x253300: 0x8094c58  j           func_253160
    ctx->pc = 0x253300u;
    ctx->pc = 0x253304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253300u;
    // 0x253304: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253160u;
    sub_00253160_0x253160(rdram, ctx, runtime); return;
    ctx->pc = 0x253308u;
}
