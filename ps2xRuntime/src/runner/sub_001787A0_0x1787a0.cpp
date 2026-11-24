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

// Function: sub_001787A0
// Address: 0x1787a0 - 0x178ad4
void sub_001787A0_0x1787a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001787A0_0x1787a0");
#endif

    switch (ctx->pc) {
        case 0x1787dcu: goto label_1787dc;
        case 0x178818u: goto label_178818;
        case 0x178828u: goto label_178828;
        case 0x1788f8u: goto label_1788f8;
        case 0x178a28u: goto label_178a28;
        default: break;
    }

    ctx->pc = 0x1787a0u;

    // 0x1787a0: 0x27bdfc00  addiu       $sp, $sp, -0x400
    ctx->pc = 0x1787a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966272));
    // 0x1787a4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1787a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x1787a8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1787a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x1787ac: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1787acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1787b0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1787b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1787b4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1787b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1787b8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1787b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1787bc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1787bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1787c0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1787c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1787c4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1787c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1787c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1787c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1787cc: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1787ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1787d0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1787d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1787d4: 0xc040f7e  jal         func_103DF8
    ctx->pc = 0x1787D4u;
    SET_GPR_U32(ctx, 31, 0x1787DCu);
    ctx->pc = 0x1787D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1787D4u;
    // 0x1787d8: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x103DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103DF8u, 0x1787D4u, 0x1787DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1787DCu;
label_1787dc:
    // 0x1787dc: 0x97a700e0  lhu         $a3, 0xE0($sp)
    ctx->pc = 0x1787dcu;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1787e0: 0x2408fe00  addiu       $t0, $zero, -0x200
    ctx->pc = 0x1787e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966784));
    // 0x1787e4: 0x97a20108  lhu         $v0, 0x108($sp)
    ctx->pc = 0x1787e4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x1787e8: 0x300901ff  andi        $t1, $zero, 0x1FF
    ctx->pc = 0x1787e8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)511);
    // 0x1787ec: 0x64030040  daddiu      $v1, $zero, 0x40
    ctx->pc = 0x1787ecu;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)64);
    // 0x1787f0: 0x26042860  addiu       $a0, $s0, 0x2860
    ctx->pc = 0x1787f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 10336));
    // 0x1787f4: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x1787f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1787f8: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x1787f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x1787fc: 0xe83824  and         $a3, $a3, $t0
    ctx->pc = 0x1787fcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 8));
    // 0x178800: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x178800u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x178804: 0xe93825  or          $a3, $a3, $t1
    ctx->pc = 0x178804u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 9));
    // 0x178808: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x178808u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x17880c: 0xa7a700e0  sh          $a3, 0xE0($sp)
    ctx->pc = 0x17880cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 224), (uint16_t)GPR_U32(ctx, 7));
    // 0x178810: 0xc049522  jal         func_125488
    ctx->pc = 0x178810u;
    SET_GPR_U32(ctx, 31, 0x178818u);
    ctx->pc = 0x178814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178810u;
    // 0x178814: 0xa7a20108  sh          $v0, 0x108($sp) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 29), 264), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125488u, 0x178810u, 0x178818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178818u;
label_178818:
    // 0x178818: 0x26042898  addiu       $a0, $s0, 0x2898
    ctx->pc = 0x178818u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 10392));
    // 0x17881c: 0x27a500f8  addiu       $a1, $sp, 0xF8
    ctx->pc = 0x17881cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
    // 0x178820: 0xc049522  jal         func_125488
    ctx->pc = 0x178820u;
    SET_GPR_U32(ctx, 31, 0x178828u);
    ctx->pc = 0x178824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178820u;
    // 0x178824: 0x24060028  addiu       $a2, $zero, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125488u, 0x178820u, 0x178828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178828u;
