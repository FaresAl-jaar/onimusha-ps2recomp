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

// Function: sub_0025F4E0
// Address: 0x25f4e0 - 0x25f650
void sub_0025F4E0_0x25f4e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025F4E0_0x25f4e0");
#endif

    switch (ctx->pc) {
        case 0x25f534u: goto label_25f534;
        case 0x25f544u: goto label_25f544;
        case 0x25f558u: goto label_25f558;
        case 0x25f580u: goto label_25f580;
        case 0x25f5a8u: goto label_25f5a8;
        case 0x25f5b8u: goto label_25f5b8;
        case 0x25f5c8u: goto label_25f5c8;
        case 0x25f5e0u: goto label_25f5e0;
        case 0x25f5f8u: goto label_25f5f8;
        case 0x25f608u: goto label_25f608;
        default: break;
    }

    ctx->pc = 0x25f4e0u;

    // 0x25f4e0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x25f4e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x25f4e4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x25f4e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x25f4e8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x25f4e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x25f4ec: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x25f4ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x25f4f0: 0x140f02d  daddu       $fp, $t2, $zero
    ctx->pc = 0x25f4f0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f4f4: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x25f4f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x25f4f8: 0x100b82d  daddu       $s7, $t0, $zero
    ctx->pc = 0x25f4f8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f4fc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x25f4fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x25f500: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x25f500u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f504: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x25f504u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x25f508: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x25f508u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f50c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x25f50cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x25f510: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x25f510u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f514: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x25f514u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x25f518: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x25f518u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f51c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x25f51cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x25f520: 0x120902d  daddu       $s2, $t1, $zero
    ctx->pc = 0x25f520u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f524: 0x160882d  daddu       $s1, $t3, $zero
    ctx->pc = 0x25f524u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f528: 0x240400c0  addiu       $a0, $zero, 0xC0
    ctx->pc = 0x25f528u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x25f52c: 0xc0741a4  jal         func_1D0690
    ctx->pc = 0x25F52Cu;
    SET_GPR_U32(ctx, 31, 0x25F534u);
    ctx->pc = 0x25F530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F52Cu;
    // 0x25f530: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0690u, 0x25F52Cu, 0x25F534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F534u;
label_25f534:
    // 0x25f534: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x25F534u;
    {
        const bool branch_taken_0x25f534 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F534u;
        // 0x25f538: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f534) {
            ctx->pc = 0x25F548u;
            goto label_25f548;
        }
    }
    ctx->pc = 0x25F53Cu;
    // 0x25f53c: 0xc097a14  jal         func_25E850
    ctx->pc = 0x25F53Cu;
    SET_GPR_U32(ctx, 31, 0x25F544u);
    ctx->pc = 0x25F540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F53Cu;
    // 0x25f540: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25E850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25E850u, 0x25F53Cu, 0x25F544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F544u;
label_25f544:
    // 0x25f544: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x25f544u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25f548:
    // 0x25f548: 0x12000033  beqz        $s0, . + 4 + (0x33 << 2)
    ctx->pc = 0x25F548u;
    {
        const bool branch_taken_0x25f548 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F548u;
        // 0x25f54c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f548) {
            ctx->pc = 0x25F618u;
            goto label_25f618;
        }
    }
    ctx->pc = 0x25F550u;
    // 0x25f550: 0xc096c94  jal         func_25B250
    ctx->pc = 0x25F550u;
    SET_GPR_U32(ctx, 31, 0x25F558u);
    ctx->pc = 0x25F554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F550u;
    // 0x25f554: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B250u, 0x25F550u, 0x25F558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F558u;
label_25f558:
    // 0x25f558: 0x90450021  lbu         $a1, 0x21($v0)
    ctx->pc = 0x25f558u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 33)));
    // 0x25f55c: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x25f55cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f560: 0x90460022  lbu         $a2, 0x22($v0)
    ctx->pc = 0x25f560u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 34)));
    // 0x25f564: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x25f564u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f568: 0x3c0502d  daddu       $t2, $fp, $zero
    ctx->pc = 0x25f568u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f56c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x25f56cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f570: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25f570u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f574: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x25f574u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f578: 0xc096b38  jal         func_25ACE0
    ctx->pc = 0x25F578u;
    SET_GPR_U32(ctx, 31, 0x25F580u);
    ctx->pc = 0x25F57Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F578u;
    // 0x25f57c: 0x220582d  daddu       $t3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25ACE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25ACE0u, 0x25F578u, 0x25F580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F580u;
label_25f580:
    // 0x25f580: 0x92030064  lbu         $v1, 0x64($s0)
    ctx->pc = 0x25f580u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x25f584: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x25f584u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
    // 0x25f588: 0x93a200a8  lbu         $v0, 0xA8($sp)
    ctx->pc = 0x25f588u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25f58c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x25f58cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f590: 0x26040070  addiu       $a0, $s0, 0x70
    ctx->pc = 0x25f590u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    // 0x25f594: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x25f594u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x25f598: 0xa2020064  sb          $v0, 0x64($s0)
    ctx->pc = 0x25f598u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 100), (uint8_t)GPR_U32(ctx, 2));
    // 0x25f59c: 0x8fa500a0  lw          $a1, 0xA0($sp)
    ctx->pc = 0x25f59cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x25f5a0: 0xc097340  jal         func_25CD00
    ctx->pc = 0x25F5A0u;
    SET_GPR_U32(ctx, 31, 0x25F5A8u);
    ctx->pc = 0x25F5A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F5A0u;
    // 0x25f5a4: 0x24c65c80  addiu       $a2, $a2, 0x5C80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 23680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CD00u, 0x25F5A0u, 0x25F5A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F5A8u;
