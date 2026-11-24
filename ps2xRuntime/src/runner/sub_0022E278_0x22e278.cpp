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

// Function: sub_0022E278
// Address: 0x22e278 - 0x22e63c
void sub_0022E278_0x22e278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022E278_0x22e278");
#endif

    switch (ctx->pc) {
        case 0x22e308u: goto label_22e308;
        case 0x22e3d8u: goto label_22e3d8;
        default: break;
    }

    ctx->pc = 0x22e278u;

    // 0x22e278: 0x517c2  srl         $v0, $a1, 31
    ctx->pc = 0x22e278u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x22e27c: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x22e27cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x22e280: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x22e280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x22e284: 0xafa90008  sw          $t1, 0x8($sp)
    ctx->pc = 0x22e284u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 9));
    // 0x22e288: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x22e288u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x22e28c: 0x87a30078  lh          $v1, 0x78($sp)
    ctx->pc = 0x22e28cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22e290: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x22e290u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x22e294: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x22e294u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e298: 0x87a20080  lh          $v0, 0x80($sp)
    ctx->pc = 0x22e298u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x22e29c: 0xa5400  sll         $t2, $t2, 16
    ctx->pc = 0x22e29cu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 16));
    // 0x22e2a0: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x22e2a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x22e2a4: 0xb5c00  sll         $t3, $t3, 16
    ctx->pc = 0x22e2a4u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 16));
    // 0x22e2a8: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x22e2a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x22e2ac: 0xa9c03  sra         $s3, $t2, 16
    ctx->pc = 0x22e2acu;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 10), 16));
    // 0x22e2b0: 0xffb70058  sd          $s7, 0x58($sp)
    ctx->pc = 0x22e2b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 23));
    // 0x22e2b4: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x22e2b4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e2b8: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x22e2b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x22e2bc: 0xb9403  sra         $s2, $t3, 16
    ctx->pc = 0x22e2bcu;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 11), 16));
    // 0x22e2c0: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x22e2c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x22e2c4: 0x80782d  daddu       $t7, $a0, $zero
    ctx->pc = 0x22e2c4u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e2c8: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x22e2c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x22e2cc: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x22e2ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x22e2d0: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x22e2d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x22e2d4: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x22e2d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
    // 0x22e2d8: 0xffbe0060  sd          $fp, 0x60($sp)
    ctx->pc = 0x22e2d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 30));
    // 0x22e2dc: 0xafa70004  sw          $a3, 0x4($sp)
    ctx->pc = 0x22e2dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 7));
    // 0x22e2e0: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x22e2e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x22e2e4: 0xafa3000c  sw          $v1, 0xC($sp)
    ctx->pc = 0x22e2e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
    // 0x22e2e8: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x22e2e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x22e2ec: 0x8fa60014  lw          $a2, 0x14($sp)
    ctx->pc = 0x22e2ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x22e2f0: 0x84f80000  lh          $t8, 0x0($a3)
    ctx->pc = 0x22e2f0u;
    SET_GPR_S32(ctx, 24, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x22e2f4: 0x84ec0002  lh          $t4, 0x2($a3)
    ctx->pc = 0x22e2f4u;
    SET_GPR_S32(ctx, 12, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x22e2f8: 0x84b90000  lh          $t9, 0x0($a1)
    ctx->pc = 0x22e2f8u;
    SET_GPR_S32(ctx, 25, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x22e2fc: 0x18c000bd  blez        $a2, . + 4 + (0xBD << 2)
    ctx->pc = 0x22E2FCu;
    {
        const bool branch_taken_0x22e2fc = (GPR_S64(ctx, 6) <= 0);
        ctx->pc = 0x22E300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E2FCu;
        // 0x22e300: 0x84b10002  lh          $s1, 0x2($a1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e2fc) {
            ctx->pc = 0x22E5F4u;
            goto label_22e5f4;
        }
    }
    ctx->pc = 0x22E304u;
    // 0x22e304: 0x0  nop
    ctx->pc = 0x22e304u;
    // NOP
label_22e308:
    // 0x22e308: 0x95e30000  lhu         $v1, 0x0($t7)
    ctx->pc = 0x22e308u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x22e30c: 0x2405ff00  addiu       $a1, $zero, -0x100
    ctx->pc = 0x22e30cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x22e310: 0x91e40001  lbu         $a0, 0x1($t7)
    ctx->pc = 0x22e310u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 1)));
    // 0x22e314: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x22e314u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x22e318: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x22e318u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x22e31c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x22e31cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x22e320: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x22e320u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x22e324: 0x42c03  sra         $a1, $a0, 16
    ctx->pc = 0x22e324u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 4), 16));
    // 0x22e328: 0x30a38000  andi        $v1, $a1, 0x8000
    ctx->pc = 0x22e328u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32768);
    // 0x22e32c: 0x146000b8  bnez        $v1, . + 4 + (0xB8 << 2)
    ctx->pc = 0x22E32Cu;
    {
        const bool branch_taken_0x22e32c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x22E330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E32Cu;
        // 0x22e330: 0x171040  sll         $v0, $s7, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e32c) {
            ctx->pc = 0x22E610u;
            goto label_22e610;
        }
    }
    ctx->pc = 0x22E334u;
    // 0x22e334: 0x8fa60070  lw          $a2, 0x70($sp)
    ctx->pc = 0x22e334u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x22e338: 0x94c30000  lhu         $v1, 0x0($a2)
    ctx->pc = 0x22e338u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x22e33c: 0x8fa60010  lw          $a2, 0x10($sp)
    ctx->pc = 0x22e33cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22e340: 0xc00013  mtlo        $a2
    ctx->pc = 0x22e340u;
    ctx->lo = GPR_U64(ctx, 6);
    // 0x22e344: 0x8fa6000c  lw          $a2, 0xC($sp)
    ctx->pc = 0x22e344u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x22e348: 0x70662000  madd        $a0, $v1, $a2
    ctx->pc = 0x22e348u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x22e34c: 0xa31826  xor         $v1, $a1, $v1
    ctx->pc = 0x22e34cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 3));
    // 0x22e350: 0x30631fff  andi        $v1, $v1, 0x1FFF
    ctx->pc = 0x22e350u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8191);
    // 0x22e354: 0x2405ff00  addiu       $a1, $zero, -0x100
    ctx->pc = 0x22e354u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x22e358: 0x24750001  addiu       $s5, $v1, 0x1
    ctx->pc = 0x22e358u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x22e35c: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x22e35cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x22e360: 0x30867fff  andi        $a2, $a0, 0x7FFF
    ctx->pc = 0x22e360u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32767);
    // 0x22e364: 0xa4660000  sh          $a2, 0x0($v1)
    ctx->pc = 0x22e364u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x22e368: 0x95e30012  lhu         $v1, 0x12($t7)
    ctx->pc = 0x22e368u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 15), 18)));
    // 0x22e36c: 0x91e40013  lbu         $a0, 0x13($t7)
    ctx->pc = 0x22e36cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 19)));
    // 0x22e370: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x22e370u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x22e374: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x22e374u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x22e378: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x22e378u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x22e37c: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x22e37cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x22e380: 0x42c03  sra         $a1, $a0, 16
    ctx->pc = 0x22e380u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 4), 16));
    // 0x22e384: 0x30a38000  andi        $v1, $a1, 0x8000
    ctx->pc = 0x22e384u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32768);
    // 0x22e388: 0x146000a1  bnez        $v1, . + 4 + (0xA1 << 2)
    ctx->pc = 0x22E388u;
    {
        const bool branch_taken_0x22e388 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x22E38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E388u;
        // 0x22e38c: 0x8fa30010  lw          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e388) {
            ctx->pc = 0x22E610u;
            goto label_22e610;
        }
    }
    ctx->pc = 0x22E390u;
    // 0x22e390: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x22e390u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x22e394: 0x249ea268  addiu       $fp, $a0, -0x5D98
    ctx->pc = 0x22e394u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943336));
    // 0x22e398: 0x25ef0002  addiu       $t7, $t7, 0x2
    ctx->pc = 0x22e398u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 2));
    // 0x22e39c: 0x600013  mtlo        $v1
    ctx->pc = 0x22e39cu;
    ctx->lo = GPR_U64(ctx, 3);
    // 0x22e3a0: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x22e3a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x22e3a4: 0x34108000  ori         $s0, $zero, 0x8000
    ctx->pc = 0x22e3a4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x22e3a8: 0x340bffff  ori         $t3, $zero, 0xFFFF
    ctx->pc = 0x22e3a8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x22e3ac: 0x70661000  madd        $v0, $v1, $a2
    ctx->pc = 0x22e3acu;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x22e3b0: 0xa61826  xor         $v1, $a1, $a2
    ctx->pc = 0x22e3b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 6));
    // 0x22e3b4: 0x8fa50070  lw          $a1, 0x70($sp)
    ctx->pc = 0x22e3b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x22e3b8: 0x30631fff  andi        $v1, $v1, 0x1FFF
    ctx->pc = 0x22e3b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8191);
    // 0x22e3bc: 0x24740001  addiu       $s4, $v1, 0x1
    ctx->pc = 0x22e3bcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x22e3c0: 0x240d7fff  addiu       $t5, $zero, 0x7FFF
    ctx->pc = 0x22e3c0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    // 0x22e3c4: 0x240a000a  addiu       $t2, $zero, 0xA
    ctx->pc = 0x22e3c4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x22e3c8: 0x2416001e  addiu       $s6, $zero, 0x1E
    ctx->pc = 0x22e3c8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x22e3cc: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x22e3ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x22e3d0: 0xa4a20000  sh          $v0, 0x0($a1)
    ctx->pc = 0x22e3d0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x22e3d4: 0x0  nop
    ctx->pc = 0x22e3d4u;
    // NOP