label_178828:
    // 0x178828: 0x24041080  addiu       $a0, $zero, 0x1080
    ctx->pc = 0x178828u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4224));
    // 0x17882c: 0x111c3c  dsll32      $v1, $s1, 16
    ctx->pc = 0x17882cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 16));
    // 0x178830: 0xfe0428c0  sd          $a0, 0x28C0($s0)
    ctx->pc = 0x178830u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 10432), GPR_U64(ctx, 4));
    // 0x178834: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x178834u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x178838: 0xfe042888  sd          $a0, 0x2888($s0)
    ctx->pc = 0x178838u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 10376), GPR_U64(ctx, 4));
    // 0x17883c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x17883cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178840: 0xdfa400e8  ld          $a0, 0xE8($sp)
    ctx->pc = 0x178840u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x178844: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x178844u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178848: 0x33043  sra         $a2, $v1, 1
    ctx->pc = 0x178848u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 1));
    // 0x17884c: 0xfe0428c8  sd          $a0, 0x28C8($s0)
    ctx->pc = 0x17884cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 10440), GPR_U64(ctx, 4));
    // 0x178850: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x178850u;
    {
        const bool branch_taken_0x178850 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x178854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178850u;
        // 0x178854: 0xfe042890  sd          $a0, 0x2890($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 10384), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178850) {
            ctx->pc = 0x178860u;
            goto label_178860;
        }
    }
    ctx->pc = 0x178858u;
    // 0x178858: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x178858u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x17885c: 0x33043  sra         $a2, $v1, 1
    ctx->pc = 0x17885cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 1));
label_178860:
    // 0x178860: 0x24030800  addiu       $v1, $zero, 0x800
    ctx->pc = 0x178860u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x178864: 0x3c057800  lui         $a1, 0x7800
    ctx->pc = 0x178864u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)30720 << 16));
    // 0x178868: 0x662023  subu        $a0, $v1, $a2
    ctx->pc = 0x178868u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x17886c: 0x24c30800  addiu       $v1, $a2, 0x800
    ctx->pc = 0x17886cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 2048));
    // 0x178870: 0x43100  sll         $a2, $a0, 4
    ctx->pc = 0x178870u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x178874: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x178874u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x178878: 0xc59025  or          $s2, $a2, $a1
    ctx->pc = 0x178878u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x17887c: 0x34038800  ori         $v1, $zero, 0x8800
    ctx->pc = 0x17887cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34816);
    // 0x178880: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x178880u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x178884: 0x838825  or          $s1, $a0, $v1
    ctx->pc = 0x178884u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x178888: 0x3c033a00  lui         $v1, 0x3A00
    ctx->pc = 0x178888u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)14848 << 16));
    // 0x17888c: 0x3c180008  lui         $t8, 0x8
    ctx->pc = 0x17888cu;
    SET_GPR_S32(ctx, 24, (int32_t)((uint32_t)8 << 16));
    // 0x178890: 0x346c00c0  ori         $t4, $v1, 0xC0
    ctx->pc = 0x178890u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)192);
    // 0x178894: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x178894u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x178898: 0x3c030005  lui         $v1, 0x5
    ctx->pc = 0x178898u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)5 << 16));
    // 0x17889c: 0x3c151000  lui         $s5, 0x1000
    ctx->pc = 0x17889cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)4096 << 16));
    // 0x1788a0: 0x346417fd  ori         $a0, $v1, 0x17FD
    ctx->pc = 0x1788a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)6141);
    // 0x1788a4: 0x240f0018  addiu       $t7, $zero, 0x18
    ctx->pc = 0x1788a4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1788a8: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x1788a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x1788ac: 0x37190040  ori         $t9, $t8, 0x40
    ctx->pc = 0x1788acu;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 24) | (uint64_t)(uint16_t)64);
    // 0x1788b0: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x1788b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x1788b4: 0x240e0019  addiu       $t6, $zero, 0x19
    ctx->pc = 0x1788b4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x1788b8: 0x7fa300b0  sq          $v1, 0xB0($sp)
    ctx->pc = 0x1788b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 3));
    // 0x1788bc: 0x240d004e  addiu       $t5, $zero, 0x4E
    ctx->pc = 0x1788bcu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x1788c0: 0x36a30010  ori         $v1, $s5, 0x10
    ctx->pc = 0x1788c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)16);
    // 0x1788c4: 0x240b001a  addiu       $t3, $zero, 0x1A
    ctx->pc = 0x1788c4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x1788c8: 0x7fa300c0  sq          $v1, 0xC0($sp)
    ctx->pc = 0x1788c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 3));
    // 0x1788cc: 0x24090047  addiu       $t1, $zero, 0x47
    ctx->pc = 0x1788ccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x1788d0: 0x15183c  dsll32      $v1, $s5, 0
    ctx->pc = 0x1788d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) << (32 + 0));
    // 0x1788d4: 0x3c080003  lui         $t0, 0x3
    ctx->pc = 0x1788d4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)3 << 16));
    // 0x1788d8: 0x3415800f  ori         $s5, $zero, 0x800F
    ctx->pc = 0x1788d8u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32783);
    // 0x1788dc: 0x24070006  addiu       $a3, $zero, 0x6
    ctx->pc = 0x1788dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1788e0: 0x2a31825  or          $v1, $s5, $v1
    ctx->pc = 0x1788e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) | GPR_U64(ctx, 3));
    // 0x1788e4: 0xa303c  dsll32      $a2, $t2, 0
    ctx->pc = 0x1788e4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 10) << (32 + 0));
    // 0x1788e8: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1788e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1788ec: 0x24170005  addiu       $s7, $zero, 0x5
    ctx->pc = 0x1788ecu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1788f0: 0x241e0008  addiu       $fp, $zero, 0x8
    ctx->pc = 0x1788f0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1788f4: 0x7fa300a0  sq          $v1, 0xA0($sp)
    ctx->pc = 0x1788f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 3));
