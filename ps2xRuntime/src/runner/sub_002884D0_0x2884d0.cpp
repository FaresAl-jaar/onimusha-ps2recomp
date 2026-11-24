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

// Function: sub_002884D0
// Address: 0x2884d0 - 0x2886f4
void sub_002884D0_0x2884d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002884D0_0x2884d0");
#endif

    switch (ctx->pc) {
        case 0x28850cu: goto label_28850c;
        case 0x28852cu: goto label_28852c;
        case 0x28853cu: goto label_28853c;
        case 0x288560u: goto label_288560;
        case 0x288570u: goto label_288570;
        case 0x288598u: goto label_288598;
        case 0x2885b0u: goto label_2885b0;
        case 0x2885e8u: goto label_2885e8;
        case 0x288600u: goto label_288600;
        case 0x288644u: goto label_288644;
        case 0x288654u: goto label_288654;
        case 0x288684u: goto label_288684;
        case 0x288694u: goto label_288694;
        case 0x2886a8u: goto label_2886a8;
        case 0x2886e0u: goto label_2886e0;
        default: break;
    }

    ctx->pc = 0x2884d0u;

    // 0x2884d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2884d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2884d4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2884d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2884d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2884d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2884dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2884dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2884e0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2884e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2884e4: 0xa3a0003f  sb          $zero, 0x3F($sp)
    ctx->pc = 0x2884e4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 63), (uint8_t)GPR_U32(ctx, 0));
    // 0x2884e8: 0x26260070  addiu       $a2, $s1, 0x70
    ctx->pc = 0x2884e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
    // 0x2884ec: 0x8ca2004c  lw          $v0, 0x4C($a1)
    ctx->pc = 0x2884ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 76)));
    // 0x2884f0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2884f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2884f4: 0x90830088  lbu         $v1, 0x88($a0)
    ctx->pc = 0x2884f4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 136)));
    // 0x2884f8: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x2884f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x2884fc: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x2884fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x288500: 0x26240040  addiu       $a0, $s1, 0x40
    ctx->pc = 0x288500u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x288504: 0xc07679c  jal         func_1D9E70
    ctx->pc = 0x288504u;
    SET_GPR_U32(ctx, 31, 0x28850Cu);
    ctx->pc = 0x288508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288504u;
    // 0x288508: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9E70u, 0x288504u, 0x28850Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28850Cu;
label_28850c:
    // 0x28850c: 0x8e28008c  lw          $t0, 0x8C($s1)
    ctx->pc = 0x28850cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 140)));
    // 0x288510: 0x1100000b  beqz        $t0, . + 4 + (0xB << 2)
    ctx->pc = 0x288510u;
    {
        const bool branch_taken_0x288510 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x288510) {
            ctx->pc = 0x288540u;
            goto label_288540;
        }
    }
    ctx->pc = 0x288518u;
    // 0x288518: 0x86260082  lh          $a2, 0x82($s1)
    ctx->pc = 0x288518u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 130)));
    // 0x28851c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28851cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288520: 0x8e270090  lw          $a3, 0x90($s1)
    ctx->pc = 0x288520u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x288524: 0xc0a1258  jal         func_284960
    ctx->pc = 0x288524u;
    SET_GPR_U32(ctx, 31, 0x28852Cu);
    ctx->pc = 0x288528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288524u;
    // 0x288528: 0x26250040  addiu       $a1, $s1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x284960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284960u, 0x288524u, 0x28852Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28852Cu;
label_28852c:
    // 0x28852c: 0x8e250090  lw          $a1, 0x90($s1)
    ctx->pc = 0x28852cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x288530: 0x8e26008c  lw          $a2, 0x8C($s1)
    ctx->pc = 0x288530u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 140)));
    // 0x288534: 0xc0a13c0  jal         func_284F00
    ctx->pc = 0x288534u;
    SET_GPR_U32(ctx, 31, 0x28853Cu);
    ctx->pc = 0x288538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288534u;
    // 0x288538: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x284F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284F00u, 0x288534u, 0x28853Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28853Cu;
