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

// Function: sub_0024D4B0
// Address: 0x24d4b0 - 0x24d64c
void sub_0024D4B0_0x24d4b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024D4B0_0x24d4b0");
#endif

    switch (ctx->pc) {
        case 0x24d510u: goto label_24d510;
        default: break;
    }

    ctx->pc = 0x24d4b0u;

    // 0x24d4b0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x24d4b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x24d4b4: 0x80782d  daddu       $t7, $a0, $zero
    ctx->pc = 0x24d4b4u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d4b8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24d4b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x24d4bc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x24d4bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d4c0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x24d4c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x24d4c4: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x24d4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x24d4c8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x24d4c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x24d4cc: 0x24128000  addiu       $s2, $zero, -0x8000
    ctx->pc = 0x24d4ccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x24d4d0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x24d4d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x24d4d4: 0x24137fff  addiu       $s3, $zero, 0x7FFF
    ctx->pc = 0x24d4d4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    // 0x24d4d8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x24d4d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x24d4dc: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x24d4dcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d4e0: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x24d4e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x24d4e4: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x24d4e4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d4e8: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x24d4e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x24d4ec: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x24d4ecu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d4f0: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x24d4f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x24d4f4: 0x241707d6  addiu       $s7, $zero, 0x7D6
    ctx->pc = 0x24d4f4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 2006));
    // 0x24d4f8: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x24d4f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x24d4fc: 0x241e0def  addiu       $fp, $zero, 0xDEF
    ctx->pc = 0x24d4fcu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 3567));
    // 0x24d500: 0x2451de10  addiu       $s1, $v0, -0x21F0
    ctx->pc = 0x24d500u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958608));
    // 0x24d504: 0x8df9000c  lw          $t9, 0xC($t7)
    ctx->pc = 0x24d504u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 12)));
    // 0x24d508: 0x8df80008  lw          $t8, 0x8($t7)
    ctx->pc = 0x24d508u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 8)));
    // 0x24d50c: 0x0  nop
    ctx->pc = 0x24d50cu;
    // NOP
