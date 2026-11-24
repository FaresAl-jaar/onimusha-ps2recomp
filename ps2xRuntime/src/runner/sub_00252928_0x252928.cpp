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

// Function: sub_00252928
// Address: 0x252928 - 0x252a38
void sub_00252928_0x252928(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00252928_0x252928");
#endif

    switch (ctx->pc) {
        case 0x252928u: goto label_252928;
        case 0x25292cu: goto label_25292c;
        case 0x252930u: goto label_252930;
        case 0x252934u: goto label_252934;
        case 0x252938u: goto label_252938;
        case 0x25293cu: goto label_25293c;
        case 0x252940u: goto label_252940;
        case 0x252944u: goto label_252944;
        case 0x252948u: goto label_252948;
        case 0x25294cu: goto label_25294c;
        case 0x252950u: goto label_252950;
        case 0x252954u: goto label_252954;
        case 0x252958u: goto label_252958;
        case 0x25295cu: goto label_25295c;
        case 0x252960u: goto label_252960;
        case 0x252964u: goto label_252964;
        case 0x252968u: goto label_252968;
        case 0x25296cu: goto label_25296c;
        case 0x252970u: goto label_252970;
        case 0x252974u: goto label_252974;
        case 0x252978u: goto label_252978;
        case 0x25297cu: goto label_25297c;
        case 0x252980u: goto label_252980;
        case 0x252984u: goto label_252984;
        case 0x252988u: goto label_252988;
        case 0x25298cu: goto label_25298c;
        case 0x252990u: goto label_252990;
        case 0x252994u: goto label_252994;
        case 0x252998u: goto label_252998;
        case 0x25299cu: goto label_25299c;
        case 0x2529a0u: goto label_2529a0;
        case 0x2529a4u: goto label_2529a4;
        case 0x2529a8u: goto label_2529a8;
        case 0x2529acu: goto label_2529ac;
        case 0x2529b0u: goto label_2529b0;
        case 0x2529b4u: goto label_2529b4;
        case 0x2529b8u: goto label_2529b8;
        case 0x2529bcu: goto label_2529bc;
        case 0x2529c0u: goto label_2529c0;
        case 0x2529c4u: goto label_2529c4;
        case 0x2529c8u: goto label_2529c8;
        case 0x2529ccu: goto label_2529cc;
        case 0x2529d0u: goto label_2529d0;
        case 0x2529d4u: goto label_2529d4;
        case 0x2529d8u: goto label_2529d8;
        case 0x2529dcu: goto label_2529dc;
        case 0x2529e0u: goto label_2529e0;
        case 0x2529e4u: goto label_2529e4;
        case 0x2529e8u: goto label_2529e8;
        case 0x2529ecu: goto label_2529ec;
        case 0x2529f0u: goto label_2529f0;
        case 0x2529f4u: goto label_2529f4;
        case 0x2529f8u: goto label_2529f8;
        case 0x2529fcu: goto label_2529fc;
        case 0x252a00u: goto label_252a00;
        case 0x252a04u: goto label_252a04;
        case 0x252a08u: goto label_252a08;
        case 0x252a0cu: goto label_252a0c;
        case 0x252a10u: goto label_252a10;
        case 0x252a14u: goto label_252a14;
        case 0x252a18u: goto label_252a18;
        case 0x252a1cu: goto label_252a1c;
        case 0x252a20u: goto label_252a20;
        case 0x252a24u: goto label_252a24;
        case 0x252a28u: goto label_252a28;
        case 0x252a2cu: goto label_252a2c;
        case 0x252a30u: goto label_252a30;
        case 0x252a34u: goto label_252a34;
        default: break;
    }

    ctx->pc = 0x252928u;

label_252928:
    // 0x252928: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x252928u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_25292c:
    // 0x25292c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x25292cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_252930:
    // 0x252930: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x252930u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_252934:
    // 0x252934: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x252934u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_252938:
    // 0x252938: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x252938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_25293c:
    // 0x25293c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x25293cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_252940:
    // 0x252940: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x252940u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
label_252944:
    // 0x252944: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x252944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
label_252948:
    // 0x252948: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x252948u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_25294c:
    // 0x25294c: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x25294cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
label_252950:
    // 0x252950: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x252950u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_252954:
    // 0x252954: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x252954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_252958:
    // 0x252958: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x252958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
label_25295c:
    // 0x25295c: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x25295cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_252960:
    // 0x252960: 0xc093f3a  jal         func_24FCE8
label_252964:
    if (ctx->pc == 0x252964u) {
        ctx->pc = 0x252964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252960u;
        // 0x252964: 0x26d50010  addiu       $s5, $s6, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 22), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x252968u;
        goto label_252968;
    }
    ctx->pc = 0x252960u;
    SET_GPR_U32(ctx, 31, 0x252968u);
    ctx->pc = 0x252964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252960u;
    // 0x252964: 0x26d50010  addiu       $s5, $s6, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 22), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24FCE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24FCE8u, 0x252960u, 0x252968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252968u;
label_252968:
    // 0x252968: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x252968u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
label_25296c:
    // 0x25296c: 0x2451fbb0  addiu       $s1, $v0, -0x450
    ctx->pc = 0x25296cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966192));