label_22e3d8:
    // 0x22e3d8: 0x91e20000  lbu         $v0, 0x0($t7)
    ctx->pc = 0x22e3d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x22e3dc: 0x24c3018  mult        $a2, $s2, $t4
    ctx->pc = 0x22e3dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x22e3e0: 0x72781818  mult1       $v1, $s3, $t8
    ctx->pc = 0x22e3e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 24); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x22e3e4: 0x91e40012  lbu         $a0, 0x12($t7)
    ctx->pc = 0x22e3e4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 18)));
    // 0x22e3e8: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x22e3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x22e3ec: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x22e3ecu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x22e3f0: 0x22f03  sra         $a1, $v0, 28
    ctx->pc = 0x22e3f0u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 28));
    // 0x22e3f4: 0x27603  sra         $t6, $v0, 24
    ctx->pc = 0x22e3f4u;
    SET_GPR_S32(ctx, 14, SRA32(GPR_S32(ctx, 2), 24));
    // 0x22e3f8: 0xb52818  mult        $a1, $a1, $s5
    ctx->pc = 0x22e3f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x22e3fc: 0x42600  sll         $a0, $a0, 24
    ctx->pc = 0x22e3fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x22e400: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x22e400u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x22e404: 0x46703  sra         $t4, $a0, 28
    ctx->pc = 0x22e404u;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 4), 28));
    // 0x22e408: 0x31b03  sra         $v1, $v1, 12
    ctx->pc = 0x22e408u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 12));
    // 0x22e40c: 0x653021  addu        $a2, $v1, $a1
    ctx->pc = 0x22e40cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x22e410: 0xd01021  addu        $v0, $a2, $s0
    ctx->pc = 0x22e410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x22e414: 0x162102b  sltu        $v0, $t3, $v0
    ctx->pc = 0x22e414u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x22e418: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x22E418u;
    {
        const bool branch_taken_0x22e418 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E418u;
        // 0x22e41c: 0x43e03  sra         $a3, $a0, 24 (Delay Slot)
        SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 4), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e418) {
            ctx->pc = 0x22E438u;
            goto label_22e438;
        }
    }
    ctx->pc = 0x22E420u;
    // 0x22e420: 0x28c28000  slti        $v0, $a2, -0x8000
    ctx->pc = 0x22e420u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4294934528) ? 1 : 0);
    // 0x22e424: 0x1a6182a  slt         $v1, $t5, $a2
    ctx->pc = 0x22e424u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 13) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x22e428: 0x1a3300b  movn        $a2, $t5, $v1
    ctx->pc = 0x22e428u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 13));
    // 0x22e42c: 0x24038000  addiu       $v1, $zero, -0x8000
    ctx->pc = 0x22e42cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x22e430: 0x38420000  xori        $v0, $v0, 0x0
    ctx->pc = 0x22e430u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)0);
    // 0x22e434: 0x62300b  movn        $a2, $v1, $v0
    ctx->pc = 0x22e434u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