label_1788f8:
    // 0x1788f8: 0x7ba300c0  lq          $v1, 0xC0($sp)
    ctx->pc = 0x1788f8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1788fc: 0x267528d0  addiu       $s5, $s3, 0x28D0
    ctx->pc = 0x1788fcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 19), 10448));
    // 0x178900: 0xfe6328d0  sd          $v1, 0x28D0($s3)
    ctx->pc = 0x178900u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 10448), GPR_U64(ctx, 3));
    // 0x178904: 0xae6028d8  sw          $zero, 0x28D8($s3)
    ctx->pc = 0x178904u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 10456), GPR_U32(ctx, 0));
    // 0x178908: 0x7ba300b0  lq          $v1, 0xB0($sp)
    ctx->pc = 0x178908u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x17890c: 0xae6328dc  sw          $v1, 0x28DC($s3)
    ctx->pc = 0x17890cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 10460), GPR_U32(ctx, 3));
    // 0x178910: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x178910u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x178914: 0xfe6329e0  sd          $v1, 0x29E0($s3)
    ctx->pc = 0x178914u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 10720), GPR_U64(ctx, 3));
    // 0x178918: 0xae6029e8  sw          $zero, 0x29E8($s3)
    ctx->pc = 0x178918u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 10728), GPR_U32(ctx, 0));
    // 0x17891c: 0xae6029ec  sw          $zero, 0x29EC($s3)
    ctx->pc = 0x17891cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 10732), GPR_U32(ctx, 0));
    // 0x178920: 0x7ba300a0  lq          $v1, 0xA0($sp)
    ctx->pc = 0x178920u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x178924: 0xfe6328e0  sd          $v1, 0x28E0($s3)
    ctx->pc = 0x178924u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 10464), GPR_U64(ctx, 3));
    // 0x178928: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x178928u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x17892c: 0xfe6328e8  sd          $v1, 0x28E8($s3)
    ctx->pc = 0x17892cu;
    WRITE64(ADD32(GPR_U32(ctx, 19), 10472), GPR_U64(ctx, 3));
    // 0x178930: 0x2403004c  addiu       $v1, $zero, 0x4C
    ctx->pc = 0x178930u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x178934: 0xfe6328f8  sd          $v1, 0x28F8($s3)
    ctx->pc = 0x178934u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 10488), GPR_U64(ctx, 3));
    // 0x178938: 0x2403004d  addiu       $v1, $zero, 0x4D
    ctx->pc = 0x178938u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x17893c: 0x16800004  bnez        $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x17893Cu;
    {
        const bool branch_taken_0x17893c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x178940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17893Cu;
        // 0x178940: 0xfe632908  sd          $v1, 0x2908($s3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 19), 10504), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17893c) {
            ctx->pc = 0x178950u;
            goto label_178950;
        }
    }
    ctx->pc = 0x178944u;
    // 0x178944: 0xfeb90020  sd          $t9, 0x20($s5)
    ctx->pc = 0x178944u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 32), GPR_U64(ctx, 25));
    // 0x178948: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x178948u;
    {
        const bool branch_taken_0x178948 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17894Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178948u;
        // 0x17894c: 0xfeb90030  sd          $t9, 0x30($s5) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 21), 48), GPR_U64(ctx, 25));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178948) {
            ctx->pc = 0x178958u;
            goto label_178958;
        }
    }
    ctx->pc = 0x178950u;