label_28853c:
    // 0x28853c: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x28853cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_288540:
    // 0x288540: 0x8e2800a4  lw          $t0, 0xA4($s1)
    ctx->pc = 0x288540u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 164)));
    // 0x288544: 0x1100000c  beqz        $t0, . + 4 + (0xC << 2)
    ctx->pc = 0x288544u;
    {
        const bool branch_taken_0x288544 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x288544) {
            ctx->pc = 0x288578u;
            goto label_288578;
        }
    }
    ctx->pc = 0x28854Cu;
    // 0x28854c: 0x86260082  lh          $a2, 0x82($s1)
    ctx->pc = 0x28854cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 130)));
    // 0x288550: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x288550u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288554: 0x8e2700a8  lw          $a3, 0xA8($s1)
    ctx->pc = 0x288554u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 168)));
    // 0x288558: 0xc0a1258  jal         func_284960
    ctx->pc = 0x288558u;
    SET_GPR_U32(ctx, 31, 0x288560u);
    ctx->pc = 0x28855Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288558u;
    // 0x28855c: 0x26250040  addiu       $a1, $s1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x284960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284960u, 0x288558u, 0x288560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288560u;
label_288560:
    // 0x288560: 0x8e2500a8  lw          $a1, 0xA8($s1)
    ctx->pc = 0x288560u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 168)));
    // 0x288564: 0x8e2600a4  lw          $a2, 0xA4($s1)
    ctx->pc = 0x288564u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 164)));
    // 0x288568: 0xc0a13c0  jal         func_284F00
    ctx->pc = 0x288568u;
    SET_GPR_U32(ctx, 31, 0x288570u);
    ctx->pc = 0x28856Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288568u;
    // 0x28856c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x284F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284F00u, 0x288568u, 0x288570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288570u;
label_288570:
    // 0x288570: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x288570u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x288574: 0x0  nop
    ctx->pc = 0x288574u;
    // NOP
label_288578:
    // 0x288578: 0x8e28009c  lw          $t0, 0x9C($s1)
    ctx->pc = 0x288578u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
    // 0x28857c: 0x11000012  beqz        $t0, . + 4 + (0x12 << 2)
    ctx->pc = 0x28857Cu;
    {
        const bool branch_taken_0x28857c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x28857c) {
            ctx->pc = 0x2885C8u;
            goto label_2885c8;
        }
    }
    ctx->pc = 0x288584u;
    // 0x288584: 0x86260082  lh          $a2, 0x82($s1)
    ctx->pc = 0x288584u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 130)));
    // 0x288588: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x288588u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28858c: 0x8e2700a0  lw          $a3, 0xA0($s1)
    ctx->pc = 0x28858cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
    // 0x288590: 0xc0a1750  jal         func_285D40
    ctx->pc = 0x288590u;
    SET_GPR_U32(ctx, 31, 0x288598u);
    ctx->pc = 0x288594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288590u;
    // 0x288594: 0x26250040  addiu       $a1, $s1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x285D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285D40u, 0x288590u, 0x288598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288598u;
label_288598:
    // 0x288598: 0x8e2500a0  lw          $a1, 0xA0($s1)
    ctx->pc = 0x288598u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
    // 0x28859c: 0xc62c0084  lwc1        $f12, 0x84($s1)
    ctx->pc = 0x28859cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2885a0: 0x8e26009c  lw          $a2, 0x9C($s1)
    ctx->pc = 0x2885a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
    // 0x2885a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2885a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2885a8: 0xc0a18a8  jal         func_2862A0
    ctx->pc = 0x2885A8u;
    SET_GPR_U32(ctx, 31, 0x2885B0u);
    ctx->pc = 0x2885ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2885A8u;
    // 0x2885ac: 0x27a7003f  addiu       $a3, $sp, 0x3F (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 63));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2862A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2862A0u, 0x2885A8u, 0x2885B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2885B0u;
label_2885b0:
    // 0x2885b0: 0x93a3003f  lbu         $v1, 0x3F($sp)
    ctx->pc = 0x2885b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 63)));
    // 0x2885b4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2885B4u;
    {
        const bool branch_taken_0x2885b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2885B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2885B4u;
        // 0x2885b8: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2885b4) {
            ctx->pc = 0x2885C8u;
            goto label_2885c8;
        }
    }
    ctx->pc = 0x2885BCu;
    // 0x2885bc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2885bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2885c0: 0xa2230080  sb          $v1, 0x80($s1)
    ctx->pc = 0x2885c0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 128), (uint8_t)GPR_U32(ctx, 3));
    // 0x2885c4: 0x0  nop
    ctx->pc = 0x2885c4u;
    // NOP
