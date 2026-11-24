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

// Function: sub_00167480
// Address: 0x167480 - 0x1675d4
void sub_00167480_0x167480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00167480_0x167480");
#endif

    switch (ctx->pc) {
        case 0x1674dcu: goto label_1674dc;
        case 0x1674e8u: goto label_1674e8;
        case 0x167508u: goto label_167508;
        case 0x167518u: goto label_167518;
        case 0x167568u: goto label_167568;
        case 0x167570u: goto label_167570;
        case 0x1675acu: goto label_1675ac;
        case 0x1675b8u: goto label_1675b8;
        default: break;
    }

    ctx->pc = 0x167480u;

    // 0x167480: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x167480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x167484: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x167484u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x167488: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x167488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x16748c: 0x2463adf0  addiu       $v1, $v1, -0x5210
    ctx->pc = 0x16748cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946288));
    // 0x167490: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x167490u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x167494: 0x24a2000f  addiu       $v0, $a1, 0xF
    ctx->pc = 0x167494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 15));
    // 0x167498: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x167498u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x16749c: 0x2406fff0  addiu       $a2, $zero, -0x10
    ctx->pc = 0x16749cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x1674a0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1674a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1674a4: 0x462824  and         $a1, $v0, $a2
    ctx->pc = 0x1674a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x1674a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1674a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1674ac: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1674acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1674b0: 0xac830118  sw          $v1, 0x118($a0)
    ctx->pc = 0x1674b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 280), GPR_U32(ctx, 3));
    // 0x1674b4: 0xac85007c  sw          $a1, 0x7C($a0)
    ctx->pc = 0x1674b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 5));
    // 0x1674b8: 0x94830068  lhu         $v1, 0x68($a0)
    ctx->pc = 0x1674b8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 104)));
    // 0x1674bc: 0x31140  sll         $v0, $v1, 5
    ctx->pc = 0x1674bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x1674c0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1674c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1674c4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1674c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1674c8: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x1674c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1674cc: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x1674ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x1674d0: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x1674d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x1674d4: 0xc0a83dc  jal         func_2A0F70
    ctx->pc = 0x1674D4u;
    SET_GPR_U32(ctx, 31, 0x1674DCu);
    ctx->pc = 0x1674D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1674D4u;
    // 0x1674d8: 0x462824  and         $a1, $v0, $a2 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A0F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A0F70u, 0x1674D4u, 0x1674DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1674DCu;
label_1674dc:
    // 0x1674dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1674dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1674e0: 0xc059d78  jal         func_1675E0
    ctx->pc = 0x1674E0u;
    SET_GPR_U32(ctx, 31, 0x1674E8u);
    ctx->pc = 0x1674E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1674E0u;
    // 0x1674e4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1675E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1675E0u, 0x1674E0u, 0x1674E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1674E8u;
label_1674e8:
    // 0x1674e8: 0x96230068  lhu         $v1, 0x68($s1)
    ctx->pc = 0x1674e8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 104)));
    // 0x1674ec: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1674ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1674f0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1674f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1674f4: 0x3082b  sltu        $at, $zero, $v1
    ctx->pc = 0x1674f4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1674f8: 0x10200017  beqz        $at, . + 4 + (0x17 << 2)
    ctx->pc = 0x1674F8u;
    {
        const bool branch_taken_0x1674f8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1674FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1674F8u;
        // 0x1674fc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1674f8) {
            ctx->pc = 0x167558u;
            goto label_167558;
        }
    }
    ctx->pc = 0x167500u;
    // 0x167500: 0x8e240078  lw          $a0, 0x78($s1)
    ctx->pc = 0x167500u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
    // 0x167504: 0x0  nop
    ctx->pc = 0x167504u;
    // NOP
label_167508:
    // 0x167508: 0x90850028  lbu         $a1, 0x28($a0)
    ctx->pc = 0x167508u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x16750c: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x16750Cu;
    {
        const bool branch_taken_0x16750c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x167510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16750Cu;
        // 0x167510: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16750c) {
            ctx->pc = 0x167538u;
            goto label_167538;
        }
    }
    ctx->pc = 0x167514u;
    // 0x167514: 0x0  nop
    ctx->pc = 0x167514u;
    // NOP