label_22e438:
    // 0x22e438: 0x2511018  mult        $v0, $s2, $s1
    ctx->pc = 0x22e438u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x22e43c: 0x72791818  mult1       $v1, $s3, $t9
    ctx->pc = 0x22e43cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 25); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x22e440: 0x1942018  mult        $a0, $t4, $s4
    ctx->pc = 0x22e440u;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x22e444: 0x300602d  daddu       $t4, $t8, $zero
    ctx->pc = 0x22e444u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e448: 0xc0c02d  daddu       $t8, $a2, $zero
    ctx->pc = 0x22e448u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e44c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x22e44cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22e450: 0x31b03  sra         $v1, $v1, 12
    ctx->pc = 0x22e450u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 12));
    // 0x22e454: 0x643021  addu        $a2, $v1, $a0
    ctx->pc = 0x22e454u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x22e458: 0xd01021  addu        $v0, $a2, $s0
    ctx->pc = 0x22e458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x22e45c: 0x162102b  sltu        $v0, $t3, $v0
    ctx->pc = 0x22e45cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x22e460: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x22E460u;
    {
        const bool branch_taken_0x22e460 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E460u;
        // 0x22e464: 0x320882d  daddu       $s1, $t9, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e460) {
            ctx->pc = 0x22E480u;
            goto label_22e480;
        }
    }
    ctx->pc = 0x22E468u;
    // 0x22e468: 0x28c28000  slti        $v0, $a2, -0x8000
    ctx->pc = 0x22e468u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4294934528) ? 1 : 0);
    // 0x22e46c: 0x1a6182a  slt         $v1, $t5, $a2
    ctx->pc = 0x22e46cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 13) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x22e470: 0x1a3300b  movn        $a2, $t5, $v1
    ctx->pc = 0x22e470u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 13));
    // 0x22e474: 0x24038000  addiu       $v1, $zero, -0x8000
    ctx->pc = 0x22e474u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x22e478: 0x38420000  xori        $v0, $v0, 0x0
    ctx->pc = 0x22e478u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)0);
    // 0x22e47c: 0x62300b  movn        $a2, $v1, $v0
    ctx->pc = 0x22e47cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
