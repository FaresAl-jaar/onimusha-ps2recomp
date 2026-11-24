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

// Function: sub_0025C8E0
// Address: 0x25c8e0 - 0x25ca44
void sub_0025C8E0_0x25c8e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025C8E0_0x25c8e0");
#endif

    switch (ctx->pc) {
        case 0x25c938u: goto label_25c938;
        case 0x25c954u: goto label_25c954;
        case 0x25c980u: goto label_25c980;
        case 0x25c990u: goto label_25c990;
        case 0x25c9b4u: goto label_25c9b4;
        case 0x25c9c0u: goto label_25c9c0;
        case 0x25c9dcu: goto label_25c9dc;
        case 0x25c9ecu: goto label_25c9ec;
        case 0x25ca14u: goto label_25ca14;
        default: break;
    }

    ctx->pc = 0x25c8e0u;

    // 0x25c8e0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x25c8e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x25c8e4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x25c8e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x25c8e8: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x25c8e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x25c8ec: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x25c8ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x25c8f0: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x25c8f0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c8f4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x25c8f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x25c8f8: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x25c8f8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c8fc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x25c8fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x25c900: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x25c900u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c904: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x25c904u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x25c908: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x25c908u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x25c90c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x25c90cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x25c910: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x25c910u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c914: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x25c914u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x25c918: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x25c918u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c91c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25c91cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x25c920: 0x120902d  daddu       $s2, $t1, $zero
    ctx->pc = 0x25c920u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c924: 0x140882d  daddu       $s1, $t2, $zero
    ctx->pc = 0x25c924u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c928: 0x160802d  daddu       $s0, $t3, $zero
    ctx->pc = 0x25c928u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c92c: 0x24844570  addiu       $a0, $a0, 0x4570
    ctx->pc = 0x25c92cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    // 0x25c930: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x25C930u;
    SET_GPR_U32(ctx, 31, 0x25C938u);
    ctx->pc = 0x25C934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25C930u;
    // 0x25c934: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x25C930u, 0x25C938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C938u;
label_25c938:
    // 0x25c938: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x25c938u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c93c: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x25c93cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c940: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x25c940u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c944: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x25c944u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c948: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x25c948u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c94c: 0xc0a231c  jal         func_288C70
    ctx->pc = 0x25C94Cu;
    SET_GPR_U32(ctx, 31, 0x25C954u);
    ctx->pc = 0x25C950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25C94Cu;
    // 0x25c950: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x288C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288C70u, 0x25C94Cu, 0x25C954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C954u;
label_25c954:
    // 0x25c954: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x25C954u;
    {
        const bool branch_taken_0x25c954 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25c954) {
            ctx->pc = 0x25C9F8u;
            goto label_25c9f8;
        }
    }
    ctx->pc = 0x25C95Cu;
    // 0x25c95c: 0x90420010  lbu         $v0, 0x10($v0)
    ctx->pc = 0x25c95cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x25c960: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x25c960u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x25c964: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x25c964u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x25c968: 0x8e82004c  lw          $v0, 0x4C($s4)
    ctx->pc = 0x25c968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 76)));
    // 0x25c96c: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x25c96cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x25c970: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x25c970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x25c974: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x25c974u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x25c978: 0xc0766ec  jal         func_1D9BB0
    ctx->pc = 0x25C978u;
    SET_GPR_U32(ctx, 31, 0x25C980u);
    ctx->pc = 0x25C97Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25C978u;
    // 0x25c97c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9BB0u, 0x25C978u, 0x25C980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C980u;
label_25c980:
    // 0x25c980: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x25c980u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c984: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x25c984u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x25c988: 0xc07679c  jal         func_1D9E70
    ctx->pc = 0x25C988u;
    SET_GPR_U32(ctx, 31, 0x25C990u);
    ctx->pc = 0x25C98Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25C988u;
    // 0x25c98c: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9E70u, 0x25C988u, 0x25C990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C990u;