label_178950:
    // 0x178950: 0xfeb80020  sd          $t8, 0x20($s5)
    ctx->pc = 0x178950u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 32), GPR_U64(ctx, 24));
    // 0x178954: 0xfeb80030  sd          $t8, 0x30($s5)
    ctx->pc = 0x178954u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 48), GPR_U64(ctx, 24));
label_178958:
    // 0x178958: 0xfeaf0048  sd          $t7, 0x48($s5)
    ctx->pc = 0x178958u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 72), GPR_U64(ctx, 15));
    // 0x17895c: 0xfeae0058  sd          $t6, 0x58($s5)
    ctx->pc = 0x17895cu;
    WRITE64(ADD32(GPR_U32(ctx, 21), 88), GPR_U64(ctx, 14));
    // 0x178960: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x178960u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x178964: 0xfead0068  sd          $t5, 0x68($s5)
    ctx->pc = 0x178964u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 104), GPR_U64(ctx, 13));
    // 0x178968: 0x24160009  addiu       $s6, $zero, 0x9
    ctx->pc = 0x178968u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x17896c: 0xfeac0060  sd          $t4, 0x60($s5)
    ctx->pc = 0x17896cu;
    WRITE64(ADD32(GPR_U32(ctx, 21), 96), GPR_U64(ctx, 12));
    // 0x178970: 0x2a830002  slti        $v1, $s4, 0x2
    ctx->pc = 0x178970u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x178974: 0xfeab0078  sd          $t3, 0x78($s5)
    ctx->pc = 0x178974u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 120), GPR_U64(ctx, 11));
    // 0x178978: 0x26730120  addiu       $s3, $s3, 0x120
    ctx->pc = 0x178978u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 288));
    // 0x17897c: 0xfeaa0070  sd          $t2, 0x70($s5)
    ctx->pc = 0x17897cu;
    WRITE64(ADD32(GPR_U32(ctx, 21), 112), GPR_U64(ctx, 10));
    // 0x178980: 0xfea90088  sd          $t1, 0x88($s5)
    ctx->pc = 0x178980u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 136), GPR_U64(ctx, 9));
    // 0x178984: 0xfea80080  sd          $t0, 0x80($s5)
    ctx->pc = 0x178984u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 128), GPR_U64(ctx, 8));
    // 0x178988: 0xfea00098  sd          $zero, 0x98($s5)
    ctx->pc = 0x178988u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 152), GPR_U64(ctx, 0));
    // 0x17898c: 0xfea70090  sd          $a3, 0x90($s5)
    ctx->pc = 0x17898cu;
    WRITE64(ADD32(GPR_U32(ctx, 21), 144), GPR_U64(ctx, 7));
    // 0x178990: 0xfeaa00a8  sd          $t2, 0xA8($s5)
    ctx->pc = 0x178990u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 168), GPR_U64(ctx, 10));
    // 0x178994: 0xfea600a0  sd          $a2, 0xA0($s5)
    ctx->pc = 0x178994u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 160), GPR_U64(ctx, 6));
    // 0x178998: 0xfea500b8  sd          $a1, 0xB8($s5)
    ctx->pc = 0x178998u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 184), GPR_U64(ctx, 5));
    // 0x17899c: 0xfeb200b0  sd          $s2, 0xB0($s5)
    ctx->pc = 0x17899cu;
    WRITE64(ADD32(GPR_U32(ctx, 21), 176), GPR_U64(ctx, 18));
    // 0x1789a0: 0xfeb700c8  sd          $s7, 0xC8($s5)
    ctx->pc = 0x1789a0u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 200), GPR_U64(ctx, 23));
    // 0x1789a4: 0xfeb100c0  sd          $s1, 0xC0($s5)
    ctx->pc = 0x1789a4u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 192), GPR_U64(ctx, 17));
    // 0x1789a8: 0xfea900d8  sd          $t1, 0xD8($s5)
    ctx->pc = 0x1789a8u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 216), GPR_U64(ctx, 9));
    // 0x1789ac: 0xfea400d0  sd          $a0, 0xD0($s5)
    ctx->pc = 0x1789acu;
    WRITE64(ADD32(GPR_U32(ctx, 21), 208), GPR_U64(ctx, 4));
    // 0x1789b0: 0xfebe00e8  sd          $fp, 0xE8($s5)
    ctx->pc = 0x1789b0u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 232), GPR_U64(ctx, 30));
    // 0x1789b4: 0xfea000e0  sd          $zero, 0xE0($s5)
    ctx->pc = 0x1789b4u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 224), GPR_U64(ctx, 0));
    // 0x1789b8: 0xfeb600f8  sd          $s6, 0xF8($s5)
    ctx->pc = 0x1789b8u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 248), GPR_U64(ctx, 22));
    // 0x1789bc: 0xfea000f0  sd          $zero, 0xF0($s5)
    ctx->pc = 0x1789bcu;
    WRITE64(ADD32(GPR_U32(ctx, 21), 240), GPR_U64(ctx, 0));
    // 0x1789c0: 0x2416003f  addiu       $s6, $zero, 0x3F
    ctx->pc = 0x1789c0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x1789c4: 0x1460ffcc  bnez        $v1, . + 4 + (-0x34 << 2)
    ctx->pc = 0x1789C4u;
    {
        const bool branch_taken_0x1789c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1789C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1789C4u;
        // 0x1789c8: 0xfeb60108  sd          $s6, 0x108($s5) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 21), 264), GPR_U64(ctx, 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1789c4) {
            ctx->pc = 0x1788F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1788f8;
        }
    }
    ctx->pc = 0x1789CCu;
    // 0x1789cc: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1789ccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1789d0: 0x3c040005  lui         $a0, 0x5
    ctx->pc = 0x1789d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)5 << 16));
    // 0x1789d4: 0x3c0e1000  lui         $t6, 0x1000
    ctx->pc = 0x1789d4u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)4096 << 16));
    // 0x1789d8: 0x348817fd  ori         $t0, $a0, 0x17FD
    ctx->pc = 0x1789d8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)6141);
    // 0x1789dc: 0x35d50009  ori         $s5, $t6, 0x9
    ctx->pc = 0x1789dcu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)9);
    // 0x1789e0: 0x3c045000  lui         $a0, 0x5000
    ctx->pc = 0x1789e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20480 << 16));
    // 0x1789e4: 0x3c0c0008  lui         $t4, 0x8
    ctx->pc = 0x1789e4u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)8 << 16));
    // 0x1789e8: 0x34940009  ori         $s4, $a0, 0x9
    ctx->pc = 0x1789e8u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)9);
    // 0x1789ec: 0xe703c  dsll32      $t6, $t6, 0
    ctx->pc = 0x1789ecu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) << (32 + 0));
    // 0x1789f0: 0x34048008  ori         $a0, $zero, 0x8008
    ctx->pc = 0x1789f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32776);
    // 0x1789f4: 0x240b0018  addiu       $t3, $zero, 0x18
    ctx->pc = 0x1789f4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1789f8: 0x8e9025  or          $s2, $a0, $t6
    ctx->pc = 0x1789f8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 4) | GPR_U64(ctx, 14));
    // 0x1789fc: 0x358d0040  ori         $t5, $t4, 0x40
    ctx->pc = 0x1789fcu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)64);
    // 0x178a00: 0x240a0019  addiu       $t2, $zero, 0x19
    ctx->pc = 0x178a00u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x178a04: 0x24090047  addiu       $t1, $zero, 0x47
    ctx->pc = 0x178a04u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x178a08: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x178a08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x178a0c: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x178a0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x178a10: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x178a10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178a14: 0x3c137000  lui         $s3, 0x7000
    ctx->pc = 0x178a14u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)28672 << 16));
    // 0x178a18: 0x2411000e  addiu       $s1, $zero, 0xE
    ctx->pc = 0x178a18u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x178a1c: 0x240f004c  addiu       $t7, $zero, 0x4C
    ctx->pc = 0x178a1cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x178a20: 0x240e004d  addiu       $t6, $zero, 0x4D
    ctx->pc = 0x178a20u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x178a24: 0x0  nop
    ctx->pc = 0x178a24u;
    // NOP