label_22e480:
    // 0x22e480: 0xc0c82d  daddu       $t9, $a2, $zero
    ctx->pc = 0x22e480u;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e484: 0x3191821  addu        $v1, $t8, $t9
    ctx->pc = 0x22e484u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 25)));
    // 0x22e488: 0x51400001  beql        $t2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x22E488u;
    {
        const bool branch_taken_0x22e488 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        if (branch_taken_0x22e488) {
            ctx->pc = 0x22E48Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22E488u;
            // 0x22e48c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x22E490u;
            goto label_22e490;
        }
    }
    ctx->pc = 0x22E490u;
label_22e490:
    // 0x22e490: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x22e490u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x22e494: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x22e494u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x22e498: 0x4a001a  div         $zero, $v0, $t2
    ctx->pc = 0x22e498u;
    { int32_t divisor = GPR_S32(ctx, 10);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x22e49c: 0x1012  mflo        $v0
    ctx->pc = 0x22e49cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x22e4a0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x22e4a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e4a4: 0xd01821  addu        $v1, $a2, $s0
    ctx->pc = 0x22e4a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x22e4a8: 0x163182b  sltu        $v1, $t3, $v1
    ctx->pc = 0x22e4a8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x22e4ac: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x22E4ACu;
    {
        const bool branch_taken_0x22e4ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E4ACu;
        // 0x22e4b0: 0x31c2000f  andi        $v0, $t6, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e4ac) {
            ctx->pc = 0x22E4D0u;
            goto label_22e4d0;
        }
    }
    ctx->pc = 0x22E4B4u;
    // 0x22e4b4: 0x28c28000  slti        $v0, $a2, -0x8000
    ctx->pc = 0x22e4b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4294934528) ? 1 : 0);
    // 0x22e4b8: 0x1a6182a  slt         $v1, $t5, $a2
    ctx->pc = 0x22e4b8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 13) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x22e4bc: 0x1a3300b  movn        $a2, $t5, $v1
    ctx->pc = 0x22e4bcu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 13));
    // 0x22e4c0: 0x24038000  addiu       $v1, $zero, -0x8000
    ctx->pc = 0x22e4c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x22e4c4: 0x38420000  xori        $v0, $v0, 0x0
    ctx->pc = 0x22e4c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)0);
    // 0x22e4c8: 0x62300b  movn        $a2, $v1, $v0
    ctx->pc = 0x22e4c8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
    // 0x22e4cc: 0x31c2000f  andi        $v0, $t6, 0xF
    ctx->pc = 0x22e4ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)15);