label_167518:
    // 0x167518: 0x52842  srl         $a1, $a1, 1
    ctx->pc = 0x167518u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
    // 0x16751c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x16751cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x167520: 0x0  nop
    ctx->pc = 0x167520u;
    // NOP
    // 0x167524: 0x0  nop
    ctx->pc = 0x167524u;
    // NOP
    // 0x167528: 0x0  nop
    ctx->pc = 0x167528u;
    // NOP
    // 0x16752c: 0x14a0fffa  bnez        $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x16752Cu;
    {
        const bool branch_taken_0x16752c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x16752c) {
            ctx->pc = 0x167518u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_167518;
        }
    }
    ctx->pc = 0x167534u;
    // 0x167534: 0x0  nop
    ctx->pc = 0x167534u;
    // NOP
label_167538:
    // 0x167538: 0x202082b  sltu        $at, $s0, $v0
    ctx->pc = 0x167538u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x16753c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x16753Cu;
    {
        const bool branch_taken_0x16753c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x16753c) {
            ctx->pc = 0x167548u;
            goto label_167548;
        }
    }
    ctx->pc = 0x167544u;
    // 0x167544: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x167544u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_167548:
    // 0x167548: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x167548u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x16754c: 0xc3102b  sltu        $v0, $a2, $v1
    ctx->pc = 0x16754cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x167550: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x167550u;
    {
        const bool branch_taken_0x167550 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x167554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167550u;
        // 0x167554: 0x24840050  addiu       $a0, $a0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167550) {
            ctx->pc = 0x167508u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_167508;
        }
    }
    ctx->pc = 0x167558u;
label_167558:
    // 0x167558: 0x10082b  sltu        $at, $zero, $s0
    ctx->pc = 0x167558u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x16755c: 0xae32015c  sw          $s2, 0x15C($s1)
    ctx->pc = 0x16755cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 348), GPR_U32(ctx, 18));
    // 0x167560: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x167560u;
    {
        const bool branch_taken_0x167560 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x167564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167560u;
        // 0x167564: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167560) {
            ctx->pc = 0x167588u;
            goto label_167588;
        }
    }
    ctx->pc = 0x167568u;
label_167568:
    // 0x167568: 0xc04150c  jal         func_105430
    ctx->pc = 0x167568u;
    SET_GPR_U32(ctx, 31, 0x167570u);
    ctx->pc = 0x16756Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167568u;
    // 0x16756c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105430u, 0x167568u, 0x167570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167570u;
label_167570:
    // 0x167570: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x167570u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x167574: 0x26520040  addiu       $s2, $s2, 0x40
    ctx->pc = 0x167574u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x167578: 0x270102b  sltu        $v0, $s3, $s0
    ctx->pc = 0x167578u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x16757c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x16757Cu;
    {
        const bool branch_taken_0x16757c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16757c) {
            ctx->pc = 0x167568u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_167568;
        }
    }
    ctx->pc = 0x167584u;
    // 0x167584: 0x0  nop
    ctx->pc = 0x167584u;
    // NOP
label_167588:
    // 0x167588: 0x101180  sll         $v0, $s0, 6
    ctx->pc = 0x167588u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x16758c: 0xae320160  sw          $s2, 0x160($s1)
    ctx->pc = 0x16758cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 352), GPR_U32(ctx, 18));
    // 0x167590: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x167590u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167594: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x167594u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x167598: 0xae320164  sw          $s2, 0x164($s1)
    ctx->pc = 0x167598u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 356), GPR_U32(ctx, 18));
    // 0x16759c: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x16759cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1675a0: 0xae200158  sw          $zero, 0x158($s1)
    ctx->pc = 0x1675a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 344), GPR_U32(ctx, 0));
    // 0x1675a4: 0xc0a8968  jal         func_2A25A0
    ctx->pc = 0x1675A4u;
    SET_GPR_U32(ctx, 31, 0x1675ACu);
    ctx->pc = 0x1675A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1675A4u;
    // 0x1675a8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A25A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A25A0u, 0x1675A4u, 0x1675ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1675ACu;
label_1675ac:
    // 0x1675ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1675acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1675b0: 0xc059ec8  jal         func_167B20
    ctx->pc = 0x1675B0u;
    SET_GPR_U32(ctx, 31, 0x1675B8u);
    ctx->pc = 0x1675B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1675B0u;
    // 0x1675b4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x167B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167B20u, 0x1675B0u, 0x1675B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1675B8u;
label_1675b8:
    // 0x1675b8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1675b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1675bc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1675bcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1675c0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1675c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1675c4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1675c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1675c8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1675c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1675cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1675CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1675D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1675CCu;
        // 0x1675d0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1675CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1675D4u;
}