label_178a28:
    // 0x178a28: 0xfe152b10  sd          $s5, 0x2B10($s0)
    ctx->pc = 0x178a28u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 11024), GPR_U64(ctx, 21));
    // 0x178a2c: 0xae002b18  sw          $zero, 0x2B18($s0)
    ctx->pc = 0x178a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11032), GPR_U32(ctx, 0));
    // 0x178a30: 0x26162b10  addiu       $s6, $s0, 0x2B10
    ctx->pc = 0x178a30u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 16), 11024));
    // 0x178a34: 0xae142b1c  sw          $s4, 0x2B1C($s0)
    ctx->pc = 0x178a34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11036), GPR_U32(ctx, 20));
    // 0x178a38: 0xfe132bb0  sd          $s3, 0x2BB0($s0)
    ctx->pc = 0x178a38u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 11184), GPR_U64(ctx, 19));
    // 0x178a3c: 0xae002bb8  sw          $zero, 0x2BB8($s0)
    ctx->pc = 0x178a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11192), GPR_U32(ctx, 0));
    // 0x178a40: 0xae002bbc  sw          $zero, 0x2BBC($s0)
    ctx->pc = 0x178a40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11196), GPR_U32(ctx, 0));
    // 0x178a44: 0xfe122b20  sd          $s2, 0x2B20($s0)
    ctx->pc = 0x178a44u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 11040), GPR_U64(ctx, 18));
    // 0x178a48: 0xfe112b28  sd          $s1, 0x2B28($s0)
    ctx->pc = 0x178a48u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 11048), GPR_U64(ctx, 17));
    // 0x178a4c: 0xfe0f2b38  sd          $t7, 0x2B38($s0)
    ctx->pc = 0x178a4cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 11064), GPR_U64(ctx, 15));
    // 0x178a50: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x178A50u;
    {
        const bool branch_taken_0x178a50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x178A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178A50u;
        // 0x178a54: 0xfe0e2b48  sd          $t6, 0x2B48($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 11080), GPR_U64(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178a50) {
            ctx->pc = 0x178A68u;
            goto label_178a68;
        }
    }
    ctx->pc = 0x178A58u;
    // 0x178a58: 0xfecd0020  sd          $t5, 0x20($s6)
    ctx->pc = 0x178a58u;
    WRITE64(ADD32(GPR_U32(ctx, 22), 32), GPR_U64(ctx, 13));
    // 0x178a5c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x178A5Cu;
    {
        const bool branch_taken_0x178a5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x178A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178A5Cu;
        // 0x178a60: 0xfecd0030  sd          $t5, 0x30($s6) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 22), 48), GPR_U64(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178a5c) {
            ctx->pc = 0x178A70u;
            goto label_178a70;
        }
    }
    ctx->pc = 0x178A64u;
    // 0x178a64: 0x0  nop
    ctx->pc = 0x178a64u;
    // NOP