label_22e4d0:
    // 0x22e4d0: 0x24c2818  mult        $a1, $s2, $t4
    ctx->pc = 0x22e4d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x22e4d4: 0x72782018  mult1       $a0, $s3, $t8
    ctx->pc = 0x22e4d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 24); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x22e4d8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x22e4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x22e4dc: 0x5e1021  addu        $v0, $v0, $fp
    ctx->pc = 0x22e4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x22e4e0: 0xa5060000  sh          $a2, 0x0($t0)
    ctx->pc = 0x22e4e0u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x22e4e4: 0x8c4e0000  lw          $t6, 0x0($v0)
    ctx->pc = 0x22e4e4u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22e4e8: 0x30e3000f  andi        $v1, $a3, 0xF
    ctx->pc = 0x22e4e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)15);
    // 0x22e4ec: 0xa5260000  sh          $a2, 0x0($t1)
    ctx->pc = 0x22e4ecu;
    WRITE16(ADD32(GPR_U32(ctx, 9), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x22e4f0: 0x25290002  addiu       $t1, $t1, 0x2
    ctx->pc = 0x22e4f0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 2));
    // 0x22e4f4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x22e4f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x22e4f8: 0x1d52818  mult        $a1, $t6, $s5
    ctx->pc = 0x22e4f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x22e4fc: 0x42303  sra         $a0, $a0, 12
    ctx->pc = 0x22e4fcu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 12));
    // 0x22e500: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x22e500u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x22e504: 0x7e1821  addu        $v1, $v1, $fp
    ctx->pc = 0x22e504u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
    // 0x22e508: 0x25080002  addiu       $t0, $t0, 0x2
    ctx->pc = 0x22e508u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
    // 0x22e50c: 0x853021  addu        $a2, $a0, $a1
    ctx->pc = 0x22e50cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x22e510: 0xd01021  addu        $v0, $a2, $s0
    ctx->pc = 0x22e510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x22e514: 0x162102b  sltu        $v0, $t3, $v0
    ctx->pc = 0x22e514u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x22e518: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x22E518u;
    {
        const bool branch_taken_0x22e518 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E518u;
        // 0x22e51c: 0x8c670000  lw          $a3, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e518) {
            ctx->pc = 0x22E538u;
            goto label_22e538;
        }
    }
    ctx->pc = 0x22E520u;
    // 0x22e520: 0x28c28000  slti        $v0, $a2, -0x8000
    ctx->pc = 0x22e520u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4294934528) ? 1 : 0);
    // 0x22e524: 0x1a6182a  slt         $v1, $t5, $a2
    ctx->pc = 0x22e524u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 13) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x22e528: 0x1a3300b  movn        $a2, $t5, $v1
    ctx->pc = 0x22e528u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 13));
    // 0x22e52c: 0x24038000  addiu       $v1, $zero, -0x8000
    ctx->pc = 0x22e52cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x22e530: 0x38420000  xori        $v0, $v0, 0x0
    ctx->pc = 0x22e530u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)0);
    // 0x22e534: 0x62300b  movn        $a2, $v1, $v0
    ctx->pc = 0x22e534u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