label_252970:
    // 0x252970: 0x82220000  lb          $v0, 0x0($s1)
    ctx->pc = 0x252970u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_252974:
    // 0x252974: 0x5457001f  bnel        $v0, $s7, . + 4 + (0x1F << 2)
label_252978:
    if (ctx->pc == 0x252978u) {
        ctx->pc = 0x252978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252974u;
        // 0x252978: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25297Cu;
        goto label_25297c;
    }
    ctx->pc = 0x252974u;
    {
        const bool branch_taken_0x252974 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 23));
        if (branch_taken_0x252974) {
            ctx->pc = 0x252978u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x252974u;
            // 0x252978: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2529F4u;
            goto label_2529f4;
        }
    }
    ctx->pc = 0x25297Cu;
label_25297c:
    // 0x25297c: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x25297cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
label_252980:
    // 0x252980: 0x24140080  addiu       $s4, $zero, 0x80
    ctx->pc = 0x252980u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_252984:
    // 0x252984: 0x1000000e  b           . + 4 + (0xE << 2)
label_252988:
    if (ctx->pc == 0x252988u) {
        ctx->pc = 0x252988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252984u;
        // 0x252988: 0x558021  addu        $s0, $v0, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25298Cu;
        goto label_25298c;
    }
    ctx->pc = 0x252984u;
    {
        const bool branch_taken_0x252984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x252988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252984u;
        // 0x252988: 0x558021  addu        $s0, $v0, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252984) {
            ctx->pc = 0x2529C0u;
            goto label_2529c0;
        }
    }
    ctx->pc = 0x25298Cu;
label_25298c:
    // 0x25298c: 0x0  nop
    ctx->pc = 0x25298cu;
    // NOP
label_252990:
    // 0x252990: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x252990u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_252994:
    // 0x252994: 0x9222000c  lbu         $v0, 0xC($s1)
    ctx->pc = 0x252994u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12)));
label_252998:
    // 0x252998: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x252998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_25299c:
    // 0x25299c: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x25299cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
label_2529a0:
    // 0x2529a0: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x2529a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_2529a4:
    // 0x2529a4: 0x96220002  lhu         $v0, 0x2($s1)
    ctx->pc = 0x2529a4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_2529a8:
    // 0x2529a8: 0x6ba30007  ldl         $v1, 0x7($sp)
    ctx->pc = 0x2529a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_2529ac:
    // 0x2529ac: 0x6fa30000  ldr         $v1, 0x0($sp)
    ctx->pc = 0x2529acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_2529b0:
    // 0x2529b0: 0xb203000f  sdl         $v1, 0xF($s0)
    ctx->pc = 0x2529b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2529b4:
    // 0x2529b4: 0xb6030008  sdr         $v1, 0x8($s0)
    ctx->pc = 0x2529b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2529b8:
    // 0x2529b8: 0xa6020002  sh          $v0, 0x2($s0)
    ctx->pc = 0x2529b8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
label_2529bc:
    // 0x2529bc: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x2529bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_2529c0:
    // 0x2529c0: 0x1254000f  beq         $s2, $s4, . + 4 + (0xF << 2)
label_2529c4:
    if (ctx->pc == 0x2529C4u) {
        ctx->pc = 0x2529C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2529C0u;
        // 0x2529c4: 0x3c067fff  lui         $a2, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32767 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2529C8u;
        goto label_2529c8;
    }
    ctx->pc = 0x2529C0u;
    {
        const bool branch_taken_0x2529c0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 20));
        ctx->pc = 0x2529C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2529C0u;
        // 0x2529c4: 0x3c067fff  lui         $a2, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32767 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2529c0) {
            ctx->pc = 0x252A00u;
            goto label_252a00;
        }
    }
    ctx->pc = 0x2529C8u;