label_178a68:
    // 0x178a68: 0xfecc0020  sd          $t4, 0x20($s6)
    ctx->pc = 0x178a68u;
    WRITE64(ADD32(GPR_U32(ctx, 22), 32), GPR_U64(ctx, 12));
    // 0x178a6c: 0xfecc0030  sd          $t4, 0x30($s6)
    ctx->pc = 0x178a6cu;
    WRITE64(ADD32(GPR_U32(ctx, 22), 48), GPR_U64(ctx, 12));
label_178a70:
    // 0x178a70: 0xfecb0048  sd          $t3, 0x48($s6)
    ctx->pc = 0x178a70u;
    WRITE64(ADD32(GPR_U32(ctx, 22), 72), GPR_U64(ctx, 11));
    // 0x178a74: 0xfeca0058  sd          $t2, 0x58($s6)
    ctx->pc = 0x178a74u;
    WRITE64(ADD32(GPR_U32(ctx, 22), 88), GPR_U64(ctx, 10));
    // 0x178a78: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x178a78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x178a7c: 0xfec90068  sd          $t1, 0x68($s6)
    ctx->pc = 0x178a7cu;
    WRITE64(ADD32(GPR_U32(ctx, 22), 104), GPR_U64(ctx, 9));
    // 0x178a80: 0x28640002  slti        $a0, $v1, 0x2
    ctx->pc = 0x178a80u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x178a84: 0xfec80060  sd          $t0, 0x60($s6)
    ctx->pc = 0x178a84u;
    WRITE64(ADD32(GPR_U32(ctx, 22), 96), GPR_U64(ctx, 8));
    // 0x178a88: 0x261000b0  addiu       $s0, $s0, 0xB0
    ctx->pc = 0x178a88u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x178a8c: 0xfec70078  sd          $a3, 0x78($s6)
    ctx->pc = 0x178a8cu;
    WRITE64(ADD32(GPR_U32(ctx, 22), 120), GPR_U64(ctx, 7));
    // 0x178a90: 0xfec00070  sd          $zero, 0x70($s6)
    ctx->pc = 0x178a90u;
    WRITE64(ADD32(GPR_U32(ctx, 22), 112), GPR_U64(ctx, 0));
    // 0x178a94: 0xfec60088  sd          $a2, 0x88($s6)
    ctx->pc = 0x178a94u;
    WRITE64(ADD32(GPR_U32(ctx, 22), 136), GPR_U64(ctx, 6));
    // 0x178a98: 0xfec00080  sd          $zero, 0x80($s6)
    ctx->pc = 0x178a98u;
    WRITE64(ADD32(GPR_U32(ctx, 22), 128), GPR_U64(ctx, 0));
    // 0x178a9c: 0x1480ffe2  bnez        $a0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x178A9Cu;
    {
        const bool branch_taken_0x178a9c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x178AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178A9Cu;
        // 0x178aa0: 0xfec50098  sd          $a1, 0x98($s6) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 22), 152), GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178a9c) {
            ctx->pc = 0x178A28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_178a28;
        }
    }
    ctx->pc = 0x178AA4u;
    // 0x178aa4: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x178aa4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x178aa8: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x178aa8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x178aac: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x178aacu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x178ab0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x178ab0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x178ab4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x178ab4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x178ab8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x178ab8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x178abc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x178abcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x178ac0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x178ac0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x178ac4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x178ac4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x178ac8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x178ac8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x178acc: 0x3e00008  jr          $ra
    ctx->pc = 0x178ACCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x178AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178ACCu;
        // 0x178ad0: 0x27bd0400  addiu       $sp, $sp, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1024));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x178ACCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x178AD4u;
}