label_2885c8:
    // 0x2885c8: 0x8e2800b4  lw          $t0, 0xB4($s1)
    ctx->pc = 0x2885c8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 180)));
    // 0x2885cc: 0x11000012  beqz        $t0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2885CCu;
    {
        const bool branch_taken_0x2885cc = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x2885cc) {
            ctx->pc = 0x288618u;
            goto label_288618;
        }
    }
    ctx->pc = 0x2885D4u;
    // 0x2885d4: 0x86260082  lh          $a2, 0x82($s1)
    ctx->pc = 0x2885d4u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 130)));
    // 0x2885d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2885d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2885dc: 0x8e2700b8  lw          $a3, 0xB8($s1)
    ctx->pc = 0x2885dcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
    // 0x2885e0: 0xc0a1750  jal         func_285D40
    ctx->pc = 0x2885E0u;
    SET_GPR_U32(ctx, 31, 0x2885E8u);
    ctx->pc = 0x2885E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2885E0u;
    // 0x2885e4: 0x26250040  addiu       $a1, $s1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x285D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285D40u, 0x2885E0u, 0x2885E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2885E8u;
label_2885e8:
    // 0x2885e8: 0x8e2500b8  lw          $a1, 0xB8($s1)
    ctx->pc = 0x2885e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
    // 0x2885ec: 0xc62c0084  lwc1        $f12, 0x84($s1)
    ctx->pc = 0x2885ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2885f0: 0x8e2600b4  lw          $a2, 0xB4($s1)
    ctx->pc = 0x2885f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 180)));
    // 0x2885f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2885f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2885f8: 0xc0a18a8  jal         func_2862A0
    ctx->pc = 0x2885F8u;
    SET_GPR_U32(ctx, 31, 0x288600u);
    ctx->pc = 0x2885FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2885F8u;
    // 0x2885fc: 0x27a7003f  addiu       $a3, $sp, 0x3F (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 63));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2862A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2862A0u, 0x2885F8u, 0x288600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288600u;
label_288600:
    // 0x288600: 0x93a3003f  lbu         $v1, 0x3F($sp)
    ctx->pc = 0x288600u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 63)));
    // 0x288604: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x288604u;
    {
        const bool branch_taken_0x288604 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x288608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288604u;
        // 0x288608: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288604) {
            ctx->pc = 0x288618u;
            goto label_288618;
        }
    }
    ctx->pc = 0x28860Cu;
    // 0x28860c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x28860cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x288610: 0xa2230081  sb          $v1, 0x81($s1)
    ctx->pc = 0x288610u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 129), (uint8_t)GPR_U32(ctx, 3));
    // 0x288614: 0x0  nop
    ctx->pc = 0x288614u;
    // NOP
label_288618:
    // 0x288618: 0x8e280094  lw          $t0, 0x94($s1)
    ctx->pc = 0x288618u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
    // 0x28861c: 0x1100000e  beqz        $t0, . + 4 + (0xE << 2)
    ctx->pc = 0x28861Cu;
    {
        const bool branch_taken_0x28861c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x28861c) {
            ctx->pc = 0x288658u;
            goto label_288658;
        }
    }
    ctx->pc = 0x288624u;
    // 0x288624: 0x92230080  lbu         $v1, 0x80($s1)
    ctx->pc = 0x288624u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x288628: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x288628u;
    {
        const bool branch_taken_0x288628 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x288628) {
            ctx->pc = 0x288658u;
            goto label_288658;
        }
    }
    ctx->pc = 0x288630u;
    // 0x288630: 0x86260082  lh          $a2, 0x82($s1)
    ctx->pc = 0x288630u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 130)));
    // 0x288634: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x288634u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288638: 0x8e270098  lw          $a3, 0x98($s1)
    ctx->pc = 0x288638u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
    // 0x28863c: 0xc0a14d0  jal         func_285340
    ctx->pc = 0x28863Cu;
    SET_GPR_U32(ctx, 31, 0x288644u);
    ctx->pc = 0x288640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28863Cu;
    // 0x288640: 0x26250040  addiu       $a1, $s1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x285340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285340u, 0x28863Cu, 0x288644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288644u;
label_288644:
    // 0x288644: 0x8e250098  lw          $a1, 0x98($s1)
    ctx->pc = 0x288644u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
    // 0x288648: 0x8e260094  lw          $a2, 0x94($s1)
    ctx->pc = 0x288648u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
    // 0x28864c: 0xc0a1638  jal         func_2858E0
    ctx->pc = 0x28864Cu;
    SET_GPR_U32(ctx, 31, 0x288654u);
    ctx->pc = 0x288650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28864Cu;
    // 0x288650: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2858E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2858E0u, 0x28864Cu, 0x288654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288654u;