label_22e538:
    // 0x22e538: 0x2511018  mult        $v0, $s2, $s1
    ctx->pc = 0x22e538u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x22e53c: 0x72791818  mult1       $v1, $s3, $t9
    ctx->pc = 0x22e53cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 25); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x22e540: 0xf42018  mult        $a0, $a3, $s4
    ctx->pc = 0x22e540u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x22e544: 0x300602d  daddu       $t4, $t8, $zero
    ctx->pc = 0x22e544u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e548: 0xc0c02d  daddu       $t8, $a2, $zero
    ctx->pc = 0x22e548u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e54c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x22e54cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22e550: 0x31b03  sra         $v1, $v1, 12
    ctx->pc = 0x22e550u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 12));
    // 0x22e554: 0x643021  addu        $a2, $v1, $a0
    ctx->pc = 0x22e554u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x22e558: 0xd01021  addu        $v0, $a2, $s0
    ctx->pc = 0x22e558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x22e55c: 0x162102b  sltu        $v0, $t3, $v0
    ctx->pc = 0x22e55cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x22e560: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x22E560u;
    {
        const bool branch_taken_0x22e560 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E560u;
        // 0x22e564: 0x320882d  daddu       $s1, $t9, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e560) {
            ctx->pc = 0x22E580u;
            goto label_22e580;
        }
    }
    ctx->pc = 0x22E568u;
    // 0x22e568: 0x28c28000  slti        $v0, $a2, -0x8000
    ctx->pc = 0x22e568u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4294934528) ? 1 : 0);
    // 0x22e56c: 0x1a6182a  slt         $v1, $t5, $a2
    ctx->pc = 0x22e56cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 13) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x22e570: 0x1a3300b  movn        $a2, $t5, $v1
    ctx->pc = 0x22e570u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 13));
    // 0x22e574: 0x24038000  addiu       $v1, $zero, -0x8000
    ctx->pc = 0x22e574u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x22e578: 0x38420000  xori        $v0, $v0, 0x0
    ctx->pc = 0x22e578u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)0);
    // 0x22e57c: 0x62300b  movn        $a2, $v1, $v0
    ctx->pc = 0x22e57cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
label_22e580:
    // 0x22e580: 0xc0c82d  daddu       $t9, $a2, $zero
    ctx->pc = 0x22e580u;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e584: 0x3191821  addu        $v1, $t8, $t9
    ctx->pc = 0x22e584u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 25)));
    // 0x22e588: 0x51400001  beql        $t2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x22E588u;
    {
        const bool branch_taken_0x22e588 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        if (branch_taken_0x22e588) {
            ctx->pc = 0x22E58Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22E588u;
            // 0x22e58c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x22E590u;
            goto label_22e590;
        }
    }
    ctx->pc = 0x22E590u;