label_24d510:
    // 0x24d510: 0x8de3001c  lw          $v1, 0x1C($t7)
    ctx->pc = 0x24d510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 28)));
    // 0x24d514: 0x106040  sll         $t4, $s0, 1
    ctx->pc = 0x24d514u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x24d518: 0x8de20020  lw          $v0, 0x20($t7)
    ctx->pc = 0x24d518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 32)));
    // 0x24d51c: 0x1962021  addu        $a0, $t4, $s6
    ctx->pc = 0x24d51cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 22)));
    // 0x24d520: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x24d520u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x24d524: 0x84850000  lh          $a1, 0x0($a0)
    ctx->pc = 0x24d524u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x24d528: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x24d528u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x24d52c: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x24d52cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x24d530: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x24d530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x24d534: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x24d534u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24d538: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x24d538u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24d53c: 0x240e7fff  addiu       $t6, $zero, 0x7FFF
    ctx->pc = 0x24d53cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    // 0x24d540: 0x8de20028  lw          $v0, 0x28($t7)
    ctx->pc = 0x24d540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 40)));
    // 0x24d544: 0xa42018  mult        $a0, $a1, $a0
    ctx->pc = 0x24d544u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x24d548: 0x70a62818  mult1       $a1, $a1, $a2
    ctx->pc = 0x24d548u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x24d54c: 0x8de30024  lw          $v1, 0x24($t7)
    ctx->pc = 0x24d54cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 36)));
    // 0x24d550: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x24d550u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x24d554: 0x8f070000  lw          $a3, 0x0($t8)
    ctx->pc = 0x24d554u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x24d558: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x24d558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x24d55c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x24d55cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x24d560: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x24d560u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24d564: 0x42303  sra         $a0, $a0, 12
    ctx->pc = 0x24d564u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 12));
    // 0x24d568: 0x52b03  sra         $a1, $a1, 12
    ctx->pc = 0x24d568u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 12));
    // 0x24d56c: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x24d56cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x24d570: 0xa64018  mult        $t0, $a1, $a2
    ctx->pc = 0x24d570u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x24d574: 0x70863018  mult1       $a2, $a0, $a2
    ctx->pc = 0x24d574u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 6); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x24d578: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x24d578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24d57c: 0x240d7fff  addiu       $t5, $zero, 0x7FFF
    ctx->pc = 0x24d57cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    // 0x24d580: 0x8f230000  lw          $v1, 0x0($t9)
    ctx->pc = 0x24d580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 0)));
    // 0x24d584: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x24d584u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x24d588: 0xa22818  mult        $a1, $a1, $v0
    ctx->pc = 0x24d588u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x24d58c: 0x70822018  mult1       $a0, $a0, $v0
    ctx->pc = 0x24d58cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x24d590: 0x63303  sra         $a2, $a2, 12
    ctx->pc = 0x24d590u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 12));
    // 0x24d594: 0x2402f211  addiu       $v0, $zero, -0xDEF
    ctx->pc = 0x24d594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963729));
    // 0x24d598: 0x84303  sra         $t0, $t0, 12
    ctx->pc = 0x24d598u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), 12));
    // 0x24d59c: 0x70d75818  mult1       $t3, $a2, $s7
    ctx->pc = 0x24d59cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 23); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
    // 0x24d5a0: 0xc23018  mult        $a2, $a2, $v0
    ctx->pc = 0x24d5a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x24d5a4: 0x2402f82a  addiu       $v0, $zero, -0x7D6
    ctx->pc = 0x24d5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965290));
    // 0x24d5a8: 0x11e5018  mult        $t2, $t0, $fp
    ctx->pc = 0x24d5a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 30); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x24d5ac: 0x71024018  mult1       $t0, $t0, $v0
    ctx->pc = 0x24d5acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 2); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x24d5b0: 0x42303  sra         $a0, $a0, 12
    ctx->pc = 0x24d5b0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 12));
    // 0x24d5b4: 0x52b03  sra         $a1, $a1, 12
    ctx->pc = 0x24d5b4u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 12));
    // 0x24d5b8: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x24d5b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x24d5bc: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x24d5bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x24d5c0: 0x264102a  slt         $v0, $s3, $a0
    ctx->pc = 0x24d5c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x24d5c4: 0x265182a  slt         $v1, $s3, $a1
    ctx->pc = 0x24d5c4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x24d5c8: 0x28878000  slti        $a3, $a0, -0x8000
    ctx->pc = 0x24d5c8u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4294934528) ? 1 : 0);
    // 0x24d5cc: 0x28a98000  slti        $t1, $a1, -0x8000
    ctx->pc = 0x24d5ccu;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4294934528) ? 1 : 0);
    // 0x24d5d0: 0x38420000  xori        $v0, $v0, 0x0
    ctx->pc = 0x24d5d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)0);
    // 0x24d5d4: 0x38630000  xori        $v1, $v1, 0x0
    ctx->pc = 0x24d5d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)0);
    // 0x24d5d8: 0xc83021  addu        $a2, $a2, $t0
    ctx->pc = 0x24d5d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x24d5dc: 0x14b5021  addu        $t2, $t2, $t3
    ctx->pc = 0x24d5dcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
    // 0x24d5e0: 0x247200b  movn        $a0, $s2, $a3
    ctx->pc = 0x24d5e0u;
    if (GPR_U64(ctx, 7) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 18));
    // 0x24d5e4: 0x249280b  movn        $a1, $s2, $t1
    ctx->pc = 0x24d5e4u;
    if (GPR_U64(ctx, 9) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 18));
    // 0x24d5e8: 0x1c2200b  movn        $a0, $t6, $v0
    ctx->pc = 0x24d5e8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 14));
    // 0x24d5ec: 0x1941021  addu        $v0, $t4, $s4
    ctx->pc = 0x24d5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 20)));
    // 0x24d5f0: 0x1a3280b  movn        $a1, $t5, $v1
    ctx->pc = 0x24d5f0u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 13));
    // 0x24d5f4: 0x2a030020  slti        $v1, $s0, 0x20
    ctx->pc = 0x24d5f4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x24d5f8: 0x63303  sra         $a2, $a2, 12
    ctx->pc = 0x24d5f8u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 12));
    // 0x24d5fc: 0xa5303  sra         $t2, $t2, 12
    ctx->pc = 0x24d5fcu;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 10), 12));
    // 0x24d600: 0x1956021  addu        $t4, $t4, $s5
    ctx->pc = 0x24d600u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 21)));
    // 0x24d604: 0xaf060000  sw          $a2, 0x0($t8)
    ctx->pc = 0x24d604u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 0), GPR_U32(ctx, 6));
    // 0x24d608: 0xa5840000  sh          $a0, 0x0($t4)
    ctx->pc = 0x24d608u;
    WRITE16(ADD32(GPR_U32(ctx, 12), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x24d60c: 0x27180004  addiu       $t8, $t8, 0x4
    ctx->pc = 0x24d60cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 4));
    // 0x24d610: 0xaf2a0000  sw          $t2, 0x0($t9)
    ctx->pc = 0x24d610u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 0), GPR_U32(ctx, 10));
    // 0x24d614: 0x27390004  addiu       $t9, $t9, 0x4
    ctx->pc = 0x24d614u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 4));
    // 0x24d618: 0x1460ffbd  bnez        $v1, . + 4 + (-0x43 << 2)
    ctx->pc = 0x24D618u;
    {
        const bool branch_taken_0x24d618 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x24D61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D618u;
        // 0x24d61c: 0xa4450000  sh          $a1, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d618) {
            ctx->pc = 0x24D510u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24d510;
        }
    }
    ctx->pc = 0x24D620u;
    // 0x24d620: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24d620u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24d624: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x24d624u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x24d628: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x24d628u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24d62c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x24d62cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x24d630: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x24d630u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24d634: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x24d634u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24d638: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x24d638u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24d63c: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x24d63cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x24d640: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x24d640u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x24d644: 0x3e00008  jr          $ra
    ctx->pc = 0x24D644u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24D648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D644u;
        // 0x24d648: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24D644u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24D64Cu;
}