label_2529c8:
    // 0x2529c8: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x2529c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2529cc:
    // 0x2529cc: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x2529ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_2529d0:
    // 0x2529d0: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x2529d0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
label_2529d4:
    // 0x2529d4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2529d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2529d8:
    // 0x2529d8: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x2529d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_2529dc:
    // 0x2529dc: 0x40f809  jalr        $v0
label_2529e0:
    if (ctx->pc == 0x2529E0u) {
        ctx->pc = 0x2529E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2529DCu;
        // 0x2529e0: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2529E4u;
        goto label_2529e4;
    }
    ctx->pc = 0x2529DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2529E4u);
        ctx->pc = 0x2529E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2529DCu;
        // 0x2529e0: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2529DCu, 0x2529E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2529E4u;
label_2529e4:
    // 0x2529e4: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x2529e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_2529e8:
    // 0x2529e8: 0x5460ffe9  bnel        $v1, $zero, . + 4 + (-0x17 << 2)
label_2529ec:
    if (ctx->pc == 0x2529ECu) {
        ctx->pc = 0x2529ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2529E8u;
        // 0x2529ec: 0xa2000000  sb          $zero, 0x0($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2529F0u;
        goto label_2529f0;
    }
    ctx->pc = 0x2529E8u;
    {
        const bool branch_taken_0x2529e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2529e8) {
            ctx->pc = 0x2529ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2529E8u;
            // 0x2529ec: 0xa2000000  sb          $zero, 0x0($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x252990u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_252990;
        }
    }
    ctx->pc = 0x2529F0u;
label_2529f0:
    // 0x2529f0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2529f0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_2529f4:
    // 0x2529f4: 0x2a620020  slti        $v0, $s3, 0x20
    ctx->pc = 0x2529f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)32) ? 1 : 0);
label_2529f8:
    // 0x2529f8: 0x1440ffdd  bnez        $v0, . + 4 + (-0x23 << 2)
label_2529fc:
    if (ctx->pc == 0x2529FCu) {
        ctx->pc = 0x2529FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2529F8u;
        // 0x2529fc: 0x26310014  addiu       $s1, $s1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x252A00u;
        goto label_252a00;
    }
    ctx->pc = 0x2529F8u;
    {
        const bool branch_taken_0x2529f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2529FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2529F8u;
        // 0x2529fc: 0x26310014  addiu       $s1, $s1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2529f8) {
            ctx->pc = 0x252970u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_252970;
        }
    }
    ctx->pc = 0x252A00u;
label_252a00:
    // 0x252a00: 0xc093f40  jal         func_24FD00
label_252a04:
    if (ctx->pc == 0x252A04u) {
        ctx->pc = 0x252A08u;
        goto label_252a08;
    }
    ctx->pc = 0x252A00u;
    SET_GPR_U32(ctx, 31, 0x252A08u);
    ctx->pc = 0x24FD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24FD00u, 0x252A00u, 0x252A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252A08u;
label_252a08:
    // 0x252a08: 0xaed20000  sw          $s2, 0x0($s6)
    ctx->pc = 0x252a08u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 18));
label_252a0c:
    // 0x252a0c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x252a0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_252a10:
    // 0x252a10: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x252a10u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_252a14:
    // 0x252a14: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x252a14u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_252a18:
    // 0x252a18: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x252a18u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_252a1c:
    // 0x252a1c: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x252a1cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_252a20:
    // 0x252a20: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x252a20u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_252a24:
    // 0x252a24: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x252a24u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_252a28:
    // 0x252a28: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x252a28u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_252a2c:
    // 0x252a2c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x252a2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_252a30:
    // 0x252a30: 0x3e00008  jr          $ra
label_252a34:
    if (ctx->pc == 0x252A34u) {
        ctx->pc = 0x252A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252A30u;
        // 0x252a34: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x252A38u;
        goto label_fallthrough_0x252a30;
    }
    ctx->pc = 0x252A30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x252A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252A30u;
        // 0x252a34: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x252A30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x252a30:
    ctx->pc = 0x252A38u;
}