label_25c990:
    // 0x25c990: 0x8e82004c  lw          $v0, 0x4C($s4)
    ctx->pc = 0x25c990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 76)));
    // 0x25c994: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x25c994u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c998: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x25c998u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x25c99c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25c99cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c9a0: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x25c9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x25c9a4: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x25c9a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x25c9a8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x25c9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25c9ac: 0xc0766b8  jal         func_1D9AE0
    ctx->pc = 0x25C9ACu;
    SET_GPR_U32(ctx, 31, 0x25C9B4u);
    ctx->pc = 0x25C9B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25C9ACu;
    // 0x25c9b0: 0x24450030  addiu       $a1, $v0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AE0u, 0x25C9ACu, 0x25C9B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C9B4u;
label_25c9b4:
    // 0x25c9b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25c9b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c9b8: 0xc0766dc  jal         func_1D9B70
    ctx->pc = 0x25C9B8u;
    SET_GPR_U32(ctx, 31, 0x25C9C0u);
    ctx->pc = 0x25C9BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25C9B8u;
    // 0x25c9bc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9B70u, 0x25C9B8u, 0x25C9C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C9C0u;
label_25c9c0:
    // 0x25c9c0: 0x8e82004c  lw          $v0, 0x4C($s4)
    ctx->pc = 0x25c9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 76)));
    // 0x25c9c4: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x25c9c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x25c9c8: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x25c9c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x25c9cc: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x25c9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x25c9d0: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x25c9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x25c9d4: 0xc076708  jal         func_1D9C20
    ctx->pc = 0x25C9D4u;
    SET_GPR_U32(ctx, 31, 0x25C9DCu);
    ctx->pc = 0x25C9D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25C9D4u;
    // 0x25c9d8: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9C20u, 0x25C9D4u, 0x25C9DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C9DCu;
label_25c9dc:
    // 0x25c9dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25c9dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c9e0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x25c9e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c9e4: 0xc0767a8  jal         func_1D9EA0
    ctx->pc = 0x25C9E4u;
    SET_GPR_U32(ctx, 31, 0x25C9ECu);
    ctx->pc = 0x25C9E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25C9E4u;
    // 0x25c9e8: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9EA0u, 0x25C9E4u, 0x25C9ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C9ECu;
label_25c9ec:
    // 0x25c9ec: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x25C9ECu;
    {
        const bool branch_taken_0x25c9ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25c9ec) {
            ctx->pc = 0x25CA18u;
            goto label_25ca18;
        }
    }
    ctx->pc = 0x25C9F4u;
    // 0x25c9f4: 0x0  nop
    ctx->pc = 0x25c9f4u;
    // NOP
label_25c9f8:
    // 0x25c9f8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x25c9f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c9fc: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x25c9fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ca00: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x25ca00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ca04: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x25ca04u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ca08: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x25ca08u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ca0c: 0xc0971e4  jal         func_25C790
    ctx->pc = 0x25CA0Cu;
    SET_GPR_U32(ctx, 31, 0x25CA14u);
    ctx->pc = 0x25CA10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25CA0Cu;
    // 0x25ca10: 0x200482d  daddu       $t1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C790u, 0x25CA0Cu, 0x25CA14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25CA14u;
label_25ca14:
    // 0x25ca14: 0x0  nop
    ctx->pc = 0x25ca14u;
    // NOP
label_25ca18:
    // 0x25ca18: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x25ca18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x25ca1c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x25ca1cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x25ca20: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x25ca20u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x25ca24: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x25ca24u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25ca28: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x25ca28u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25ca2c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x25ca2cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25ca30: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x25ca30u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25ca34: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x25ca34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25ca38: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25ca38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25ca3c: 0x3e00008  jr          $ra
    ctx->pc = 0x25CA3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25CA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CA3Cu;
        // 0x25ca40: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25CA3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25CA44u;
}