label_25f5a8:
    // 0x25f5a8: 0x24027ffd  addiu       $v0, $zero, 0x7FFD
    ctx->pc = 0x25f5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x25f5ac: 0x24040034  addiu       $a0, $zero, 0x34
    ctx->pc = 0x25f5acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x25f5b0: 0xc0741a4  jal         func_1D0690
    ctx->pc = 0x25F5B0u;
    SET_GPR_U32(ctx, 31, 0x25F5B8u);
    ctx->pc = 0x25F5B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F5B0u;
    // 0x25f5b4: 0xa6020056  sh          $v0, 0x56($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 86), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0690u, 0x25F5B0u, 0x25F5B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F5B8u;
label_25f5b8:
    // 0x25f5b8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25F5B8u;
    {
        const bool branch_taken_0x25f5b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F5B8u;
        // 0x25f5bc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f5b8) {
            ctx->pc = 0x25F5C8u;
            goto label_25f5c8;
        }
    }
    ctx->pc = 0x25F5C0u;
    // 0x25f5c0: 0xc07b98c  jal         func_1EE630
    ctx->pc = 0x25F5C0u;
    SET_GPR_U32(ctx, 31, 0x25F5C8u);
    ctx->pc = 0x1EE630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE630u, 0x25F5C0u, 0x25F5C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F5C8u;
label_25f5c8:
    // 0x25f5c8: 0xae0200b0  sw          $v0, 0xB0($s0)
    ctx->pc = 0x25f5c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 2));
    // 0x25f5cc: 0x8e0400b0  lw          $a0, 0xB0($s0)
    ctx->pc = 0x25f5ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
    // 0x25f5d0: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x25F5D0u;
    {
        const bool branch_taken_0x25f5d0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x25f5d0) {
            ctx->pc = 0x25F5E8u;
            goto label_25f5e8;
        }
    }
    ctx->pc = 0x25F5D8u;
    // 0x25f5d8: 0xc074268  jal         func_1D09A0
    ctx->pc = 0x25F5D8u;
    SET_GPR_U32(ctx, 31, 0x25F5E0u);
    ctx->pc = 0x25F5DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F5D8u;
    // 0x25f5dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D09A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D09A0u, 0x25F5D8u, 0x25F5E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F5E0u;
label_25f5e0:
    // 0x25f5e0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x25F5E0u;
    {
        const bool branch_taken_0x25f5e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F5E0u;
        // 0x25f5e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f5e0) {
            ctx->pc = 0x25F620u;
            goto label_25f620;
        }
    }
    ctx->pc = 0x25F5E8u;
label_25f5e8:
    // 0x25f5e8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x25f5e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f5ec: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x25f5ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f5f0: 0xc096c9c  jal         func_25B270
    ctx->pc = 0x25F5F0u;
    SET_GPR_U32(ctx, 31, 0x25F5F8u);
    ctx->pc = 0x25F5F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F5F0u;
    // 0x25f5f4: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B270u, 0x25F5F0u, 0x25F5F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F5F8u;
label_25f5f8:
    // 0x25f5f8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x25F5F8u;
    {
        const bool branch_taken_0x25f5f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25F5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F5F8u;
        // 0x25f5fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f5f8) {
            ctx->pc = 0x25F610u;
            goto label_25f610;
        }
    }
    ctx->pc = 0x25F600u;
    // 0x25f600: 0xc074268  jal         func_1D09A0
    ctx->pc = 0x25F600u;
    SET_GPR_U32(ctx, 31, 0x25F608u);
    ctx->pc = 0x1D09A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D09A0u, 0x25F600u, 0x25F608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F608u;
label_25f608:
    // 0x25f608: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x25F608u;
    {
        const bool branch_taken_0x25f608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F608u;
        // 0x25f60c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f608) {
            ctx->pc = 0x25F620u;
            goto label_25f620;
        }
    }
    ctx->pc = 0x25F610u;
label_25f610:
    // 0x25f610: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x25F610u;
    {
        const bool branch_taken_0x25f610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F610u;
        // 0x25f614: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f610) {
            ctx->pc = 0x25F620u;
            goto label_25f620;
        }
    }
    ctx->pc = 0x25F618u;
label_25f618:
    // 0x25f618: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x25f618u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f61c: 0x0  nop
    ctx->pc = 0x25f61cu;
    // NOP
label_25f620:
    // 0x25f620: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x25f620u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x25f624: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x25f624u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x25f628: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x25f628u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x25f62c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x25f62cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x25f630: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x25f630u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25f634: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x25f634u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25f638: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x25f638u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25f63c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x25f63cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25f640: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x25f640u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25f644: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25f644u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25f648: 0x3e00008  jr          $ra
    ctx->pc = 0x25F648u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25F64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F648u;
        // 0x25f64c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25F648u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25F650u;
}