label_288654:
    // 0x288654: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x288654u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_288658:
    // 0x288658: 0x8e2800ac  lw          $t0, 0xAC($s1)
    ctx->pc = 0x288658u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 172)));
    // 0x28865c: 0x1100000e  beqz        $t0, . + 4 + (0xE << 2)
    ctx->pc = 0x28865Cu;
    {
        const bool branch_taken_0x28865c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x28865c) {
            ctx->pc = 0x288698u;
            goto label_288698;
        }
    }
    ctx->pc = 0x288664u;
    // 0x288664: 0x92230081  lbu         $v1, 0x81($s1)
    ctx->pc = 0x288664u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 129)));
    // 0x288668: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x288668u;
    {
        const bool branch_taken_0x288668 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x288668) {
            ctx->pc = 0x288698u;
            goto label_288698;
        }
    }
    ctx->pc = 0x288670u;
    // 0x288670: 0x86260082  lh          $a2, 0x82($s1)
    ctx->pc = 0x288670u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 130)));
    // 0x288674: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x288674u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288678: 0x8e2700b0  lw          $a3, 0xB0($s1)
    ctx->pc = 0x288678u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
    // 0x28867c: 0xc0a14d0  jal         func_285340
    ctx->pc = 0x28867Cu;
    SET_GPR_U32(ctx, 31, 0x288684u);
    ctx->pc = 0x288680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28867Cu;
    // 0x288680: 0x26250040  addiu       $a1, $s1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x285340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285340u, 0x28867Cu, 0x288684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288684u;
label_288684:
    // 0x288684: 0x8e2500b0  lw          $a1, 0xB0($s1)
    ctx->pc = 0x288684u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
    // 0x288688: 0x8e2600ac  lw          $a2, 0xAC($s1)
    ctx->pc = 0x288688u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 172)));
    // 0x28868c: 0xc0a1638  jal         func_2858E0
    ctx->pc = 0x28868Cu;
    SET_GPR_U32(ctx, 31, 0x288694u);
    ctx->pc = 0x288690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28868Cu;
    // 0x288690: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2858E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2858E0u, 0x28868Cu, 0x288694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288694u;
label_288694:
    // 0x288694: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x288694u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_288698:
    // 0x288698: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x288698u;
    {
        const bool branch_taken_0x288698 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x28869Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288698u;
        // 0x28869c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288698) {
            ctx->pc = 0x2886A8u;
            goto label_2886a8;
        }
    }
    ctx->pc = 0x2886A0u;
    // 0x2886a0: 0xc096b54  jal         func_25AD50
    ctx->pc = 0x2886A0u;
    SET_GPR_U32(ctx, 31, 0x2886A8u);
    ctx->pc = 0x25AD50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD50u, 0x2886A0u, 0x2886A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2886A8u;
label_2886a8:
    // 0x2886a8: 0x86230054  lh          $v1, 0x54($s1)
    ctx->pc = 0x2886a8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x2886ac: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2886acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2886b0: 0xa6230054  sh          $v1, 0x54($s1)
    ctx->pc = 0x2886b0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 84), (uint16_t)GPR_U32(ctx, 3));
    // 0x2886b4: 0x86230054  lh          $v1, 0x54($s1)
    ctx->pc = 0x2886b4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x2886b8: 0x28637ff0  slti        $v1, $v1, 0x7FF0
    ctx->pc = 0x2886b8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)32752) ? 1 : 0);
    // 0x2886bc: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2886BCu;
    {
        const bool branch_taken_0x2886bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2886C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2886BCu;
        // 0x2886c0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2886bc) {
            ctx->pc = 0x2886C8u;
            goto label_2886c8;
        }
    }
    ctx->pc = 0x2886C4u;
    // 0x2886c4: 0xa6230054  sh          $v1, 0x54($s1)
    ctx->pc = 0x2886c4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 84), (uint16_t)GPR_U32(ctx, 3));
label_2886c8:
    // 0x2886c8: 0x92230050  lbu         $v1, 0x50($s1)
    ctx->pc = 0x2886c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x2886cc: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x2886ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x2886d0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2886D0u;
    {
        const bool branch_taken_0x2886d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2886D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2886D0u;
        // 0x2886d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2886d0) {
            ctx->pc = 0x2886E0u;
            goto label_2886e0;
        }
    }
    ctx->pc = 0x2886D8u;
    // 0x2886d8: 0xc096b58  jal         func_25AD60
    ctx->pc = 0x2886D8u;
    SET_GPR_U32(ctx, 31, 0x2886E0u);
    ctx->pc = 0x2886DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2886D8u;
    // 0x2886dc: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25AD60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD60u, 0x2886D8u, 0x2886E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2886E0u;
label_2886e0:
    // 0x2886e0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2886e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2886e4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2886e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2886e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2886e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2886ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2886ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2886F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2886ECu;
        // 0x2886f0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2886ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2886F4u;
}