label_22e590:
    // 0x22e590: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x22e590u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x22e594: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x22e594u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x22e598: 0x4a001a  div         $zero, $v0, $t2
    ctx->pc = 0x22e598u;
    { int32_t divisor = GPR_S32(ctx, 10);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x22e59c: 0x1012  mflo        $v0
    ctx->pc = 0x22e59cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x22e5a0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x22e5a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e5a4: 0xd01821  addu        $v1, $a2, $s0
    ctx->pc = 0x22e5a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x22e5a8: 0x163182b  sltu        $v1, $t3, $v1
    ctx->pc = 0x22e5a8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x22e5ac: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x22E5ACu;
    {
        const bool branch_taken_0x22e5ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E5ACu;
        // 0x22e5b0: 0x26d6fffe  addiu       $s6, $s6, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e5ac) {
            ctx->pc = 0x22E5CCu;
            goto label_22e5cc;
        }
    }
    ctx->pc = 0x22E5B4u;
    // 0x22e5b4: 0x28c28000  slti        $v0, $a2, -0x8000
    ctx->pc = 0x22e5b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4294934528) ? 1 : 0);
    // 0x22e5b8: 0x1a6182a  slt         $v1, $t5, $a2
    ctx->pc = 0x22e5b8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 13) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x22e5bc: 0x1a3300b  movn        $a2, $t5, $v1
    ctx->pc = 0x22e5bcu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 13));
    // 0x22e5c0: 0x24038000  addiu       $v1, $zero, -0x8000
    ctx->pc = 0x22e5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x22e5c4: 0x38420000  xori        $v0, $v0, 0x0
    ctx->pc = 0x22e5c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)0);
    // 0x22e5c8: 0x62300b  movn        $a2, $v1, $v0
    ctx->pc = 0x22e5c8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
label_22e5cc:
    // 0x22e5cc: 0xa5060000  sh          $a2, 0x0($t0)
    ctx->pc = 0x22e5ccu;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x22e5d0: 0xa5260000  sh          $a2, 0x0($t1)
    ctx->pc = 0x22e5d0u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x22e5d4: 0x25290002  addiu       $t1, $t1, 0x2
    ctx->pc = 0x22e5d4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 2));
    // 0x22e5d8: 0x6c1ff7f  bgez        $s6, . + 4 + (-0x81 << 2)
    ctx->pc = 0x22E5D8u;
    {
        const bool branch_taken_0x22e5d8 = (GPR_S64(ctx, 22) >= 0);
        ctx->pc = 0x22E5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E5D8u;
        // 0x22e5dc: 0x25080002  addiu       $t0, $t0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e5d8) {
            ctx->pc = 0x22E3D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22e3d8;
        }
    }
    ctx->pc = 0x22E5E0u;
    // 0x22e5e0: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x22e5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x22e5e4: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x22e5e4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x22e5e8: 0x2e3102a  slt         $v0, $s7, $v1
    ctx->pc = 0x22e5e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x22e5ec: 0x1440ff46  bnez        $v0, . + 4 + (-0xBA << 2)
    ctx->pc = 0x22E5ECu;
    {
        const bool branch_taken_0x22e5ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22E5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E5ECu;
        // 0x22e5f0: 0x25ef0012  addiu       $t7, $t7, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e5ec) {
            ctx->pc = 0x22E308u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22e308;
        }
    }
    ctx->pc = 0x22E5F4u;
label_22e5f4:
    // 0x22e5f4: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x22e5f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x22e5f8: 0xa4ac0002  sh          $t4, 0x2($a1)
    ctx->pc = 0x22e5f8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 2), (uint16_t)GPR_U32(ctx, 12));
    // 0x22e5fc: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x22e5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22e600: 0xa4b80000  sh          $t8, 0x0($a1)
    ctx->pc = 0x22e600u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 24));
    // 0x22e604: 0x8fa60008  lw          $a2, 0x8($sp)
    ctx->pc = 0x22e604u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x22e608: 0xa4d10002  sh          $s1, 0x2($a2)
    ctx->pc = 0x22e608u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 2), (uint16_t)GPR_U32(ctx, 17));
    // 0x22e60c: 0xa4d90000  sh          $t9, 0x0($a2)
    ctx->pc = 0x22e60cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 25));
label_22e610:
    // 0x22e610: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x22e610u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22e614: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x22e614u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x22e618: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x22e618u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22e61c: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x22e61cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x22e620: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x22e620u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22e624: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x22e624u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22e628: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x22e628u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x22e62c: 0xdfb70058  ld          $s7, 0x58($sp)
    ctx->pc = 0x22e62cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x22e630: 0xdfbe0060  ld          $fp, 0x60($sp)
    ctx->pc = 0x22e630u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x22e634: 0x3e00008  jr          $ra
    ctx->pc = 0x22E634u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22E638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E634u;
        // 0x22e638: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22E634u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22E63Cu;
}
